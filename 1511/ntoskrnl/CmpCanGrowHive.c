/*
 * XREFs of CmpCanGrowHive @ 0x1403D50E4
 * Callers:
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpCanGrowHive(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  if ( a2 <= 0x7FFFE000 )
  {
    if ( a1 != qword_1402C77F0 )
      return 1;
    if ( a2 + 4096 <= CmSystemHiveLimitSize )
    {
      if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
        v5 = (unsigned __int64)MmGetNumberOfPhysicalPages(v3) >> 1;
      else
        LODWORD(v5) = 393216;
      if ( v4 > 36864 * (int)v5 / 0xAu && !CmpSystemQuotaWarningPopupDisplayed && ExReadyForErrors )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x20204D43u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CmpQuotaWarningWorker;
          CmpSystemQuotaWarningPopupDisplayed = 1;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
        }
      }
      return 1;
    }
  }
  return 0;
}
