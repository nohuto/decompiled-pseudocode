/*
 * XREFs of HUBHSM_StartingTimerForResetRetry @ 0x1C0007B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_StartingTimerForResetRetry(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 2248LL), -5000000LL, 0LL, 0LL);
  return 2053LL;
}
