/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x14042DE48
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140024850 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401B1FD8 (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401B240C (CcSetPrivateWriteFile.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
