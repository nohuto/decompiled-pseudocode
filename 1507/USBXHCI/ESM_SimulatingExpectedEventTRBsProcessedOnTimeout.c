/*
 * XREFs of ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x1C00398B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingExpectedEventTRBsProcessedOnTimeout(__int64 a1)
{
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 80LL),
    2u,
    0xCu,
    0x75u,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 24LL));
  return 150LL;
}
