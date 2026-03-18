/*
 * XREFs of CcCopyRead @ 0x14055B230
 * Callers:
 *     CcFastCopyRead @ 0x14064FBA8 (CcFastCopyRead.c)
 *     FsRtlCopyRead @ 0x14066BE8C (FsRtlCopyRead.c)
 * Callees:
 *     CcCopyReadEx @ 0x140053770 (CcCopyReadEx.c)
 */

BOOLEAN __stdcall CcCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  return CcCopyReadEx(FileObject, (__int64 *)FileOffset, Length, Wait, Buffer, IoStatus);
}
