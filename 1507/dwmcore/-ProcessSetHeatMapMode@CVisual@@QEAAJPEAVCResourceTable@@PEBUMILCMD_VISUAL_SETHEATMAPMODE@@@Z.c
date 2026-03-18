/*
 * XREFs of ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801045C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x18005B360 (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetHeatMapMode(
        __m128i *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETHEATMAPMODE *a3)
{
  if ( *((_DWORD *)a3 + 6) )
  {
    this[5].m128i_i8[10] |= 1u;
    this[24] = _mm_loadu_si128((const __m128i *)((char *)a3 + 8));
  }
  else
  {
    this[5].m128i_i8[10] &= ~1u;
  }
  CVisual::PropagateFlags((struct CVisual *)this, 1, 1, 0, 0, 0, 0);
  return 0LL;
}
