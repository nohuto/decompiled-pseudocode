/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x140074834
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x1401F7980 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFile @ 0x1404A81DC (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1404A83A4 (NtCancelIoFileEx.c)
 *     IopCleanupProcessResources @ 0x1404A84DC (IopCleanupProcessResources.c)
 * Callees:
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     IopCheckListForCancelableIrp @ 0x140074A34 (IopCheckListForCancelableIrp.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     sub_140125D7C @ 0x140125D7C (sub_140125D7C.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  __int64 Flink; // r12
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v10; // r14
  bool v12; // bp
  char v13; // al
  PIRP v14; // rdi
  int v15; // edx
  unsigned int v16; // [rsp+30h] [rbp-58h]
  PIRP Irp; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v21; // [rsp+90h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+10h]
  int v23; // [rsp+A0h] [rbp+18h]
  int v24; // [rsp+A8h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  v22 = a2;
  Flink = 0LL;
  v21 = 1;
  Irp = 0LL;
  v7 = (volatile signed __int32 *)(a1 + 184);
  v16 = 0;
  v19 = 0LL;
  Interval.QuadPart = -10000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 184);
    goto LABEL_16;
  }
  if ( _interlockedbittestandset64(v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(a1 + 184);
LABEL_16:
    a2 = v22;
    a3 = v23;
    a4 = v24;
  }
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  v10 = (_QWORD *)(a1 + 192);
  while ( (_QWORD *)*v10 != v10 )
  {
    v12 = Flink != 0;
    v13 = IopCheckListForCancelableIrp((int)a1 + 192, a2, a3, a4, Flink, (__int64)&Irp);
    v14 = Irp;
    Flink = 0LL;
    if ( !Irp )
    {
      if ( !a5 )
        break;
      if ( v13 )
      {
        if ( !v12 )
          break;
      }
      else
      {
        v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v7, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
        __writecr8(CurrentIrql);
        KeDelayExecutionThread(0, 0, &Interval);
        v15 = v21;
        if ( v21 < 100 )
        {
          v21 *= 2;
          Interval.QuadPart = -20000 * v15;
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v7);
        }
        else if ( _interlockedbittestandset64(v7, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v7);
        }
      }
      goto LABEL_31;
    }
    if ( !Irp->Cancel )
    {
      Irp->Cancel = 1;
      v16 = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v7, retaddr);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
        v14 = Irp;
      }
      __writecr8(CurrentIrql);
      IoCancelIrp(v14);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v7);
      }
      else
      {
        if ( _interlockedbittestandset64(v7, 0LL) )
          KxWaitForSpinLockAndAcquire(v7);
        v14 = Irp;
      }
    }
    if ( (v14->Flags & 0x2000) != 0 )
      Flink = (__int64)v14->ThreadListEntry.Flink;
    if ( !(unsigned int)sub_140125D7C(&v14->Overlay, 0xFFFFFFFFLL) )
      pIoFreeIrp(v14);
    a4 = v24;
    a3 = v23;
    a2 = v22;
    if ( (_QWORD *)Flink == v10 )
    {
      if ( !a5 )
        break;
      Flink = 0LL;
LABEL_31:
      a4 = v24;
      a3 = v23;
      a2 = v22;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v7, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  __writecr8(CurrentIrql);
  return v16;
}
