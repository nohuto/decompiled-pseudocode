/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1800F76F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800A9D58 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        __m128i *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  if ( *((_DWORD *)a3 + 6) )
  {
    this[4].m128i_i8[9] |= 0x40u;
    this[23] = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
  }
  else
  {
    this[4].m128i_i8[9] &= ~0x40u;
  }
  CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
