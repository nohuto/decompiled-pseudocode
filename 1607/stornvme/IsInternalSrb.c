/*
 * XREFs of IsInternalSrb @ 0x1C00047E8
 * Callers:
 *     RequestPendingCompletion @ 0x1C00029B0 (RequestPendingCompletion.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000666C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeRequestComplete @ 0x1C0008530 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x1C000E6E8 (ProcessCommandInSpecificQueue.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000ED04 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall IsInternalSrb(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v4; // edx

  v2 = 0;
  if ( a2 != a1 + 568 )
  {
    v4 = 0;
    while ( a2 != 104LL * v4 + a1 + 672 )
    {
      if ( ++v4 >= 4 )
        return v2;
    }
  }
  return 1;
}
