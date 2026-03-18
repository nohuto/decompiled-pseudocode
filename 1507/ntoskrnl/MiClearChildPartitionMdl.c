/*
 * XREFs of MiClearChildPartitionMdl @ 0x14021CE50
 * Callers:
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiClearChildPartitionMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v11; // r11
  __int64 **v12; // r8
  int v13; // r10d
  unsigned __int64 v14; // rsi
  signed int v15; // ecx
  __int64 *v16; // rsi
  int v17; // edx
  unsigned __int64 v18; // r9
  unsigned int v19; // esi
  signed __int32 v20; // eax
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned __int64 *)(a2 + 48);
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v8 = a2 + 48 + 8 * v7;
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, a3, a4);
  v9 = (volatile signed __int32 *)(a1 + 240);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 240);
  }
  else
  {
    v19 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v19 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 240));
    while ( 1 )
    {
      v20 = *v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v20 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v20 | 0x40000000, v20);
      if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v19);
    }
  }
  *(_QWORD *)(a1 + 5328) -= v7;
  do
  {
    v11 = *v4;
    v12 = *(__int64 ***)(a1 + 48);
    while ( 2 )
    {
      v13 = 0;
      v14 = *((unsigned int *)v12 + 10);
      v15 = ((unsigned int)v14 >> 12) - 1;
      v16 = (__int64 *)&v12[(v14 >> 12) + 6];
      if ( v15 < 0 )
      {
LABEL_21:
        v21 = 0LL;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v17 = (v15 + v13) >> 1;
        v18 = (unsigned __int64)v12[v17 + 6] & 0x7FFFFFFFFFFFFFFFLL;
        if ( v11 < v18 )
        {
          if ( !v17 )
            goto LABEL_23;
          v15 = v17 - 1;
          goto LABEL_20;
        }
        if ( v11 <= v18 )
          break;
        v13 = v17 + 1;
LABEL_20:
        if ( v15 < v13 )
          goto LABEL_21;
      }
      v21 = (__int64 *)&v12[v17 + 6];
LABEL_22:
      if ( !v21 )
      {
LABEL_23:
        v12 = (__int64 **)*v12;
        continue;
      }
      break;
    }
    *v21 |= 0x8000000000000000uLL;
    ++v4;
    v22 = v21 + 1;
    if ( v4 == (unsigned __int64 *)v8 )
      break;
    do
    {
      if ( v22 == v16 )
        break;
      if ( *v4 != *v22 )
        break;
      ++v4;
      *v22++ |= 0x8000000000000000uLL;
    }
    while ( v4 != (unsigned __int64 *)v8 );
  }
  while ( v4 != (unsigned __int64 *)v8 );
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 240, retaddr);
  else
    *v9 = 0;
  __writecr8(CurrentIrql);
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
