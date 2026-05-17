/*
 * XREFs of LdrpGetParentLangId @ 0x180082FF0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18003A1E8 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x18001C1C0 (RtlLocaleNameToLcid.c)
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x18003EA20 (RtlGetParentLocaleName.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int16 *v5; // rdi
  int ParentLocaleName; // eax
  int v7; // ebx
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-39h] BYREF
  PCWSTR v10[2]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp+Fh] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  v9[1] = (unsigned __int16 *)v13;
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
    WORD1(v10[0]) = 30;
    v10[1] = (PCWSTR)v12;
    ParentLocaleName = RtlGetParentLocaleName(v9[1], (__int64)v10, 6, 0);
    v7 = ParentLocaleName;
    if ( ParentLocaleName >= 0 )
      goto LABEL_23;
    if ( ParentLocaleName == -1073741789 )
    {
      v10[1] = 0LL;
      WORD1(v10[0]) = 0;
      v7 = RtlGetParentLocaleName(v5, (__int64)v10, 6, 1);
    }
    if ( v7 >= 0 )
    {
LABEL_23:
      if ( LOWORD(v10[0]) )
      {
        v7 = RtlLocaleNameToLcid(v10[1], &v11, 3);
        if ( v7 >= 0 )
          *a2 = v11;
      }
    }
  }
  else
  {
    v5 = v9[1];
    v7 = -1073741811;
  }
  if ( (_BYTE *)v10[1] != v12 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10[1]);
    v5 = v9[1];
  }
  if ( v5 != (unsigned __int16 *)v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9[1]);
  return (unsigned int)v7;
}
