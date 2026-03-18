/*
 * XREFs of IoIncrementKeepAliveCount @ 0x1401C9930
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9C40 (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14067D6BC (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  __int64 v5; // r9
  KIRQL v6; // al
  _BYTE *v7; // rcx
  KIRQL v8; // bl
  _QWORD *v9; // rdx
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&qword_140320C30);
      v7 = (_BYTE *)v12;
      v8 = v6;
      ++*(_DWORD *)(v12 + 32);
      if ( !v7[16] )
      {
        v9 = qword_140320C20;
        if ( *((PVOID **)qword_140320C20 + 1) != &qword_140320C20 )
          __fastfail(3u);
        *(_QWORD *)v7 = qword_140320C20;
        *((_QWORD *)v7 + 1) = &qword_140320C20;
        v9[1] = v7;
        qword_140320C20 = v7;
        v7[16] = 1;
        if ( !byte_140320C58 )
        {
          byte_140320C58 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock(&qword_140320C30, v8);
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
