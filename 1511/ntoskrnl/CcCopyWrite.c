/*
 * XREFs of CcCopyWrite @ 0x1401A8E20
 * Callers:
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x140077D10 (CcCopyWriteEx.c)
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
