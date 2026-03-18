/*
 * XREFs of CcCopyWriteWontFlush @ 0x14010DE90
 * Callers:
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x1400E4930 (CcCanIWriteStream.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r11
  int v5; // eax

  if ( Length >= 0x1000000 )
    return 0;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v5 = 0;
  }
  else if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread != KeGetCurrentThread() || !HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
LABEL_5:
    if ( v5 <= 0 )
      return 0;
  }
  return (Flags & 0x1000000) == 0 || CcCanIWriteStream((__int64)FileObject, Length, 0, 0);
}
