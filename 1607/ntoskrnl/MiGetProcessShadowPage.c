/*
 * XREFs of MiGetProcessShadowPage @ 0x1401EF32C
 * Callers:
 *     MiSmallVaStillMapsFrame @ 0x140109A20 (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessShadowPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 704) >> 12;
}
