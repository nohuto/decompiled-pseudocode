/*
 * XREFs of HUBHSM_WaitingForHubDescriptorRetryTimer @ 0x1C00084C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_WaitingForHubDescriptorRetryTimer(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 2248LL), -1000000LL, 0LL, 0LL);
  return 1000LL;
}
