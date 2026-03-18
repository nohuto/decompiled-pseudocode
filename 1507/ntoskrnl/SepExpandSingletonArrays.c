/*
 * XREFs of SepExpandSingletonArrays @ 0x1401309EC
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  PVOID PoolWithTag; // rax
  void *v1; // rsi
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  signed __int32 v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  unsigned int *v8; // rbx
  _QWORD *v9; // rcx
  void *v10; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x600uLL, 0x74446553u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x600uLL);
  v2 = (volatile signed __int32 *)SepSingletonGlobal;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
    while ( 1 )
    {
      v5 = *v2;
      if ( (*v2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v2, v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(*((_DWORD *)SepSingletonGlobal + 1) + 1), 0x74446553u);
  v7 = v6;
  if ( !v6 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SepSingletonGlobal, retaddr);
    else
      *(_DWORD *)SepSingletonGlobal = 0;
    __writecr8(CurrentIrql);
    ExFreePoolWithTag(v1, 0x74446553u);
    return 3221225495LL;
  }
  v8 = (unsigned int *)SepSingletonGlobal;
  memmove(v6, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
  v7[v8[1]] = v1;
  v9 = SepSingletonGlobal;
  ++*((_DWORD *)SepSingletonGlobal + 1);
  v10 = (void *)v9[1];
  v9[1] = v7;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
  else
    *(_DWORD *)v9 = 0;
  __writecr8(CurrentIrql);
  ExFreePoolWithTag(v10, 0x74446553u);
  return 0LL;
}
