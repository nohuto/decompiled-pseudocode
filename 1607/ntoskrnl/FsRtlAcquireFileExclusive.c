/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x14042CD18
 * Callers:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401B1EBC (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
