/*
 * XREFs of SepValidateReferencedLowBoxHandles @ 0x14047400C
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x14047AA30 (RtlGetAppContainerSidType.c)
 *     RtlPrefixUnicodeString @ 0x1404E0F60 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 */

NTSTATUS __fastcall SepValidateReferencedLowBoxHandles(int a1, void *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  PVOID v8; // r14
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  char v11; // r15
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rsi
  struct _OBJECT_TYPE *v16; // rax
  PVOID v17; // rdi
  char *v18; // rsi
  unsigned int v19; // esi
  PULONG v20; // rsi
  PULONG v21; // rdi
  PULONG v22; // rbx
  PULONG v23; // rax
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-ACh]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  wchar_t SourceString[256]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+290h] [rbp+190h] BYREF

  LODWORD(Object) = a1;
  v26 = a3;
  AppContainerSidType = NotAppContainerSidType;
  P = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  v6 = a3;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v7 = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v8 = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlGetAppContainerSidType(a2, &AppContainerSidType);
  if ( result < 0 )
    return result;
  if ( AppContainerSidType != ParentAppContainerSidType )
  {
    v20 = RtlSubAuthoritySid(a2, 0xBu);
    v21 = RtlSubAuthoritySid(a2, 0xAu);
    v22 = RtlSubAuthoritySid(a2, 9u);
    v23 = RtlSubAuthoritySid(a2, 8u);
    RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v23, *v22, *v21, *v20);
    RtlInitUnicodeString(&UnicodeString, SourceString);
    v6 = v26;
    v11 = 0;
    goto LABEL_5;
  }
  v10 = RtlConvertSidToUnicodeString(&UnicodeString, a2, 1u);
  if ( v10 >= 0 )
  {
    v11 = 1;
LABEL_5:
    v10 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", (unsigned int)Object);
    if ( v10 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( v6 )
      {
        while ( 1 )
        {
          if ( v8 )
            ObfDereferenceObject(v8);
          v12 = ObReferenceObjectByHandle(*a4, 0, 0LL, 0, &Object, 0LL);
          v8 = Object;
          v10 = v12;
          if ( v12 < 0 )
          {
            v17 = P;
          }
          else
          {
            v15 = (char *)Object - 48;
            v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
            if ( v16 != ObpSymbolicLinkObjectType
              && v16 != ObpDirectoryObjectType
              && (v16 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)Object + 1) + 72LL) != 17) )
            {
              v10 = -1073741811;
              goto LABEL_45;
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            v10 = SepQueryNameString(v8, &P, v13, v14);
            if ( v10 < 0 )
              goto LABEL_45;
            v17 = P;
            if ( !P || !*((_WORD *)P + 1) )
            {
LABEL_43:
              v10 = -1073741811;
              goto LABEL_28;
            }
            String2 = *(UNICODE_STRING *)P;
            if ( !RtlPrefixUnicodeString(&NpfsString, &String2, 1u) )
            {
              if ( !RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
                goto LABEL_43;
              v18 = (v15[26] & 2) != 0 ? &v15[-ObpInfoMaskToOffset[v15[26] & 3]] : 0LL;
              if ( !v18 || !*((_WORD *)v18 + 5) )
                goto LABEL_43;
              String2 = *(UNICODE_STRING *)(v18 + 8);
              v19 = 0;
              if ( RtlCompareUnicodeString(&String2, &UnicodeString, 1u) )
              {
                while ( RtlCompareUnicodeString(&String2, (PCUNICODE_STRING)&AppContainerObjectNames + v19, 1u) )
                {
                  if ( ++v19 >= 4 )
                    goto LABEL_43;
                }
              }
            }
          }
          ++v7;
          ++a4;
          if ( v7 >= v26 )
            goto LABEL_28;
        }
      }
    }
    goto LABEL_45;
  }
  v11 = 0;
LABEL_45:
  v17 = P;
LABEL_28:
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v11 )
    RtlFreeAnsiString(&UnicodeString);
  return v10;
}
