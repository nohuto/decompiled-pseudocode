/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14066CBCC
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoGetTopLevelIrp @ 0x140102140 (IoGetTopLevelIrp.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // r12
  char v10; // r13
  char *FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  char v15; // dl
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  char v21; // r12
  struct _ERESOURCE *v22; // rcx
  struct _ERESOURCE *v23; // rcx
  struct _ERESOURCE *v24; // rcx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int16 v27; // ax
  BOOLEAN v28; // [rsp+40h] [rbp-68h]
  LONGLONG v29; // [rsp+48h] [rbp-60h]
  LARGE_INTEGER EndOffset; // [rsp+50h] [rbp-58h] BYREF
  __int64 v31; // [rsp+58h] [rbp-50h]
  __int64 v32; // [rsp+60h] [rbp-48h]
  char *v33; // [rsp+68h] [rbp-40h]

  v7 = Length;
  v31 = 0LL;
  v32 = 0LL;
  v28 = 1;
  if ( FileOffset->LowPart != -1 || (v10 = 1, FileOffset->HighPart != -1) )
    v10 = 0;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, v7, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !(_DWORD)v7 )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v33 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v10 || FileOffset->QuadPart + v7 > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 1;
  }
  if ( v10 )
    v16 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v16 = *FileOffset;
  v17 = v16.QuadPart + v7;
  v29 = v16.QuadPart + v7;
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap
    || (v18 = FsContext[5]) == 0
    || 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < v7
    || v17 > *((_QWORD *)FsContext + 3) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v19 = KeGetCurrentThread();
    v27 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v27;
    if ( !v27 )
      goto LABEL_59;
    return 0;
  }
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v10 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v17 = v16.QuadPart + v7;
      v29 = v16.QuadPart + v7;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_27;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_27;
  }
  if ( v18 == 2 )
  {
    LOBYTE(v14) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            Length,
            v14,
            LockKey,
            0,
            IoStatus,
            DeviceObject) )
    {
LABEL_27:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20 )
      {
LABEL_59:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      return 0;
    }
  }
  if ( v17 <= *((_QWORD *)FsContext + 4) )
  {
    v21 = 0;
  }
  else
  {
    v21 = 1;
    v31 = *((_QWORD *)FsContext + 4);
    v32 = *((_QWORD *)FsContext + 5);
    if ( *((_DWORD *)FsContext + 9) == HIDWORD(v29) || (v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v28 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v28 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v28 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == HIDWORD(v29) || (v23 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v23, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v21 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v21 )
  {
    v24 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v24 )
    {
      ExAcquireResourceExclusiveLite(v24, 1u);
      *((_QWORD *)FsContext + 4) = v31;
      *((_QWORD *)FsContext + 5) = v32;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v31;
      *((_QWORD *)FsContext + 5) = v32;
    }
  }
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
  return v28;
}
