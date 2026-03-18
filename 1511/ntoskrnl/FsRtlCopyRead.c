/*
 * XREFs of FsRtlCopyRead @ 0x1405F315C
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x14003AD60 (IoSetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetTopLevelIrp @ 0x1400C8680 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     CcCopyRead @ 0x1404C3AD0 (CcCopyRead.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // r14
  LONGLONG v13; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v16; // si
  __int64 v17; // r9
  char v18; // al
  LONGLONG v19; // rax

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( (_DWORD)v9 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
    {
      IoStatus->Status = -1073741811;
      IoStatus->Information = 0LL;
      return 0;
    }
    v13 = v9 + FileOffset->QuadPart;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( Wait )
    {
      __incgsdword(0x2E48u);
      v16 = 1;
      ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    }
    else
    {
      __incgsdword(0x2E44u);
      if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        __incgsdword(0x5E40u);
        return 0;
      }
      v16 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v18 = *((_BYTE *)FsContext + 5)) == 0
      || v18 == 2
      && (LOBYTE(v17) = Wait,
          !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
             FileObject,
             FileOffset,
             (unsigned int)v9,
             v17,
             LockKey,
             1,
             IoStatus,
             DeviceObject)) )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      __incgsdword(0x2E4Cu);
      return 0;
    }
    v19 = *((_QWORD *)FsContext + 4);
    if ( v13 > v19 )
    {
      if ( FileOffset->QuadPart >= v19 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_22:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v16;
      }
      LODWORD(v9) = *((_DWORD *)FsContext + 8) - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v16 = CcCopyRead(FileObject, FileOffset, v9, Wait, Buffer, IoStatus);
    FileObject->Flags |= 0x80000u;
    if ( v16 )
      FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
    IoSetTopLevelIrp(0LL);
    goto LABEL_22;
  }
  IoStatus->Status = 0;
  IoStatus->Information = 0LL;
  return 1;
}
