/*
 * XREFs of PspUnlockJobConditionally @ 0x1404687F4
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404BF458 (PspSendProcessNotificationToJobChain.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 *     PspSetNetRateControl @ 0x140680CC4 (PspSetNetRateControl.c)
 * Callees:
 *     <none>
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      return;
    }
  }
}
