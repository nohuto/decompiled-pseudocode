/*
 * XREFs of MmChangeSectionBackingFile @ 0x14012753C
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140127504 (FsRtlChangeBackingFileObject.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // edi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  volatile __int64 *v11; // rcx
  unsigned __int64 v12; // rdi
  void *v13; // rcx
  int v14; // edx
  int *v16; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
    }
    else
    {
      v7 = 0;
      if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
      while ( (dword_14034E780 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E780 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E780, dword_14034E780 | 0x40000000, dword_14034E780);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
    }
    v9 = (_QWORD *)a2[5];
    v10 = v5 ? *v9 : v9[2];
    if ( !v10 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v10 + 72)) )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      else
        dword_14034E780 = 0;
      if ( (*(_DWORD *)(v10 + 56) & 1) == 0 )
      {
        v11 = (volatile __int64 *)(v10 + 64);
        if ( a1 )
        {
          if ( (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL) == a1 )
          {
            ObFastReplaceObject(v11, (__int64)a2);
            ObfReferenceObjectWithTag(a2, 0x746C6644u);
            v13 = a1;
LABEL_19:
            ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
          }
        }
        else
        {
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v12 )
          {
            ObFastReplaceObject(v11, (__int64)a2);
            ObfReferenceObjectWithTag(a2, 0x746C6644u);
            v13 = (void *)v12;
            goto LABEL_19;
          }
        }
      }
      v14 = *(_DWORD *)(v10 + 56);
      if ( (v14 & 0x200) != 0 && (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) == 0 )
        *(_DWORD *)(v10 + 56) = v14 & 0xFFFFFDFF;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        *(_DWORD *)(v10 + 72) = 0;
        goto LABEL_25;
      }
      v16 = (int *)(v10 + 72);
LABEL_47:
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
      goto LABEL_25;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    else
      dword_14034E780 = 0;
    __writecr8(CurrentIrql);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v16 = &dword_14034E780;
    goto LABEL_47;
  }
  dword_14034E780 = 0;
LABEL_25:
  __writecr8(CurrentIrql);
  return 0LL;
}
