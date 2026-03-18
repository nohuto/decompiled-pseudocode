/*
 * XREFs of CcCopyWrite @ 0x1401DCF30
 * Callers:
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x140108EF0 (CcCopyWriteEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, FileOffset, Length, Wait, (char *)Buffer, 0LL);
}
