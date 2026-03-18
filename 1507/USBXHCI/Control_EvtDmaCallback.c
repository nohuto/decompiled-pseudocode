/*
 * XREFs of Control_EvtDmaCallback @ 0x1C0021390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Control_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(*(_QWORD *)(a4 + 296) + 80LL) = a3;
  return Control_Transfer_MapIntoRing(a4);
}
