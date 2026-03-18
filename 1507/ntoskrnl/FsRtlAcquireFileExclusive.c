/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1404B32E0
 * Callers:
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     CcClearPrivateWriteFile @ 0x1401DD72C (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
