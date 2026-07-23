/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1404B6D6C
 * Callers:
 *     RtlpOpenImageFileOptionsKey @ 0x1404B6BF4 (RtlpOpenImageFileOptionsKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 */

NTSTATUS __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, __int64 a2, UNICODE_STRING *a3)
{
  HANDLE *v3; // r15
  ULONG v4; // r12d
  void *v5; // rdi
  wchar_t *v6; // r13
  NTSTATUS result; // eax
  int v9; // ecx
  bool v10; // zf
  _BYTE *v11; // rax
  NTSTATUS inited; // ebx
  ULONG v13; // r15d
  NTSTATUS v14; // eax
  PVOID PoolWithQuotaTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  ULONG Length; // [rsp+34h] [rbp-CCh]
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v19; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v22; // [rsp+68h] [rbp-98h]
  _BYTE *v23; // [rsp+70h] [rbp-90h]
  HANDLE *v24; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v25; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v28; // [rsp+C4h] [rbp-3Ch]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]

  v3 = a1;
  v24 = a1;
  v4 = 0;
  KeyHandle = 0LL;
  Length = 544;
  v5 = 0LL;
  v6 = (wchar_t *)KeyValueInformation;
  result = RtlInitUnicodeStringEx(&DestinationString, L"UseFilter");
  if ( result < 0 )
    return result;
  result = ZwQueryValueKey(
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
  if ( v28 != 4 || v29 != 4 || !v30 )
    return 0;
  v9 = 576;
  v10 = KeGetCurrentThread()->PreviousMode == 1;
  String2 = *a3;
  if ( v10 )
    v9 = 1600;
  v22 = v9;
  result = RtlInitUnicodeStringEx(&DestinationString, L"\\??\\");
  if ( result >= 0 )
  {
    if ( RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
    {
      String2.Length -= 8;
      String2.MaximumLength -= 8;
      String2.Buffer += 4;
    }
    v11 = KeyValueInformation;
    v19 = 0;
    v23 = KeyValueInformation;
    while ( 1 )
    {
      inited = ZwEnumerateKey(*v3, v4, KeyBasicInformation, v11, Length, &ResultLength);
      if ( inited >= 0 )
      {
        DestinationString.Length = *((_WORD *)v23 + 6);
        DestinationString.MaximumLength = *((_WORD *)v23 + 6);
        DestinationString.Buffer = (wchar_t *)(v23 + 16);
        ObjectAttributes.RootDirectory = *v3;
        ObjectAttributes.Attributes = v22;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        inited = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
        if ( inited >= 0 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, L"FilterFullPath");
          if ( inited >= 0 )
          {
            v13 = Length;
            do
            {
              v14 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v6, v13, &ResultLength);
              inited = v14;
              if ( v14 == -2147483643 || v14 == -1073741789 )
              {
                if ( v5 )
                  ExFreePoolWithTag(v5, 0);
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, ResultLength, 0x6B497452u);
                v5 = PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  v13 = ResultLength;
                  v6 = (wchar_t *)PoolWithQuotaTag;
                  v23 = PoolWithQuotaTag;
                }
                else
                {
                  inited = -1073741801;
                }
              }
            }
            while ( inited == -2147483643 || inited == -1073741789 );
            v4 = v19;
            Length = v13;
            v3 = v24;
            if ( inited >= 0 && *((_DWORD *)v6 + 1) == 1 && *((_DWORD *)v6 + 2) <= 0xFFFEu )
            {
              v25.Length = v6[4] - 2;
              v25.MaximumLength = v25.Length;
              v25.Buffer = v6 + 6;
              if ( !RtlCompareUnicodeString(&String2, &v25, 1u) )
              {
LABEL_37:
                if ( v5 )
                  ExFreePoolWithTag(v5, 0);
                if ( inited >= 0 )
                {
                  ZwClose(*v3);
                  *v3 = KeyHandle;
                }
                if ( inited == -2147483622 )
                  return 0;
                return inited;
              }
            }
          }
          ZwClose(KeyHandle);
        }
      }
      v11 = v23;
      v19 = ++v4;
      if ( inited < 0 )
        goto LABEL_37;
    }
  }
  return result;
}
