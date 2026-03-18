/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1401BB9D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAlertThread @ 0x140030D64 (KeAlertThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // ebx
  KIRQL v3; // di
  __int64 v4; // rdx
  PVOID **v5; // rcx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v7, (__int64)&v8);
  if ( v2 >= 0 && !v7 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
    v4 = v8;
    *(_QWORD *)(v8 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_1402FB700 )
        KeAlertThread(qword_1402FB700, 0);
    }
    else
    {
      v5 = (PVOID **)qword_1402FB6C8;
      *(_QWORD *)v4 = &qword_1402FB6C0;
      *(_QWORD *)(v4 + 8) = v5;
      if ( *v5 != &qword_1402FB6C0 )
        __fastfail(3u);
      *v5 = (PVOID *)v4;
      qword_1402FB6C8 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_1402FB6F8 )
      {
        byte_1402FB6F8 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock(&qword_1402FB6D0, v3);
  }
  return (unsigned int)v2;
}
