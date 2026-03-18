/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x1401E2D4C
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1401E2D14 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlpOplockBreakToNone @ 0x1401313A8 (FsRtlpOplockBreakToNone.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PVOID v6; // r12
  _QWORD *v8; // r14
  NTSTATUS result; // eax
  ULONG v10; // ebx
  POPLOCK_FS_PREPOST_IRP v11; // rsi
  POPLOCK_WAIT_COMPLETE_ROUTINE v12; // r15
  ULONG_PTR v13; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  ULONG_PTR v17; // rbx
  signed __int32 v18; // eax
  _BYTE v19[4]; // [rsp+50h] [rbp-48h] BYREF
  NTSTATUS v20; // [rsp+54h] [rbp-44h]
  PVOID v21; // [rsp+58h] [rbp-40h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp-38h]
  struct _IO_STACK_LOCATION *v23; // [rsp+68h] [rbp-30h]
  __int64 v24; // [rsp+A0h] [rbp+8h] BYREF
  PVOID v25; // [rsp+B8h] [rbp+20h]

  v25 = Context;
  v6 = Context;
  v8 = *Oplock;
  v21 = *Oplock;
  LOBYTE(v24) = 0;
  if ( (Flags & 0x10) != 0 )
  {
    result = -1073741811;
    v20 = -1073741811;
  }
  else
  {
    v10 = Flags | 8;
    v11 = PostIrpRoutine;
    v12 = CompletionRoutine;
    do
    {
      v19[0] = 0;
      if ( !(_BYTE)v24 )
      {
        v13 = v8[19];
        CurrentThread = KeGetCurrentThread();
        v15 = KeAbPreAcquire(v13, 0LL, 0LL, (__int64)Context);
        v16 = v15;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v13, 0) )
          ExpAcquireFastMutexContended(v13, v15);
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        *(_QWORD *)(v13 + 8) = CurrentThread;
        LOBYTE(v24) = 1;
        v11 = PostIrpRoutine;
        v12 = CompletionRoutine;
        v6 = v25;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      result = FsRtlpOplockBreakToNone(
                 (__int64)v8,
                 (__int64)CurrentStackLocation,
                 (__int64)Irp,
                 v10,
                 (__int64)v6,
                 (__int64)v12,
                 (__int64)v11,
                 &v24,
                 (__int64)v19);
      v20 = result;
      if ( !result )
      {
        v23 = Irp->Tail.Overlay.CurrentStackLocation;
        result = FsRtlpOplockBreakByCacheFlags(
                   (__int64)v8,
                   (__int64)v23,
                   Irp,
                   v10,
                   28672,
                   (__int64)v6,
                   (__int64)v12,
                   (__int64)v11,
                   &v24,
                   (__int64)v19);
        v20 = result;
      }
    }
    while ( v19[0] );
  }
  if ( (_BYTE)v24 )
  {
    v17 = v8[19];
    *(_QWORD *)(v17 + 8) = 0LL;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)v17, 1, 0);
    if ( v18 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v17, v18);
    KeAbPostRelease(v17);
    return v20;
  }
  return result;
}
