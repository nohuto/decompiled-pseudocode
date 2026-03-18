/*
 * XREFs of bMappedViewRangeCheck @ 0x1C001F934
 * Callers:
 *     bInitWinResData @ 0x1C001F628 (bInitWinResData.c)
 *     bGetFntResource @ 0x1C001F7E4 (bGetFntResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMappedViewRangeCheck(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r11

  v4 = 1;
  if ( !a4 )
    a4 = 1LL;
  v5 = a3 + a4;
  if ( a3 < a1 || a3 >= v5 || v5 > a1 + a2 || a4 > a2 )
    return 0;
  return v4;
}
