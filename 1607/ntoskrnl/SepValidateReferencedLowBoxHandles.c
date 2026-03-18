/*
 * XREFs of SepValidateReferencedLowBoxHandles @ 0x14047513C
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F580 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D6F8 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x14007F50C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F8710 (RtlConvertSidToUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     SepQueryNameString @ 0x1404754CC (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x14047BB60 (RtlGetAppContainerSidType.c)
 *     RtlPrefixUnicodeString @ 0x1404FDFD0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1404FF850 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepValidateReferencedLowBoxHandles(int a1, void *a2, unsigned int a3, HANDLE *a4)
{
  unsigned int v6; // r12d
  PVOID v7; // r14
  __int64 result; // rax
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rsi
  struct _OBJECT_TYPE *v14; // rax
  PVOID v15; // rdi
  char *v16; // rsi
  unsigned int v17; // esi
  PULONG v18; // rsi
  PULONG v19; // rdi
  PULONG v20; // rbx
  PULONG v21; // rax
  ULONG Object; // [rsp+20h] [rbp-E0h]
  ULONG HandleInformation; // [rsp+28h] [rbp-D8h]
  ULONG v24; // [rsp+30h] [rbp-D0h]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27; // [rsp+54h] [rbp-ACh]
  PVOID v28; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  wchar_t SourceString[256]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+290h] [rbp+190h] BYREF

  LODWORD(v28) = a1;
  v27 = a3;
  v26 = 0;
  P = 0LL;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v6 = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v7 = 0LL;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlGetAppContainerSidType(a2);
  if ( (int)result >= 0 )
  {
    v18 = RtlSubAuthoritySid(a2, 0xBu);
    v19 = RtlSubAuthoritySid(a2, 0xAu);
    v20 = RtlSubAuthoritySid(a2, 9u);
    v21 = RtlSubAuthoritySid(a2, 8u);
    v24 = *v18;
    HandleInformation = *v19;
    Object = *v20;
    RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v21, Object, HandleInformation, v24);
    RtlInitUnicodeString(&UnicodeString, SourceString);
    v9 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", (unsigned int)v28);
    if ( v9 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      if ( v27 )
      {
        while ( 1 )
        {
          if ( v7 )
            ObfDereferenceObject(v7);
          v10 = ObReferenceObjectByHandle(*a4, 0, 0LL, 0, &v28, 0LL);
          v7 = v28;
          v9 = v10;
          if ( v10 < 0 )
          {
            v15 = P;
          }
          else
          {
            v13 = (char *)v28 - 48;
            v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v28 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v28 - 48) >> 8)];
            if ( v14 != ObpSymbolicLinkObjectType
              && v14 != ObpDirectoryObjectType
              && (v14 != (struct _OBJECT_TYPE *)IoFileObjectType || *(_DWORD *)(*((_QWORD *)v28 + 1) + 72LL) != 17) )
            {
              v9 = -1073741811;
              break;
            }
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
            }
            v9 = SepQueryNameString(v7, &P, v11, v12);
            if ( v9 < 0 )
              break;
            v15 = P;
            if ( !P || !*((_WORD *)P + 1) )
            {
LABEL_37:
              v9 = -1073741811;
              goto LABEL_25;
            }
            String2 = *(UNICODE_STRING *)P;
            if ( !RtlPrefixUnicodeString(&NpfsString, &String2, 1u) )
            {
              if ( !RtlPrefixUnicodeString(&DestinationString, &String2, 1u) )
                goto LABEL_37;
              v16 = (v13[26] & 2) != 0 ? &v13[-ObpInfoMaskToOffset[v13[26] & 3]] : 0LL;
              if ( !v16 || !*((_WORD *)v16 + 5) )
                goto LABEL_37;
              String2 = *(UNICODE_STRING *)(v16 + 8);
              v17 = 0;
              if ( RtlCompareUnicodeString(&String2, &UnicodeString, 1u) )
              {
                while ( RtlCompareUnicodeString(&String2, (PCUNICODE_STRING)&AppContainerObjectNames + v17, 1u) )
                {
                  if ( ++v17 >= 4 )
                    goto LABEL_37;
                }
              }
            }
          }
          ++v6;
          ++a4;
          if ( v6 >= v27 )
            goto LABEL_25;
        }
      }
    }
    v15 = P;
LABEL_25:
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v7 )
      ObfDereferenceObject(v7);
    return (unsigned int)v9;
  }
  return result;
}
