/*
 * XREFs of PspUnlockJobConditionally @ 0x140469924
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140469C10 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404DBE54 (PspSendProcessNotificationToJobChain.c)
 *     PspSetJobIoRateControl @ 0x1404F1E7C (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x140680BE0 (PspSetNetRateControl.c)
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
