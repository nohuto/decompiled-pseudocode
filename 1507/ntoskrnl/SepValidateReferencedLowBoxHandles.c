/*
 * XREFs of SepValidateReferencedLowBoxHandles @ 0x1406D8790
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlGetAppContainerSidType @ 0x1404129AC (RtlGetAppContainerSidType.c)
 *     RtlPrefixUnicodeString @ 0x1404369B0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     ObQueryNameInfo @ 0x140540D14 (ObQueryNameInfo.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 */

NTSTATUS __fastcall SepValidateReferencedLowBoxHandles(unsigned int a1, void *a2, unsigned int a3, void *a4)
{
  HANDLE *v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // r13d
  struct _KPROCESS *v8; // r15
  PVOID v9; // r14
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  char v12; // r12
  PULONG v13; // rsi
  PULONG v14; // rdi
  PULONG v15; // rbx
  PULONG v16; // rax
  NTSTATUS v17; // eax
  struct _OBJECT_TYPE *v18; // rax
  int NameString; // eax
  __int64 NameInfo; // rax
  unsigned int v21; // edi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t SourceString[256]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v26 = a1;
  Object = a4;
  v23 = a3;
  AppContainerSidType = NotAppContainerSidType;
  P = 0LL;
  v5 = (HANDLE *)a4;
  DestinationString.Length = 0;
  v6 = a3;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v7 = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v8 = 0LL;
  HIWORD(DestinationString.Buffer) = 0;
  v9 = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlGetAppContainerSidType(a2, &AppContainerSidType);
  if ( result < 0 )
    return result;
  if ( AppContainerSidType == ParentAppContainerSidType )
  {
    v11 = RtlConvertSidToUnicodeString(&UnicodeString, a2, 1u);
    if ( v11 < 0 )
      return v11;
    v12 = 1;
  }
  else
  {
    v13 = RtlSubAuthoritySid(a2, 0xBu);
    v14 = RtlSubAuthoritySid(a2, 0xAu);
    v15 = RtlSubAuthoritySid(a2, 9u);
    v16 = RtlSubAuthoritySid(a2, 8u);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%u-%u-%u-%u", *v16, *v15, *v14, *v13);
    RtlInitUnicodeString(&UnicodeString, pszDest);
    v5 = (HANDLE *)Object;
    v12 = 0;
    v6 = v23;
  }
  v11 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%d", v26);
  if ( v11 < 0 )
    goto LABEL_33;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !v6 )
    goto LABEL_33;
  while ( 1 )
  {
    if ( v8 )
      ObfDereferenceObject(v8);
    v17 = ObReferenceObjectByHandle(*v5, 0, 0LL, 0, &Object, 0LL);
    v8 = (struct _KPROCESS *)Object;
    v11 = v17;
    if ( v17 < 0 )
      goto LABEL_38;
    v18 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v18 != ObpDirectoryObjectType
      && v18 != ObpSymbolicLinkObjectType
      && (v18 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
    {
      break;
    }
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      P = 0LL;
    }
    NameString = SepQueryNameString(v8, (PUNICODE_STRING *)&P);
    v9 = P;
    v11 = NameString;
    if ( NameString < 0 )
      goto LABEL_29;
    if ( !P || !*((_WORD *)P + 1) )
      break;
    String2 = *(UNICODE_STRING *)P;
    if ( !RtlPrefixUnicodeString(&NpfsString, &String2, 1u) )
    {
      if ( !RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
        break;
      NameInfo = ObQueryNameInfo((__int64)v8);
      if ( !NameInfo || !*(_WORD *)(NameInfo + 10) )
        break;
      String2 = *(UNICODE_STRING *)(NameInfo + 8);
      if ( RtlCompareUnicodeString(&String2, &UnicodeString, 1u) )
      {
        v21 = 0;
        while ( RtlCompareUnicodeString(&String2, (PCUNICODE_STRING)&AppContainerObjectNames + v21, 1u) )
        {
          if ( ++v21 >= 4 )
            goto LABEL_28;
        }
        v6 = v23;
      }
    }
LABEL_38:
    ++v7;
    ++v5;
    if ( v7 >= v6 )
      goto LABEL_29;
  }
LABEL_28:
  v11 = -1073741811;
LABEL_29:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_33:
  if ( v12 )
    RtlFreeAnsiString(&UnicodeString);
  return v11;
}
