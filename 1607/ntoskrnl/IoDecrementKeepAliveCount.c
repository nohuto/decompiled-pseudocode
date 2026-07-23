/*
 * XREFs of IoDecrementKeepAliveCount @ 0x1401C96E4
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAlertThread @ 0x1400C7B94 (KeAlertThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(int a1, int a2)
{
  int v2; // ebx
  KIRQL v3; // di
  __int64 v4; // rdx
  __int64 *v5; // rcx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = IopAdjustFileObjectKeepAliveCount(a1, a2, 0, (unsigned int)&v7, (__int64)&v8);
  if ( v2 >= 0 && !v7 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&qword_140320C50);
    v4 = v8;
    *(_QWORD *)(v8 + 48) = MEMORY[0xFFFFF78000000014] + 50000000LL;
    --*(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(v4 + 16) )
    {
      if ( qword_140320C80 )
        KeAlertThread(qword_140320C80, 0);
    }
    else
    {
      v5 = (__int64 *)qword_140320C48;
      if ( *(PVOID **)qword_140320C48 != &qword_140320C40 )
        __fastfail(3u);
      *(_QWORD *)v4 = &qword_140320C40;
      *(_QWORD *)(v4 + 8) = v5;
      *v5 = v4;
      qword_140320C48 = v4;
      *(_BYTE *)(v4 + 16) = 1;
      if ( !byte_140320C78 )
      {
        byte_140320C78 = 1;
        ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock(&qword_140320C50, v3);
  }
  return (unsigned int)v2;
}
