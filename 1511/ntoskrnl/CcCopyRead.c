/*
 * XREFs of CcCopyRead @ 0x1404C3AD0
 * Callers:
 *     CcFastCopyRead @ 0x1405DB560 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x1405F315C (FsRtlCopyRead.c)
 * Callees:
 *     CcCopyReadEx @ 0x1400A32F0 (CcCopyReadEx.c)
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
