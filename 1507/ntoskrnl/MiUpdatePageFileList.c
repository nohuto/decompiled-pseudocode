/*
 * XREFs of MiUpdatePageFileList @ 0x14016BE74
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPagefileCompare @ 0x14008614C (MiPagefileCompare.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void **__fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  void **result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v7; // edi
  unsigned __int64 v8; // rdi
  bool v9; // r8
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_QWORD *)(a1 + 64) )
    return result;
  v5 = a1 + 224;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034F6A8);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(&dword_14034F6A8, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034F6A8);
    while ( (dword_14034F6A8 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034F6A8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034F6A8, dword_14034F6A8 | 0x40000000, dword_14034F6A8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14034F6A0, v5);
    goto LABEL_9;
  }
  v8 = *(_QWORD *)(a1 + 64);
  *(_WORD *)(a1 + 164) |= 0x100u;
  v9 = 0;
  v10 = (_QWORD *)qword_14034F6A0;
  if ( !qword_14034F6A0 )
    goto LABEL_8;
  while ( (int)MiPagefileCompare(v8, (__int64)v10) < 0 )
  {
    v11 = (_QWORD *)*v10;
    if ( !*v10 )
    {
      v9 = 0;
      goto LABEL_8;
    }
LABEL_16:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[1];
  if ( v11 )
    goto LABEL_16;
  v9 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14034F6A0, (unsigned __int64)v10, v9, v5);
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034F6A8, retaddr);
  else
    dword_14034F6A8 = 0;
  result = (void **)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
