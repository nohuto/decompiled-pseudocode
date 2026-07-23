/*
 * XREFs of CcZeroData @ 0x14045739C
 * Callers:
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     CcZeroDataOnDisk @ 0x14006AD6C (CcZeroDataOnDisk.c)
 *     MmGetAvailablePages @ 0x14006D13C (MmGetAvailablePages.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcFlushCache @ 0x14008EB94 (CcFlushCache.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rdi
  BOOLEAN v5; // si
  ULONG Flags; // eax
  char v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned __int64 AvailablePages; // rax
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  LONGLONG v17; // rax
  ULONG v18; // ebx
  unsigned int v19; // ebx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp+50h] BYREF
  LONGLONG *v22; // [rsp+90h] [rbp+58h] BYREF
  BOOLEAN v23; // [rsp+98h] [rbp+60h]

  v23 = Wait;
  v22 = (LONGLONG *)EndOffset;
  QuadPart = StartOffset->QuadPart;
  v5 = 0;
  Flags = FileObject->Flags;
  v21 = StartOffset->QuadPart;
  if ( (Flags & 0x10) != 0 || (v9 = 0, !FileObject->PrivateCacheMap) )
    v9 = 1;
  v10 = EndOffset->QuadPart - QuadPart;
  if ( !v9 && v10 <= 0x200000 && ((unsigned __int64)MmGetAvailablePages() >= 0x800 || v10 <= 0x2000) || Wait )
  {
    if ( IoGetRelatedDeviceObject(FileObject)->SectorSize )
      v11 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v11 = 0;
    if ( v9 )
    {
      if ( (v11 & (unsigned int)v21) != 0 )
      {
        v21 = (~v11 | 0xFFFFFFFF00000000uLL) & (v11 + QuadPart);
        v18 = (~v11 & (v11 + QuadPart)) - StartOffset->LowPart;
        if ( !CcZeroDataInCache((__int64)FileObject, (__int64 *)StartOffset, v21 - StartOffset->LowPart, v23) )
          return v5;
        CcFlushCache(FileObject->SectionObjectPointer, StartOffset, v18, &IoStatus);
        if ( IoStatus.Status < 0 )
          RtlRaiseStatus(IoStatus.Status);
        QuadPart = v21;
      }
      goto LABEL_15;
    }
    AvailablePages = MmGetAvailablePages();
    v13 = v21;
    if ( AvailablePages < 0x800 && v10 > 0x2000 && ((unsigned int)v21 & v11) != 0 )
    {
      v19 = v21 + v11;
    }
    else
    {
      v14 = MmGetAvailablePages();
      if ( v14 < v15 && v10 > 0x2000 )
      {
        LODWORD(v10) = 0;
LABEL_14:
        QuadPart += (unsigned int)v10;
        v21 = QuadPart;
LABEL_15:
        if ( QuadPart < *v22 )
        {
          v17 = *v22 + v11;
          v22 = (LONGLONG *)((~v11 | 0xFFFFFFFF00000000uLL) & v17);
          CcZeroDataOnDisk((__int64)FileObject, (__int64 *)&v21, &v22);
        }
        return 1;
      }
      if ( v10 <= 0x200000 )
      {
LABEL_12:
        if ( (_DWORD)v10 && !CcZeroDataInCache((__int64)FileObject, (__int64 *)&v21, v10, v23) )
          return v5;
        goto LABEL_14;
      }
      v19 = v11 + v13 + 0x200000;
    }
    LODWORD(v10) = (~v11 & v19) - v13;
    goto LABEL_12;
  }
  return v5;
}
