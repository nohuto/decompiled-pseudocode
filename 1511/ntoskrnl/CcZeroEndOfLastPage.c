/*
 * XREFs of CcZeroEndOfLastPage @ 0x14003D0A0
 * Callers:
 *     MmCreateSystemSection @ 0x140019F4C (MmCreateSystemSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x140093000 (FsRtlCreateSectionForDataScan.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     NtCreateSection @ 0x1403F7DD0 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x14044FAE0 (MmCreateSpecialImageSection.c)
 * Callees:
 *     CcPurgeCacheSection @ 0x14000EA84 (CcPurgeCacheSection.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     CcFlushCache @ 0x1400E8FD4 (CcFlushCache.c)
 *     FsRtlAcquireFileExclusive @ 0x1403F9138 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject)
{
  char v1; // di
  PVOID FsContext; // rax
  char v4; // cl
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink )
  {
    v1 = 1;
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v4 = *((_BYTE *)FsContext + 4);
  if ( (v4 & 0x40) != 0 )
  {
    ExAcquireFastMutex(*((PFAST_MUTEX *)FsContext + 6));
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)FileObject->FsContext + 6));
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v4 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCache(FileObject->SectionObjectPointer, 0LL, 0, &IoStatus);
    if ( !IoStatus.Status )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v1 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
