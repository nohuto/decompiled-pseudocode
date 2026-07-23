/*
 * XREFs of FsRtlMdlReadDev @ 0x14061DE8C
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x140024B10 (IoSetTopLevelIrp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     IoGetTopLevelIrp @ 0x14008BC80 (IoGetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
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
  __int64 v8; // r14
  LONGLONG v12; // rbx
  PERESOURCE *v13; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  char v16; // al
  LONGLONG v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PERESOURCE *FsContext; // [rsp+40h] [rbp-28h]

  v8 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v8 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v12 = FileOffset->QuadPart + v8;
    FsContext = (PERESOURCE *)FileObject->FsContext;
    v13 = FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    __incgsdword(0x5E04u);
    ExAcquireResourceSharedLite(FsContext[1], 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v16 = *((_BYTE *)FsContext + 5);
      if ( v16 )
      {
        if ( v16 != 2
          || (LOBYTE(v15) = 1,
              ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT, PERESOURCE *))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
                FileObject,
                FileOffset,
                (unsigned int)v8,
                v15,
                LockKey,
                1,
                IoStatus,
                DeviceObject,
                FsContext)) )
        {
          v17 = (LONGLONG)v13[4];
          if ( v12 > v17 )
          {
            if ( FileOffset->QuadPart >= v17 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(v13[1]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
              return 1;
            }
            LODWORD(v8) = *((_DWORD *)v13 + 8) - FileOffset->LowPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v8, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(v13[1]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
    __incgsdword(0x5E08u);
  }
  return 0;
}
