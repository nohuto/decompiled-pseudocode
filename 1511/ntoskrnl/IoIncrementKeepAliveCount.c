/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1401BBABC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14063F054 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  __int64 v5; // r9
  KIRQL v6; // al
  _BYTE *v7; // rcx
  KIRQL v8; // bl
  PVOID **v9; // rdx
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&qword_1402FB6D0);
      v7 = (_BYTE *)v12;
      v8 = v6;
      ++*(_DWORD *)(v12 + 32);
      if ( !v7[16] )
      {
        v9 = (PVOID **)qword_1402FB6C0;
        *(_QWORD *)v7 = qword_1402FB6C0;
        *((_QWORD *)v7 + 1) = &qword_1402FB6C0;
        if ( v9[1] != &qword_1402FB6C0 )
          __fastfail(3u);
        v9[1] = (PVOID *)v7;
        qword_1402FB6C0 = v7;
        v7[16] = 1;
        if ( !byte_1402FB6F8 )
        {
          byte_1402FB6F8 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock(&qword_1402FB6D0, v8);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      LOBYTE(v5) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v5);
    }
  }
  return (unsigned int)v4;
}
