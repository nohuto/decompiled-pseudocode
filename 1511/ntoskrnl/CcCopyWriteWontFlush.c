/*
 * XREFs of CcCopyWriteWontFlush @ 0x140070FC0
 * Callers:
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  int v4; // r10d
  __int64 v5; // r11

  return Length < 0x1000000
      && (FileObject->Flags & 0x10) == 0
      && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0
      && ((v4 & 0x1000000) == 0 || CcCanIWriteStream(v5, Length, 0, 0));
}
