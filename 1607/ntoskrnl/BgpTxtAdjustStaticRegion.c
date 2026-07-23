/*
 * XREFs of BgpTxtAdjustStaticRegion @ 0x1402397D4
 * Callers:
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 * Callees:
 *     BgpGxFillRectangle @ 0x1401282D8 (BgpGxFillRectangle.c)
 */

__int64 __fastcall BgpTxtAdjustStaticRegion(__int64 a1, _QWORD *a2, int *a3)
{
  int *v3; // r10
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax

  v3 = a3;
  v4 = a1;
  if ( !a1 || !a2 && !a3 || (*(_DWORD *)(a1 + 64) & 1) == 0 )
    return 3221225485LL;
  if ( a2 )
    *(_QWORD *)a1 = *a2;
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      v6 = *a3;
      if ( *(_DWORD *)(v4 + 40) != *a3 )
      {
        *(_DWORD *)(v4 + 40) = v6;
        BgpGxFillRectangle(v5, v6);
      }
    }
    *(_DWORD *)(v4 + 44) = v3[1];
  }
  return 0LL;
}
