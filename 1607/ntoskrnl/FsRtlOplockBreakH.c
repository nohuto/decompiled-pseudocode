/*
 * XREFs of FsRtlOplockBreakH @ 0x1404C47E0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  ULONG v6; // r14d
  PFAST_MUTEX *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS v10; // ebx
  POPLOCK_FS_PREPOST_IRP v12; // r12
  POPLOCK_WAIT_COMPLETE_ROUTINE v13; // r13
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+20h]

  v16 = (__int64)Context;
  v6 = Flags;
  v8 = (PFAST_MUTEX *)*Oplock;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(v14) = 0;
  v10 = 0;
  if ( !v8 )
    return v10;
  v10 = FsRtlpAttachOplockKey(Irp, (__int64)Irp, *(__int64 *)&Flags, (__int64)Context);
  if ( !v10 )
  {
    if ( CurrentStackLocation->MajorFunction )
    {
LABEL_8:
      v12 = PostIrpRoutine;
      v13 = CompletionRoutine;
      do
      {
        LOBYTE(v15) = 0;
        if ( !(_BYTE)v14 )
        {
          ExAcquireFastMutexUnsafe(v8[19]);
          LOBYTE(v14) = 1;
        }
        v10 = FsRtlpOplockBreakByCacheFlags(
                (__int64)v8,
                (__int64)CurrentStackLocation,
                Irp,
                v6,
                0x2000,
                v16,
                (__int64)v13,
                (__int64)v12,
                &v14,
                (__int64)&v15);
      }
      while ( (_BYTE)v15 );
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0 )
    {
      if ( (CurrentStackLocation->Parameters.Create.Options & 0x10000) != 0 )
        v6 |= 0x10000000u;
      goto LABEL_8;
    }
    v10 = 0;
  }
LABEL_14:
  if ( (_BYTE)v14 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v10;
}
