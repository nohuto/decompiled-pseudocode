/*
 * XREFs of MiCombiningInProgress @ 0x1402282C0
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406A89D0 (MiCombineIdenticalPages.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiCombineCompareThread @ 0x140227B24 (MiCombineCompareThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rcx
  bool v11; // r8
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034EF00);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(&dword_14034EF00, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034EF00);
    while ( (dword_14034EF00 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_14034EF00 & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034EF00, dword_14034EF00 | 0x40000000, dword_14034EF00);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  if ( a3 == 1 )
  {
    ++*((_DWORD *)a1 + 16);
    ++dword_14034EF04;
    CurrentThread = KeGetCurrentThread();
    memset(a2, 0, 0x50uLL);
    a2[5] = CurrentThread;
    v10 = *(_QWORD *)(v3 + 4872);
    *a2 = v10;
    a2[1] = v3 + 4872;
    if ( *(_QWORD *)(v10 + 8) != v3 + 4872 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = a2;
    v11 = 0;
    *(_QWORD *)(v3 + 4872) = a2;
    v12 = (_QWORD *)qword_14034EF08;
    if ( qword_14034EF08 )
    {
      while ( 1 )
      {
        if ( (int)MiCombineCompareThread((unsigned __int64)CurrentThread, (__int64)v12) < 0 )
        {
          v13 = (_QWORD *)*v12;
          if ( !*v12 )
          {
            v11 = 0;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)v12[1];
          if ( !v13 )
          {
            v11 = 1;
            break;
          }
        }
        v12 = v13;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14034EF08, (unsigned __int64)v12, v11, (unsigned __int64)(a2 + 2));
  }
  else
  {
    v14 = *a2;
    v15 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v15 != a2 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14034EF08, (__int64)(a2 + 2));
    --*((_DWORD *)a1 + 16);
    v17 = dword_14034EF04;
    if ( dword_14034EF04 == 1 )
    {
      ++dword_14034EBC8;
      HvlFlushTbAllPartitions(v16);
      KeFlushTb(3, 2);
      v17 = dword_14034EF04;
    }
    dword_14034EF04 = v17 - 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034EF00, retaddr);
  else
    dword_14034EF00 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
