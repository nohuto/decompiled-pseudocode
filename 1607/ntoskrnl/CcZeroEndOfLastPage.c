/*
 * XREFs of CcZeroEndOfLastPage @ 0x1400243D0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14007DBE0 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSystemSection @ 0x140082E5C (MmCreateSystemSection.c)
 *     NtCreateSection @ 0x14042B860 (NtCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x14045CE40 (MmCreateSpecialImageSection.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 *     CcFlushCache @ 0x14008EB94 (CcFlushCache.c)
 *     FsRtlAcquireFileExclusive @ 0x14042CD18 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
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
