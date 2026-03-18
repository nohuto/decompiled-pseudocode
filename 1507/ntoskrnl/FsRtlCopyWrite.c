/*
 * XREFs of FsRtlCopyWrite @ 0x14066C1B4
 * Callers:
 *     VerifierFsRtlCopyWrite @ 0x140741C94 (VerifierFsRtlCopyWrite.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IoGetTopLevelIrp @ 0x140102140 (IoGetTopLevelIrp.c)
 *     CcCopyWriteWontFlush @ 0x14010DE90 (CcCopyWriteWontFlush.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     CcCopyWrite @ 0x1401DCF30 (CcCopyWrite.c)
 *     CcZeroData @ 0x1404B124C (CcZeroData.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rbx
  LARGE_INTEGER *v10; // r12
  char v12; // di
  char *FsContext; // r14
  signed __int64 v14; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r9
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  char v19; // r8
  LARGE_INTEGER v20; // rdi
  signed __int64 v21; // rbx
  char v22; // cl
  signed __int64 v23; // rdx
  ULONG v24; // r13d
  char v25; // r12
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  struct _ERESOURCE *v28; // rcx
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  BOOLEAN v32; // [rsp+40h] [rbp-78h]
  char v33; // [rsp+41h] [rbp-77h]
  LONGLONG v34; // [rsp+48h] [rbp-70h]
  LARGE_INTEGER EndOffset; // [rsp+50h] [rbp-68h] BYREF
  __int64 v36; // [rsp+58h] [rbp-60h]
  __int64 v37; // [rsp+60h] [rbp-58h]
  char *v38; // [rsp+68h] [rbp-50h]
  char v39[72]; // [rsp+70h] [rbp-48h] BYREF

  v9 = Length;
  v10 = FileOffset;
  v32 = 1;
  if ( FileOffset->QuadPart == -1 )
  {
    v12 = 1;
    v33 = 1;
  }
  else
  {
    v12 = 0;
    v33 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v38 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, v10, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  v14 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v37 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v12 || (signed __int64)(v9 + v10->QuadPart) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v19 = 0;
  }
  else
  {
    if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
    {
LABEL_12:
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0;
    }
    v19 = 1;
  }
  if ( v12 )
    v20 = *(LARGE_INTEGER *)(FsContext + 32);
  else
    v20 = *v10;
  v21 = v20.QuadPart + v9;
  HIDWORD(v34) = HIDWORD(v21);
  EndOffset = v20;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_35;
  v22 = FsContext[5];
  if ( !v22 )
    goto LABEL_35;
  v23 = *((_QWORD *)FsContext + 5);
  if ( v20.QuadPart >= v23 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v20.QuadPart < v14 || v21 > *((_QWORD *)FsContext + 3) )
    goto LABEL_35;
  if ( v19 && v21 > v23 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    if ( v33 )
    {
      v20 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v20;
      v21 = v20.QuadPart + v14;
      v34 = v20.QuadPart + v14;
    }
    if ( !FileObject->PrivateCacheMap || (v22 = FsContext[5]) == 0 || v21 > *((_QWORD *)FsContext + 3) )
    {
LABEL_35:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      goto LABEL_12;
    }
  }
  if ( v22 == 2 )
  {
    if ( v10->QuadPart == -1 )
      v10 = (LARGE_INTEGER *)(FsContext + 32);
    LOBYTE(v16) = Wait;
    v24 = Length;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, char *, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            v10,
            Length,
            v16,
            LockKey,
            0,
            v39,
            DeviceObject) )
      goto LABEL_35;
  }
  else
  {
    v24 = Length;
  }
  if ( v21 <= *((_QWORD *)FsContext + 4) )
  {
    v25 = 0;
  }
  else
  {
    v25 = 1;
    v37 = *((_QWORD *)FsContext + 4);
    v36 = *((_QWORD *)FsContext + 5);
    if ( *((_DWORD *)FsContext + 9) == HIDWORD(v34) || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v21;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v26, 1u);
      *((_QWORD *)FsContext + 4) = v21;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v20.QuadPart > *((_QWORD *)FsContext + 5) )
    v32 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
  if ( v32 )
    v32 = CcCopyWrite(FileObject, &EndOffset, v24, Wait, Buffer);
  IoSetTopLevelIrp(0LL);
  if ( v32 )
  {
    if ( v21 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == HIDWORD(v34) || (v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v21;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v27, 1u);
        *((_QWORD *)FsContext + 5) = v21;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v25 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v21;
      FileObject->Flags |= 0x2000u;
    }
    FileObject->CurrentByteOffset.QuadPart = v20.QuadPart + v24;
  }
  else if ( v25 )
  {
    v28 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v28 )
    {
      ExAcquireResourceExclusiveLite(v28, 1u);
      *((_QWORD *)FsContext + 4) = v37;
      *((_QWORD *)FsContext + 5) = v36;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v37;
      *((_QWORD *)FsContext + 5) = v36;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  v29 = KeGetCurrentThread();
  v30 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v30;
  if ( !v30
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v32;
}
