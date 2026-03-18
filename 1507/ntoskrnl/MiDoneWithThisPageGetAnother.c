/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140003E18
 * Callers:
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x140003EF4 (MiFinishLastForkPageTable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 CurrentIrql)
{
  volatile signed __int32 *v8; // rbx
  _WORD *v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // r15
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned int v17; // edi
  signed __int32 v18; // eax
  _WORD *v19; // [rsp+20h] [rbp-28h] BYREF
  __int16 v20; // [rsp+28h] [rbp-20h]
  unsigned __int16 v21; // [rsp+2Ah] [rbp-1Eh]

  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  v8 = (volatile signed __int32 *)(a2 + 1272);
  MI_INITIALIZE_COLOR_BASE(v8, 0LL, &v19);
  v9 = v19;
  ++*v19;
  v10 = v21 | (unsigned __int16)(v20 & *v9);
  v11 = MiPartitionIdToPointer(*(unsigned __int16 *)(a3 + 1452));
  for ( i = v11; ; i = v11 )
  {
    Page = MiGetPage(i, v10, 194LL);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v14) = CurrentIrql;
    MiUnlockWorkingSetExclusive(v8, v14);
    MiWaitForFreePage(v11);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
    }
    else
    {
      v17 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire(v8);
      while ( 1 )
      {
        v18 = *v8;
        if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v18 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v8, v18 | 0x40000000, v18);
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
    }
  }
  v15 = 3 * Page;
  result = 0x58000000000LL;
  *(_QWORD *)(16 * v15 - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
