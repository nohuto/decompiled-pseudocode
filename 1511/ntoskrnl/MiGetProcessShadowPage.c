/*
 * XREFs of MiGetProcessShadowPage @ 0x1401DE864
 * Callers:
 *     MiSmallVaStillMapsFrame @ 0x1400E05CC (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessShadowPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 632) >> 12;
}
