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

NTSTATUS __fastcall SepValidateReferencedLowBoxHandles(unsigned int a1, void *a2, unsigned int a3, void *a4)
{
  HANDLE *v5; // rsi
  unsigned int v6; // r13d
  struct _KPROCESS *v7; // r15
  PVOID v8; // r14
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  char v11; // r12
  NTSTATUS v12; // eax
  char *v13; // rdi
  struct _OBJECT_TYPE *v14; // rax
  int NameString; // eax
  char *v16; // rdi
  unsigned int v17; // edi
  PULONG v18; // rsi
  PULONG v19; // rdi
  PULONG v20; // rbx
  PULONG v21; // rax
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-78h] BYREF
  wchar_t SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[256]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v26 = a1;
  Object = a4;
  v23 = a3;
  AppContainerSidType = NotAppContainerSidType;
  P = 0LL;
  v5 = (HANDLE *)a4;
  DestinationString.Length = 0;
  v6 = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v7 = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v8 = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlGetAppContainerSidType(a2, &AppContainerSidType);
  if ( result < 0 )
    return result;
  if ( AppContainerSidType == ParentAppContainerSidType )
  {
    v10 = RtlConvertSidToUnicodeString(&UnicodeString, a2, 1u);
    if ( v10 < 0 )
      return v10;
    v11 = 1;
  }
  else
  {
    v18 = RtlSubAuthoritySid(a2, 0xBu);
    v19 = RtlSubAuthoritySid(a2, 0xAu);
    v20 = RtlSubAuthoritySid(a2, 9u);
    v21 = RtlSubAuthoritySid(a2, 8u);
    RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v21, *v20, *v19, *v18);
    RtlInitUnicodeString(&UnicodeString, SourceString);
    v5 = (HANDLE *)Object;
    v11 = 0;
  }
  v10 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v26);
  if ( v10 < 0 )
    goto LABEL_31;
  RtlInitUnicodeString(&DestinationString, pszDest);
  if ( !v23 )
    goto LABEL_31;
  while ( 1 )
  {
    if ( v7 )
      ObfDereferenceObject(v7);
    v12 = ObReferenceObjectByHandle(*v5, 0, 0LL, 0, &Object, 0LL);
    v7 = (struct _KPROCESS *)Object;
    v10 = v12;
    if ( v12 < 0 )
      goto LABEL_26;
    v13 = (char *)Object - 48;
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 != ObpSymbolicLinkObjectType
      && v14 != ObpDirectoryObjectType
      && (v14 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      P = 0LL;
    }
    NameString = SepQueryNameString(v7, (PUNICODE_STRING *)&P);
    v8 = P;
    v10 = NameString;
    if ( NameString < 0 )
      goto LABEL_27;
    if ( !P || !*((_WORD *)P + 1) )
      break;
    String2 = *(UNICODE_STRING *)P;
    if ( !RtlPrefixUnicodeString(&NpfsString, &String2, 1u) )
    {
      if ( !RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        break;
      v16 = (v13[26] & 2) != 0 ? &v13[-ObpInfoMaskToOffset[v13[26] & 3]] : 0LL;
      if ( !v16 || !*((_WORD *)v16 + 5) )
        break;
      String2 = *(UNICODE_STRING *)(v16 + 8);
      v17 = 0;
      if ( RtlCompareUnicodeString(&String2, &UnicodeString, 1u) )
      {
        while ( RtlCompareUnicodeString(&String2, (PCUNICODE_STRING)&AppContainerObjectNames + v17, 1u) )
        {
          if ( ++v17 >= 4 )
            goto LABEL_41;
        }
      }
    }
LABEL_26:
    ++v6;
    ++v5;
    if ( v6 >= v23 )
      goto LABEL_27;
  }
LABEL_41:
  v10 = -1073741811;
LABEL_27:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v7 )
    ObfDereferenceObject(v7);
LABEL_31:
  if ( v11 )
    RtlFreeAnsiString(&UnicodeString);
  return v10;
}
