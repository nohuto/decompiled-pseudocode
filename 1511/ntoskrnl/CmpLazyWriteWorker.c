/*
 * XREFs of CmpLazyWriteWorker @ 0x14013CADC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     CmpCompleteLazyWrite @ 0x1400EFC68 (CmpCompleteLazyWrite.c)
 *     CmpDiskFullWarning @ 0x1405E3D10 (CmpDiskFullWarning.c)
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
