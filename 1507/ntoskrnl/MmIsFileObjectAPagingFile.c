/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140086080
 * Callers:
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     IoSynchronousPageWriteEx @ 0x140112630 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012D4C8 (IoAsynchronousPageWrite.c)
 *     FsRtlIsSystemPagingFile @ 0x1401329E4 (FsRtlIsSystemPagingFile.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiPagefileCompare @ 0x14008614C (MiPagefileCompare.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmIsFileObjectAPagingFile(__int64 a1)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // bp
  int v4; // ett
  _QWORD *v5; // rbx
  int v6; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034F6A8);
  }
  else
  {
    _m_prefetchw(&dword_14034F6A8);
    v4 = dword_14034F6A8 & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(
                 &dword_14034F6A8,
                 (dword_14034F6A8 & 0x7FFFFFFF) + 1,
                 dword_14034F6A8 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034F6A8);
  }
  v5 = (_QWORD *)qword_14034F6A0;
  if ( qword_14034F6A0 )
  {
    do
    {
      v6 = MiPagefileCompare(a1, v5);
      if ( v6 < 0 )
      {
        v5 = (_QWORD *)*v5;
      }
      else
      {
        if ( v6 <= 0 )
        {
          if ( v5 )
            v2 = 1;
          break;
        }
        v5 = (_QWORD *)v5[1];
      }
    }
    while ( v5 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034F6A8, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034F6A8, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034F6A8);
  }
  __writecr8(CurrentIrql);
  return v2;
}
