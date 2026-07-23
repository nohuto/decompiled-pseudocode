/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x180071394
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x180071248 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     RtlPrefixUnicodeString @ 0x180062550 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenKey @ 0x180093A20 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180093A70 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x180093C20 (NtEnumerateKey.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, _UNICODE_STRING *a3)
{
  HANDLE *v3; // r15
  ULONG v4; // r12d
  void *v5; // rdi
  WCHAR *v6; // r13
  NTSTATUS result; // eax
  _BYTE *v9; // rax
  NTSTATUS inited; // ebx
  ULONG v11; // r15d
  NTSTATUS v12; // eax
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v18; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v20; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE *v22; // [rsp+70h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+B4h] [rbp-4Ch]
  int v26; // [rsp+B8h] [rbp-48h]
  int v27; // [rsp+BCh] [rbp-44h]

  v3 = a1;
  v22 = a1;
  v4 = 0;
  KeyHandle = 0LL;
  Length = 544;
  v5 = 0LL;
  v6 = (WCHAR *)KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = NtQueryValueKey(
             *v3,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x220u,
             &ResultLength);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741789 || result == -2147483643 )
      return 0;
    return result;
  }
  if ( v25 != 4 || v26 != 4 || !v27 )
    return 0;
  String2 = *a3;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.Buffer += 4;
    }
    v9 = KeyValueInformation;
    v18 = 0;
    v20 = KeyValueInformation;
    while ( 1 )
    {
      inited = NtEnumerateKey(*v3, v4, KeyBasicInformation, v9, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v20 + 6);
        DestinationString.MaximumLength = *((_WORD *)v20 + 6);
        DestinationString.Buffer = (unsigned __int16 *)(v20 + 16);
        ObjectAttributes.RootDirectory = *v3;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
        if ( inited >= 0 )
          break;
      }
LABEL_34:
      v9 = v20;
      v18 = ++v4;
      if ( inited < 0 )
        goto LABEL_35;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
    if ( inited < 0 )
      goto LABEL_33;
    v11 = Length;
    while ( 1 )
    {
      v12 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v6, v11, &ResultLength);
      inited = v12;
      if ( v12 != -2147483643 && v12 != -1073741789 )
        goto LABEL_27;
      if ( v5 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
      v5 = Heap;
      if ( !Heap )
        goto LABEL_26;
      v11 = ResultLength;
      v6 = (WCHAR *)Heap;
      v20 = Heap;
LABEL_27:
      if ( inited != -2147483643 && inited != -1073741789 )
      {
        v4 = v18;
        Length = v11;
        v3 = v22;
        if ( inited < 0
          || *((_DWORD *)v6 + 1) != 1
          || *((_DWORD *)v6 + 2) > 0xFFFEu
          || RtlCompareUnicodeStrings(
               String2.Buffer,
               (unsigned __int64)String2.Length >> 1,
               v6 + 6,
               (unsigned __int64)(unsigned __int16)(v6[4] - 2) >> 1,
               1u) )
        {
LABEL_33:
          NtClose(KeyHandle);
          goto LABEL_34;
        }
LABEL_35:
        if ( v5 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        if ( inited >= 0 )
        {
          NtClose(*v3);
          *v3 = KeyHandle;
        }
        if ( inited == -2147483622 )
          return 0;
        return inited;
      }
    }
    v5 = 0LL;
LABEL_26:
    inited = -1073741801;
    goto LABEL_27;
  }
  return result;
}
