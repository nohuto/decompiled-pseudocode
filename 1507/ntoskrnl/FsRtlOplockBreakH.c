/*
 * XREFs of FsRtlOplockBreakH @ 0x140545364
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400718FC (FsRtlpOplockBreakByCacheFlags.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  ULONG v6; // ebx
  _QWORD *v8; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS result; // eax
  __int64 v11; // r9
  ULONG_PTR v12; // r14
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  ULONG_PTR v16; // rbx
  signed __int32 v17; // eax
  NTSTATUS v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+B0h] [rbp+18h]
  __int64 v22; // [rsp+B8h] [rbp+20h]

  v22 = (__int64)Context;
  v21 = Flags;
  v6 = Flags;
  v8 = *Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(v19) = 0;
  result = 0;
  if ( !v8 )
    return result;
  result = FsRtlpAttachOplockKey(Irp);
  v18 = result;
  if ( !result )
  {
    if ( CurrentStackLocation->MajorFunction )
    {
      do
      {
LABEL_8:
        LOBYTE(v20) = 0;
        if ( !(_BYTE)v19 )
        {
          v12 = v8[19];
          CurrentThread = KeGetCurrentThread();
          v14 = KeAbPreAcquire(v12, 0LL, 0LL, v11);
          v15 = v14;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v12, 0) )
            ExpAcquireFastMutexContended(v12, v14);
          if ( v15 )
            *(_BYTE *)(v15 + 26) |= 1u;
          *(_QWORD *)(v12 + 8) = CurrentThread;
          LOBYTE(v19) = 1;
          v6 = v21;
        }
        result = FsRtlpOplockBreakByCacheFlags(
                   (__int64)v8,
                   (__int64)CurrentStackLocation,
                   Irp,
                   v6,
                   0x2000,
                   v22,
                   (__int64)CompletionRoutine,
                   (__int64)PostIrpRoutine,
                   &v19,
                   (__int64)&v20);
        v18 = result;
      }
      while ( (_BYTE)v20 );
      goto LABEL_17;
    }
    if ( (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0 )
    {
      if ( (CurrentStackLocation->Parameters.Create.Options & 0x10000) != 0 )
      {
        v6 |= 0x10000000u;
        v21 = v6;
      }
      goto LABEL_8;
    }
    result = 0;
    v18 = 0;
  }
LABEL_17:
  if ( (_BYTE)v19 )
  {
    v16 = v8[19];
    *(_QWORD *)(v16 + 8) = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)v16, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v16, v17);
    KeAbPostRelease(v16);
    return v18;
  }
  return result;
}
