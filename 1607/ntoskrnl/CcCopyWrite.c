/*
 * XREFs of CcCopyWrite @ 0x1401B19E8
 * Callers:
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1400EBDE0 (CcCopyWriteEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64)FileOffset, *(__int64 *)&Length, Wait, (char *)Buffer, 0LL);
}
