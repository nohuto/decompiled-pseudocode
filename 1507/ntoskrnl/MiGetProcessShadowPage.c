/*
 * XREFs of MiGetProcessShadowPage @ 0x1402254BC
 * Callers:
 *     MiSmallVaStillMapsFrame @ 0x14010FD30 (MiSmallVaStillMapsFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessShadowPage(__int64 a1)
{
  return *(_QWORD *)(a1 + 632) >> 12;
}
