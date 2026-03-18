/*
 * XREFs of FsRtlCopyRead @ 0x14066BE8C
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoGetTopLevelIrp @ 0x140102140 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcCopyRead @ 0x14055B230 (CcCopyRead.c)
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
  PVOID FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r9
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  char v19; // al
  LONGLONG v20; // rax
  struct _KTHREAD *v21; // rdx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  BOOLEAN v27; // [rsp+40h] [rbp-28h]

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( !(_DWORD)v9 )
  {
    IoStatus->Status = 0;
    IoStatus->Information = 0LL;
    return 1;
  }
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
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
  }
  else
  {
    __incgsdword(0x2E44u);
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
    {
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      __incgsdword(0x5E40u);
      return 0;
    }
  }
  if ( !FileObject->PrivateCacheMap
    || (v19 = *((_BYTE *)FsContext + 5)) == 0
    || v19 == 2
    && (LOBYTE(v16) = Wait,
        !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
           FileObject,
           FileOffset,
           (unsigned int)v9,
           v16,
           LockKey,
           1,
           IoStatus,
           DeviceObject)) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    __incgsdword(0x2E4Cu);
    return 0;
  }
  v20 = *((_QWORD *)FsContext + 4);
  if ( v13 > v20 )
  {
    if ( FileOffset->QuadPart >= v20 )
    {
      IoStatus->Status = -1073741807;
      IoStatus->Information = 0LL;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 1;
    }
    LODWORD(v9) = v20 - FileOffset->LowPart;
  }
  IoSetTopLevelIrp((PIRP)4);
  v27 = CcCopyRead(FileObject, FileOffset, v9, Wait, Buffer, IoStatus);
  FileObject->Flags |= 0x80000u;
  if ( v27 )
    FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
  IoSetTopLevelIrp(0LL);
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v27;
}
