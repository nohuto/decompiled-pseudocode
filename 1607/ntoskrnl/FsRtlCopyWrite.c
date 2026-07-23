/*
 * XREFs of FsRtlCopyWrite @ 0x14061D6EC
 * Callers:
 *     <none>
 * Callees:
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     IoSetTopLevelIrp @ 0x140024B10 (IoSetTopLevelIrp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IoGetTopLevelIrp @ 0x14008BC80 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     CcCopyWriteWontFlush @ 0x1400E9BD0 (CcCopyWriteWontFlush.c)
 *     CcCopyWrite @ 0x1401B18CC (CcCopyWrite.c)
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r8
  LARGE_INTEGER v21; // rdi
  signed __int64 v22; // rbx
  char v23; // cl
  signed __int64 v24; // rdx
  ULONG v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // r12
  struct _ERESOURCE *v30; // rcx
  struct _ERESOURCE *v31; // rcx
  struct _ERESOURCE *v32; // rcx
  BOOLEAN v34; // [rsp+40h] [rbp-78h]
  char v35; // [rsp+41h] [rbp-77h]
  LARGE_INTEGER EndOffset; // [rsp+48h] [rbp-70h] BYREF
  signed __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  char *v40; // [rsp+68h] [rbp-50h]
  char v41[72]; // [rsp+70h] [rbp-48h] BYREF

  v9 = Length;
  v10 = FileOffset;
  v12 = 0;
  v34 = 1;
  if ( FileOffset->QuadPart == -1 )
  {
    v13 = 1;
    v35 = 1;
  }
  else
  {
    v13 = 0;
    v35 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v40 = FsContext;
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
  v38 = 0LL;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v13 || (signed __int64)(v9 + v10->QuadPart) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v20 = 0;
LABEL_16:
    if ( v13 )
      v21 = *(LARGE_INTEGER *)(FsContext + 32);
    else
      v21 = *v10;
    v22 = v21.QuadPart + v9;
    v37 = v22;
    EndOffset = v21;
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_32;
    v23 = FsContext[5];
    if ( !v23 )
      goto LABEL_32;
    v24 = *((_QWORD *)FsContext + 5);
    if ( v21.QuadPart >= v24 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v21.QuadPart < v15 || v22 > *((_QWORD *)FsContext + 3) )
      goto LABEL_32;
    if ( v20 && v22 > v24 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
        goto LABEL_12;
      if ( v35 )
      {
        v21 = *(LARGE_INTEGER *)(FsContext + 32);
        EndOffset = v21;
        v22 = v21.QuadPart + v15;
        v37 = v21.QuadPart + v15;
      }
      if ( !FileObject->PrivateCacheMap || (v23 = FsContext[5]) == 0 || v22 > *((_QWORD *)FsContext + 3) )
      {
LABEL_32:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        goto LABEL_12;
      }
    }
    if ( v23 == 2 )
    {
      if ( v10->QuadPart == -1 )
        v10 = (LARGE_INTEGER *)(FsContext + 32);
      LOBYTE(v19) = Wait;
      v25 = Length;
      if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, char *, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
              FileObject,
              v10,
              Length,
              v19,
              LockKey,
              0,
              v41,
              DeviceObject) )
      {
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
LABEL_63:
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
        return v12;
      }
    }
    else
    {
      v25 = Length;
    }
    if ( v22 <= *((_QWORD *)FsContext + 4) )
    {
      v29 = 0;
    }
    else
    {
      v29 = 1;
      v38 = *((_QWORD *)FsContext + 4);
      v39 = *((_QWORD *)FsContext + 5);
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v37) || (v30 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v22;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v30, 1u);
        *((_QWORD *)FsContext + 4) = v22;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v21.QuadPart > *((_QWORD *)FsContext + 5) )
      v34 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v34 )
      v34 = CcCopyWrite(FileObject, &EndOffset, v25, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v34 )
    {
      if ( v22 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v37)
          || (v31 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v22;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v31, 1u);
          *((_QWORD *)FsContext + 5) = v22;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v29 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v22;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v21.QuadPart + v25;
    }
    else if ( v29 )
    {
      v32 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v32 )
      {
        ExAcquireResourceExclusiveLite(v32, 1u);
        *((_QWORD *)FsContext + 4) = v38;
        *((_QWORD *)FsContext + 5) = v39;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v38;
        *((_QWORD *)FsContext + 5) = v39;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v34;
    goto LABEL_63;
  }
  if ( ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
  {
    v20 = 1;
    goto LABEL_16;
  }
LABEL_12:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  return 0;
}
