/*
 * XREFs of FsRtlOplockBreakToNoneEx @ 0x1401ACDDC
 * Callers:
 *     FsRtlOplockBreakToNone @ 0x1401ACDA4 (FsRtlOplockBreakToNone.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x1400F4010 (FsRtlpOplockBreakToNone.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakToNoneEx(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  PFAST_MUTEX *v8; // rbx
  NTSTATUS v9; // esi
  ULONG v10; // edi
  void (__fastcall *v11)(__int64, __int64); // r15
  POPLOCK_WAIT_COMPLETE_ROUTINE v12; // r12
  __int64 v14[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF

  v8 = (PFAST_MUTEX *)*Oplock;
  v14[1] = (__int64)*Oplock;
  LOBYTE(v15) = 0;
  if ( (Flags & 0x10) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
    v10 = Flags | 8;
    v11 = (void (__fastcall *)(__int64, __int64))PostIrpRoutine;
    v12 = CompletionRoutine;
    do
    {
      LOBYTE(v14[0]) = 0;
      if ( !(_BYTE)v15 )
      {
        ExAcquireFastMutexUnsafe(v8[19]);
        LOBYTE(v15) = 1;
      }
      v9 = FsRtlpOplockBreakToNone(
             v8,
             (__int64)Irp->Tail.Overlay.CurrentStackLocation,
             (__int64)Irp,
             v10,
             (__int64)Context,
             (__int64)v12,
             v11,
             &v15,
             v14);
      if ( !v9 )
        v9 = FsRtlpOplockBreakByCacheFlags(
               v8,
               (__int64)Irp->Tail.Overlay.CurrentStackLocation,
               (__int64)Irp,
               v10,
               28672,
               (__int64)Context,
               (__int64)v12,
               (__int64)v11,
               &v15,
               (__int64)v14);
    }
    while ( LOBYTE(v14[0]) );
  }
  if ( (_BYTE)v15 )
    ExReleaseFastMutexUnsafe(v8[19]);
  return v9;
}
