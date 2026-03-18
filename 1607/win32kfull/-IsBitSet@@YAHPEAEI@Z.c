/*
 * XREFs of ?IsBitSet@@YAHPEAEI@Z @ 0x1C012A744
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012A3E4 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C01FB21C (GetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsBitSet(unsigned __int8 *a1, unsigned int a2)
{
  if ( a1 )
    return a1[(unsigned __int64)a2 >> 3] & (unsigned int)(1 << (a2 & 7));
  else
    return 0LL;
}
