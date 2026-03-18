/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedRect@@XZ @ 0x180054940
 * Callers:
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1801235C0 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

struct CMergedRect *__fastcall CVisual::GetAdditionalDirtyRects(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v1 + 4) & 0x20000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xF000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct CMergedRect **)(i + 4);
}
