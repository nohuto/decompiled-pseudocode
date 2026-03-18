/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x1400CC5B4
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401BC334 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFileEx @ 0x14048FDE0 (NtCancelIoFileEx.c)
 *     IopCleanupProcessResources @ 0x14048FEE8 (IopCleanupProcessResources.c)
 *     NtCancelIoFile @ 0x140490800 (NtCancelIoFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoCancelIrp @ 0x1400C97FC (IoCancelIrp.c)
 *     IopCheckListForCancelableIrp @ 0x1400CC774 (IopCheckListForCancelableIrp.c)
 *     sub_1400EB8E0 @ 0x1400EB8E0 (sub_1400EB8E0.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  __int64 Flink; // rbp
  KSPIN_LOCK *v7; // rdi
  int v9; // ebx
  int v10; // r12d
  KIRQL v11; // r15
  _QWORD *v12; // r14
  bool v14; // r13
  char v15; // al
  PIRP v16; // rbx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h]
  unsigned int v20; // [rsp+A0h] [rbp+8h]

  Interval.QuadPart = -10000LL;
  Flink = 0LL;
  v20 = 0;
  Irp = 0LL;
  v7 = (KSPIN_LOCK *)(a1 + 184);
  v19 = 0LL;
  v9 = a4;
  v10 = 1;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  v12 = (_QWORD *)(a1 + 192);
  while ( (_QWORD *)*v12 != v12 )
  {
    v14 = Flink != 0;
    v15 = IopCheckListForCancelableIrp((int)a1 + 192, a2, a3, v9, Flink, (__int64)&Irp);
    v16 = Irp;
    Flink = 0LL;
    if ( !Irp )
    {
      if ( !a5 )
        break;
      if ( v15 )
      {
        if ( !v14 )
          break;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KeReleaseSpinLock(v7, v11);
        KeDelayExecutionThread(0, 0, &Interval);
        if ( v10 < 100 )
        {
          v10 *= 2;
          Interval.QuadPart = -10000 * v10;
        }
        v11 = KeAcquireSpinLockRaiseToDpc(v7);
      }
      goto LABEL_23;
    }
    if ( !Irp->Cancel )
    {
      v20 = 1;
      Irp->Cancel = 1;
      KeReleaseSpinLock(v7, v11);
      IoCancelIrp(v16);
      v11 = KeAcquireSpinLockRaiseToDpc(v7);
    }
    if ( (v16->Flags & 0x2000) != 0 )
      Flink = (__int64)v16->ThreadListEntry.Flink;
    if ( !(unsigned int)sub_1400EB8E0(&v16->Overlay, 0xFFFFFFFFLL) )
      pIoFreeIrp(v16);
    v9 = a4;
    if ( (_QWORD *)Flink == v12 )
    {
      if ( !a5 )
        break;
      Flink = 0LL;
LABEL_23:
      v9 = a4;
    }
  }
  KeReleaseSpinLock(v7, v11);
  return v20;
}
