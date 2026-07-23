/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x14061E0CC
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
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcZeroData @ 0x14045739C (CcZeroData.c)
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
  bool v10; // r13
  char *FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  char v15; // dl
  LARGE_INTEGER v16; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  char v19; // r12
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  BOOLEAN v29; // [rsp+40h] [rbp-68h]
  LONGLONG v30; // [rsp+48h] [rbp-60h]
  LARGE_INTEGER EndOffset; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]
  char *v34; // [rsp+68h] [rbp-40h]

  v7 = Length;
  v32 = 0LL;
  v33 = 0LL;
  v29 = 1;
  v10 = FileOffset->QuadPart == -1;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, v7, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !(_DWORD)v7 )
    return 1;
  FsContext = (char *)FileObject->FsContext;
  v34 = FsContext;
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
  v30 = v16.QuadPart + v7;
  EndOffset = v16;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_49;
  v18 = FsContext[5];
  if ( !v18 || 0x7FFFFFFFFFFFFFFFLL - v16.QuadPart < v7 || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_49;
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v10 )
    {
      v16 = *(LARGE_INTEGER *)(FsContext + 32);
      EndOffset = v16;
      v17 = v16.QuadPart + v7;
      v30 = v16.QuadPart + v7;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_49;
    v18 = FsContext[5];
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_49;
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
LABEL_49:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
      return 0;
    }
  }
  if ( v17 <= *((_QWORD *)FsContext + 4) )
  {
    v19 = 0;
  }
  else
  {
    v19 = 1;
    v32 = *((_QWORD *)FsContext + 4);
    v33 = *((_QWORD *)FsContext + 5);
    if ( *((_DWORD *)FsContext + 9) == HIDWORD(v30) || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v20, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( v16.QuadPart > *((_QWORD *)FsContext + 5) )
    v29 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v29 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v29 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == HIDWORD(v30) || (v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v21, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v19 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v19 )
  {
    v22 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v22 )
    {
      ExAcquireResourceExclusiveLite(v22, 1u);
      *((_QWORD *)FsContext + 4) = v32;
      *((_QWORD *)FsContext + 5) = v33;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v32;
      *((_QWORD *)FsContext + 5) = v33;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
  return v29;
}
