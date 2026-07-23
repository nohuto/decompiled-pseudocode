/*
 * XREFs of MiGetProcessShadowPage @ 0x1401EF158
 * Callers:
 *     MiSmallVaStillMapsFrame @ 0x1401077A0 (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessShadowPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 704) >> 12;
}
