/*
 * XREFs of CcFastCopyRead @ 0x1405F8F88
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyRead @ 0x1404D0D00 (CcCopyRead.c)
 */

void __stdcall CcFastCopyRead(
        PFILE_OBJECT FileObject,
        ULONG FileOffset,
        ULONG Length,
        ULONG PageCount,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  LARGE_INTEGER v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v6[0].QuadPart = FileOffset;
  CcCopyRead(FileObject, v6, Length, 1u, Buffer, IoStatus);
}
