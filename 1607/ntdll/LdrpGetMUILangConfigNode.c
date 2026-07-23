/*
 * XREFs of LdrpGetMUILangConfigNode @ 0x1800890D8
 * Callers:
 *     RtlpTraverseParents @ 0x18006A80C (RtlpTraverseParents.c)
 * Callees:
 *     RtlpCompareConfigNodeWithSpec @ 0x180089034 (RtlpCompareConfigNodeWithSpec.c)
 *     RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800891A0 (RtlpMuiRegGetLanginfoTypeNSpec.c)
 */

__int64 __fastcall LdrpGetMUILangConfigNode(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r11
  int v8; // ebp
  __int16 v9; // di
  __int64 v10; // r15
  int v12[14]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = -1;
  if ( (int)RtlpMuiRegGetLanginfoTypeNSpec(a1, v12, &v13) < 0 )
    return 3221225701LL;
  v8 = *(unsigned __int16 *)(v7 + 4);
  v9 = 0;
  if ( !*(_WORD *)(v7 + 4) )
    return (unsigned int)-1073741811;
  v10 = *(_QWORD *)(v7 + 8);
  while ( !RtlpCompareConfigNodeWithSpec(a2, v12[0], v13, (__int16 *)(v10 + 12LL * v9)) )
  {
    if ( ++v9 >= v8 )
      return (unsigned int)-1073741811;
  }
  *a4 = v9;
  if ( v9 == -1 )
    return (unsigned int)-1073741811;
  return v4;
}
