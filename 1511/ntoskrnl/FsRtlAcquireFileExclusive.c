/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1403F9138
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcClearPrivateWriteFile @ 0x1401A92AC (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401A96C8 (CcSetPrivateWriteFile.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject);
}
