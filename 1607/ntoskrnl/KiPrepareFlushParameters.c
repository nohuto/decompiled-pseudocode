/*
 * XREFs of KiPrepareFlushParameters @ 0x1401D6060
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, _BYTE *a3)
{
  int v3; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 result; // rax

  if ( !KiKvaShadow )
  {
    if ( !a1 )
      goto LABEL_9;
    v3 = a1 - 1;
    if ( !v3 )
    {
      CurrentThread = KeGetCurrentThread();
      *a3 = 0;
      result = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      *a2 = result;
      return result;
    }
LABEL_4:
    if ( v3 == 1 )
      goto LABEL_5;
LABEL_9:
    *a3 = 1;
    goto LABEL_10;
  }
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( !v3 )
      goto LABEL_9;
    goto LABEL_4;
  }
LABEL_5:
  *a3 = 0;
LABEL_10:
  *a2 = 0LL;
  return result;
}
