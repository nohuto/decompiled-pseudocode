/*
 * XREFs of CcCopyRead @ 0x1404EEC38
 * Callers:
 *     CcFastCopyRead @ 0x1405F8ED4 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x14061D3CC (FsRtlCopyRead.c)
 * Callees:
 *     CcCopyReadEx @ 0x140032C70 (CcCopyReadEx.c)
 */

BOOLEAN __stdcall CcCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  return CcCopyReadEx(FileObject, (__int64 *)FileOffset, Length, Wait, Buffer, IoStatus, 0LL);
}
