/*
 * XREFs of CcCopyWriteWontFlush @ 0x1400E9BD0
 * Callers:
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x140020620 (CcCanIWriteStream.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  int BaseIoPriorityThread; // eax
  int v4; // edx
  struct _KTHREAD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // r11d
  BOOLEAN result; // al

  result = Length < 0x1000000
        && (FileObject->Flags & 0x10) == 0
        && ((BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread()), BaseIoPriorityThread < 2)
         && v5 == KeGetCurrentThread()
         && v5[1].Timer.DueTime.LowPart
         || BaseIoPriorityThread > 0)
        && ((v4 & 0x1000000) == 0 || CcCanIWriteStream(v6, v7, 0, 0));
  return result;
}
