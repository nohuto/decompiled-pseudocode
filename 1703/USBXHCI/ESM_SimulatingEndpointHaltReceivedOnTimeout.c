/*
 * XREFs of ESM_SimulatingEndpointHaltReceivedOnTimeout @ 0x1C0037F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingEndpointHaltReceivedOnTimeout(__int64 a1)
{
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 80LL),
    2u,
    0xCu,
    0x78u,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 154LL;
}
