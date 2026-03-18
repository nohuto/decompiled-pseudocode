/*
 * XREFs of FsRtlMdlReadDev @ 0x14066C8C0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoGetTopLevelIrp @ 0x140102140 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 */

BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // r15
  LONGLONG v11; // rbx
  PERESOURCE *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  char v15; // al
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  LONGLONG v18; // rax
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  bool v21; // zf
  struct _KTHREAD *v22; // rdx
  __int16 v23; // ax
  __int16 v24; // ax
  PERESOURCE *FsContext; // [rsp+40h] [rbp-38h]

  v7 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( !(_DWORD)v7 )
  {
    IoStatus->Status = 0;
    IoStatus->Information = 0LL;
    return 1;
  }
  v11 = FileOffset->QuadPart + v7;
  FsContext = (PERESOURCE *)FileObject->FsContext;
  v12 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  __incgsdword(0x5E04u);
  ExAcquireResourceSharedLite(FsContext[1], 1u);
  if ( !FileObject->PrivateCacheMap || (v15 = *((_BYTE *)FsContext + 5)) == 0 )
  {
    ExReleaseResourceLite(FsContext[1]);
    v16 = KeGetCurrentThread();
    v24 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v24;
    if ( !v24 )
      goto LABEL_23;
    goto LABEL_26;
  }
  if ( v15 != 2
    || (LOBYTE(v14) = 1,
        ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT, PERESOURCE *))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
          FileObject,
          FileOffset,
          (unsigned int)v7,
          v14,
          LockKey,
          1,
          IoStatus,
          DeviceObject,
          FsContext)) )
  {
    v18 = (LONGLONG)v12[4];
    if ( v11 > v18 )
    {
      if ( FileOffset->QuadPart >= v18 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
        ExReleaseResourceLite(v12[1]);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( v20 || ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink == &v19->152 )
          return 1;
        v21 = v19->SpecialApcDisable == 0;
LABEL_16:
        if ( v21 )
          KiCheckForKernelApcDelivery();
        return 1;
      }
      LODWORD(v7) = v18 - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    CcMdlRead(FileObject, FileOffset, v7, MdlChain, IoStatus);
    FileObject->Flags |= 0x80000u;
    IoSetTopLevelIrp(0LL);
    ExReleaseResourceLite(v12[1]);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( v23 || ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink == &v22->152 )
      return 1;
    v21 = v22->SpecialApcDisable == 0;
    goto LABEL_16;
  }
  ExReleaseResourceLite(v12[1]);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17 )
  {
LABEL_23:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 && !v16->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
  }
LABEL_26:
  __incgsdword(0x5E08u);
  return 0;
}
