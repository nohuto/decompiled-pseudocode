/*
 * XREFs of PspLockJobConditionally @ 0x1403EC4CC
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspSendProcessNotificationToJobChain @ 0x1403E8DC0 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     <none>
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}
