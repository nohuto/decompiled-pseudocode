/*
 * XREFs of SepValidateReferencedLowBoxHandles @ 0x1403BF0B8
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x1400035E4 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     SepQueryNameString @ 0x1403BF450 (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x1403C09F4 (RtlGetAppContainerSidType.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x14043D980 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall SepValidateReferencedLowBoxHandles(unsigned int a1, void *a2, unsigned int a3, void *a4)
{
  unsigned int v5; // r13d
  struct _KPROCESS *v6; // r15
  PVOID v7; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  char *v11; // rdi
  struct _OBJECT_TYPE *v12; // rax
  int NameString; // eax
  char *v14; // rdi
  unsigned int v15; // edi
  PULONG v16; // rsi
  PULONG v17; // rdi
  PULONG v18; // rbx
  PULONG v19; // rax
  HANDLE *v20; // rsi
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v23; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v26; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-78h] BYREF
  wchar_t SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[256]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v27 = a1;
  v26 = a4;
  P = 0LL;
  DestinationString.Length = 0;
  v5 = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v6 = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v7 = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlGetAppContainerSidType(a2);
  if ( (int)result < 0 )
    return result;
  v16 = RtlSubAuthoritySid(a2, 0xBu);
  v17 = RtlSubAuthoritySid(a2, 0xAu);
  v18 = RtlSubAuthoritySid(a2, 9u);
  v19 = RtlSubAuthoritySid(a2, 8u);
  v23 = *v16;
  HandleInformation = *v17;
  Object = *v18;
  RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v19, Object, HandleInformation, v23);
  RtlInitUnicodeString(&UnicodeString, SourceString);
  v20 = (HANDLE *)v26;
  v9 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v27);
  if ( (v9 & 0x80000000) != 0 )
    return v9;
  RtlInitUnicodeString(&DestinationString, pszDest);
  if ( !a3 )
    return v9;
  while ( 1 )
  {
    if ( v6 )
      ObfDereferenceObject(v6);
    v10 = ObReferenceObjectByHandle(*v20, 0, 0LL, 0, &v26, 0LL);
    v6 = (struct _KPROCESS *)v26;
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_23;
    v11 = (char *)v26 - 48;
    v12 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v26 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v26 - 48) >> 8)];
    if ( v12 != ObpSymbolicLinkObjectType
      && v12 != ObpDirectoryObjectType
      && (v12 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)v26 + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      P = 0LL;
    }
    NameString = SepQueryNameString(v6, (PUNICODE_STRING *)&P);
    v7 = P;
    v9 = NameString;
    if ( NameString < 0 )
      goto LABEL_24;
    if ( !P || !*((_WORD *)P + 1) )
      break;
    String2 = *(UNICODE_STRING *)P;
    if ( !RtlPrefixUnicodeString(&NpfsString, &String2, 1u) )
    {
      if ( !RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        break;
      v14 = (v11[26] & 2) != 0 ? &v11[-ObpInfoMaskToOffset[v11[26] & 3]] : 0LL;
      if ( !v14 || !*((_WORD *)v14 + 5) )
        break;
      String2 = *(UNICODE_STRING *)(v14 + 8);
      v15 = 0;
      if ( RtlCompareUnicodeString(&String2, &UnicodeString, 1u) )
      {
        while ( RtlCompareUnicodeString(&String2, (PCUNICODE_STRING)&AppContainerObjectNames + v15, 1u) )
        {
          if ( ++v15 >= 4 )
            goto LABEL_35;
        }
      }
    }
LABEL_23:
    ++v5;
    ++v20;
    if ( v5 >= a3 )
      goto LABEL_24;
  }
LABEL_35:
  v9 = -1073741811;
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v9;
}
