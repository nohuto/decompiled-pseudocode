/*
 * XREFs of CmpLazyWriteWorker @ 0x140143B04
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     CmpCompleteLazyWrite @ 0x1400AE420 (CmpCompleteLazyWrite.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CmpDiskFullWarning @ 0x1406036C8 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(struct _KTIMER *StartContext)
{
  bool v2; // si
  KIRQL v3; // al
  char v4; // bl
  unsigned __int64 *v5; // rdx
  char v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = StartContext == &CmpLazyWriterData;
  while ( 1 )
  {
    KeWaitForSingleObject(&StartContext[2], Executive, 1, 0, 0LL);
    v3 = KeAcquireSpinLockRaiseToDpc(&StartContext[2].DueTime.QuadPart);
    StartContext[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KeReleaseSpinLock(&StartContext[2].DueTime.QuadPart, v3);
    v4 = ((__int64 (__fastcall *)(char *, char *))StartContext[2].TimerListEntry.Flink)(&v6, &v7);
    if ( v2 && BYTE2(NlsMbCodePageTag) )
    {
      if ( v6 )
        CmpDiskFullWarning();
      else
        BYTE2(NlsMbCodePageTag) = 0;
    }
    if ( v4 )
      v5 = (unsigned __int64 *)&v7;
    else
      v5 = 0LL;
    CmpCompleteLazyWrite(StartContext, v5);
  }
}
