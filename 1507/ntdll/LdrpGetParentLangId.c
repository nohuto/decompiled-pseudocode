/*
 * XREFs of LdrpGetParentLangId @ 0x180047C8C
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18001F420 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x18001F710 (RtlLocaleNameToLcid.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x18004A190 (RtlGetParentLocaleName.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  const WCHAR *v5; // rdi
  int ParentLocaleName; // eax
  int v7; // ebx
  PCWSTR v9[2]; // [rsp+20h] [rbp-39h] BYREF
  __int16 v10; // [rsp+30h] [rbp-29h]
  _BYTE SourceString[14]; // [rsp+32h] [rbp-27h] BYREF
  int v12; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v14[32]; // [rsp+68h] [rbp+Fh] BYREF

  v10 = 0;
  memset(SourceString, 0, sizeof(SourceString));
  memset(v9, 0, sizeof(v9));
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  v9[1] = (PCWSTR)v14;
  WORD1(v9[0]) = 30;
  v4 = RtlLcidToLocaleName(a1, (__int64)v9, 2, 0);
  if ( v4 >= 0 )
    goto LABEL_3;
  if ( v4 == -1073741789 )
  {
    v9[1] = 0LL;
    WORD1(v9[0]) = 0;
    v4 = RtlLcidToLocaleName(v3, (__int64)v9, 2, 1);
  }
  if ( v4 >= 0 )
  {
LABEL_3:
    v5 = v9[1];
    *(_WORD *)SourceString = 30;
    *(_QWORD *)&SourceString[6] = v13;
    ParentLocaleName = RtlGetParentLocaleName(v9[1]);
    v7 = ParentLocaleName;
    if ( ParentLocaleName >= 0 )
      goto LABEL_23;
    if ( ParentLocaleName == -1073741789 )
    {
      *(_QWORD *)&SourceString[6] = 0LL;
      *(_WORD *)SourceString = 0;
      v7 = RtlGetParentLocaleName(v5);
    }
    if ( v7 >= 0 )
    {
LABEL_23:
      if ( v10 )
      {
        v7 = RtlLocaleNameToLcid(*(PCWSTR *)&SourceString[6], &v12, 3);
        if ( v7 >= 0 )
          *a2 = v12;
      }
    }
  }
  else
  {
    v5 = v9[1];
    v7 = -1073741811;
  }
  if ( *(_BYTE **)&SourceString[6] != v13 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(unsigned __int64 *)&SourceString[6]);
    v5 = v9[1];
  }
  if ( v5 != (const WCHAR *)v14 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9[1]);
  return (unsigned int)v7;
}
