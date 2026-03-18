/*
 * XREFs of CcZeroEndOfLastPage @ 0x140088AE0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14002F658 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSystemSection @ 0x140153B60 (MmCreateSystemSection.c)
 *     NtCreateSection @ 0x1404B3660 (NtCreateSection.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     MmCreateSpecialImageSection @ 0x140508F84 (MmCreateSpecialImageSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcPurgeCacheSection @ 0x14008322C (CcPurgeCacheSection.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     FsRtlAcquireFileExclusive @ 0x1404B32E0 (FsRtlAcquireFileExclusive.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 */

void __fastcall CcZeroEndOfLastPage(PFILE_OBJECT FileObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  PVOID FsContext; // rax
  char v7; // cl
  ULONG_PTR v8; // rbp
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v11; // rdi
  unsigned __int8 v12; // bp
  unsigned __int32 v13; // eax
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  if ( !KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink )
  {
    v5 = 1;
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
    FsRtlAcquireFileExclusive(FileObject);
  }
  FsContext = FileObject->FsContext;
  v7 = *((_BYTE *)FsContext + 4);
  if ( (v7 & 0x40) != 0 )
  {
    v8 = *((_QWORD *)FsContext + 6);
    v9 = KeAbPreAcquire(v8, 0LL, 0LL, a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v8, 0) )
      ExpAcquireFastMutexContended(v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    *(_QWORD *)(v8 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v8 + 48) = CurrentIrql;
    *((_BYTE *)FileObject->FsContext + 4) |= 0x20u;
    v11 = *((_QWORD *)FileObject->FsContext + 6);
    v12 = *(_BYTE *)(v11 + 48);
    *(_QWORD *)(v11 + 8) = 0LL;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended(v11, v13);
    __writecr8(v12);
    KeAbPostRelease(v11);
  }
  else
  {
    *((_BYTE *)FsContext + 4) = v7 | 0x20;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 6) & 4) != 0 )
  {
    CcFlushCache(FileObject->SectionObjectPointer, 0LL, 0, &IoStatus);
    if ( !IoStatus.Status )
      CcPurgeCacheSection(FileObject->SectionObjectPointer, 0LL, 0, 0);
  }
  if ( v5 )
  {
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    FsRtlReleaseFile(FileObject);
  }
}
