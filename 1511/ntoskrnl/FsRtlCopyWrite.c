/*
 * XREFs of FsRtlCopyWrite @ 0x1405F33C8
 * Callers:
 *     VerifierFsRtlCopyWrite @ 0x1406C04A0 (VerifierFsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x14003AD60 (IoSetTopLevelIrp.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     CcCopyWriteWontFlush @ 0x140070FC0 (CcCopyWriteWontFlush.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetTopLevelIrp @ 0x1400C8680 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 *     CcCopyWrite @ 0x1401A8E20 (CcCopyWrite.c)
 *     CcZeroData @ 0x1403CAF50 (CcZeroData.c)
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
  BOOLEAN v12; // r14
  char v13; // di
  char *FsContext; // rsi
  signed __int64 v15; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  char v18; // r8
  LARGE_INTEGER v19; // rdi
  signed __int64 v20; // rbx
  char v21; // cl
  signed __int64 v22; // rdx
  ULONG v23; // r13d
  char v24; // r12
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  BOOLEAN v29; // [rsp+40h] [rbp-78h]
  char v30; // [rsp+41h] [rbp-77h]
  LONGLONG v31; // [rsp+48h] [rbp-70h]
  LARGE_INTEGER EndOffset; // [rsp+50h] [rbp-68h] BYREF
  __int64 v33; // [rsp+58h] [rbp-60h]
  __int64 v34; // [rsp+60h] [rbp-58h]
  char *v35; // [rsp+68h] [rbp-50h]
  char v36[72]; // [rsp+70h] [rbp-48h] BYREF

  v9 = Length;
  v10 = FileOffset;
  v12 = 0;
  v29 = 1;
  if ( FileOffset->QuadPart == -1 )
  {
    v13 = 1;
    v30 = 1;
  }
  else
  {
    v13 = 0;
    v30 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v35 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, v10, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  v15 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v34 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v13 || (signed __int64)(v9 + v10->QuadPart) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v18 = 0;
LABEL_16:
    if ( v13 )
      v19 = *(LARGE_INTEGER *)(FsContext + 32);
    else
      v19 = *v10;
    v20 = v19.QuadPart + v9;
    HIDWORD(v31) = HIDWORD(v20);
    EndOffset = v19;
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_32;
    v21 = FsContext[5];
    if ( !v21 )
      goto LABEL_32;
    v22 = *((_QWORD *)FsContext + 5);
    if ( v19.QuadPart >= v22 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v19.QuadPart < v15 || v20 > *((_QWORD *)FsContext + 3) )
      goto LABEL_32;
    if ( v18 && v20 > v22 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
        goto LABEL_12;
      if ( v30 )
      {
        v19 = *(LARGE_INTEGER *)(FsContext + 32);
        EndOffset = v19;
        v20 = v19.QuadPart + v15;
        v31 = v19.QuadPart + v15;
      }
      if ( !FileObject->PrivateCacheMap || (v21 = FsContext[5]) == 0 || v20 > *((_QWORD *)FsContext + 3) )
      {
LABEL_32:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        goto LABEL_12;
      }
    }
    if ( v21 == 2 )
    {
      if ( v10->QuadPart == -1 )
        v10 = (LARGE_INTEGER *)(FsContext + 32);
      LOBYTE(v17) = Wait;
      v23 = Length;
      if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, char *, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
              FileObject,
              v10,
              Length,
              v17,
              LockKey,
              0,
              v36,
              DeviceObject) )
      {
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
LABEL_63:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return v12;
      }
    }
    else
    {
      v23 = Length;
    }
    if ( v20 <= *((_QWORD *)FsContext + 4) )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      v34 = *((_QWORD *)FsContext + 4);
      v33 = *((_QWORD *)FsContext + 5);
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v31) || (v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v20;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v25, 1u);
        *((_QWORD *)FsContext + 4) = v20;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v19.QuadPart > *((_QWORD *)FsContext + 5) )
      v29 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v29 )
      v29 = CcCopyWrite(FileObject, &EndOffset, v23, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v29 )
    {
      if ( v20 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v31)
          || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v20;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v26, 1u);
          *((_QWORD *)FsContext + 5) = v20;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v24 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v20;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v19.QuadPart + v23;
    }
    else if ( v24 )
    {
      v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v27 )
      {
        ExAcquireResourceExclusiveLite(v27, 1u);
        *((_QWORD *)FsContext + 4) = v34;
        *((_QWORD *)FsContext + 5) = v33;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v34;
        *((_QWORD *)FsContext + 5) = v33;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v29;
    goto LABEL_63;
  }
  if ( ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
  {
    v18 = 1;
    goto LABEL_16;
  }
LABEL_12:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0;
}
