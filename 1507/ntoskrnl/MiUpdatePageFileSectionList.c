/*
 * XREFs of MiUpdatePageFileSectionList @ 0x140082D08
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPagefileSectionCompare @ 0x140082E4C (MiPagefileSectionCompare.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdatePageFileSectionList(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1 + 56;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E8B0);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(&dword_14034E8B0, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E8B0);
    while ( (dword_14034E8B0 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034E8B0 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E8B0, dword_14034E8B0 | 0x40000000, dword_14034E8B0);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_14034E8A8, v4);
    goto LABEL_15;
  }
  v8 = (_QWORD *)qword_14034E8A8;
  LOBYTE(a3) = 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !qword_14034E8A8 )
    goto LABEL_14;
  while ( (int)MiPagefileSectionCompare(v9, v8, a3) < 0 )
  {
    v10 = (_QWORD *)*v8;
    if ( !*v8 )
    {
      LOBYTE(a3) = 0;
      goto LABEL_14;
    }
LABEL_9:
    v8 = v10;
  }
  v10 = (_QWORD *)v8[1];
  if ( v10 )
    goto LABEL_9;
  LOBYTE(a3) = 1;
LABEL_14:
  RtlAvlInsertNodeEx(&qword_14034E8A8, v8, a3, v4);
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
  else
    dword_14034E8B0 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
