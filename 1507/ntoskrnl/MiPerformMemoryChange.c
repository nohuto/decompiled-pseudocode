/*
 * XREFs of MiPerformMemoryChange @ 0x140212ECC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14015FB98 (MiInitializeNonPagedPoolThresholds.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v10; // rcx
  void *v11; // rdx
  void *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  ULONG_PTR v17; // rax
  unsigned int v18; // ebx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_140353DF0);
  }
  else
  {
    v18 = 0;
    if ( _interlockedbittestandset(dword_140353DF0, 0x1Fu) )
      v18 = ExpWaitForSpinLockExclusiveAndAcquire(dword_140353DF0);
    while ( (dword_140353DF0[0] & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (dword_140353DF0[0] & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_140353DF0, dword_140353DF0[0] | 0x40000000, dword_140353DF0[0]);
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
  }
  v10 = MmPhysicalMemoryBlock;
  v11 = 0LL;
  v12 = *a3;
  --*((_QWORD *)MmPhysicalMemoryBlock - 1);
  v13 = qword_140353D38;
  if ( !*(v10 - 1) )
    v11 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v12;
  --*(_QWORD *)(qword_140353D38 - 8);
  v14 = *(_QWORD *)(v13 - 8);
  v15 = *a4;
  *a3 = v11;
  v16 = 0LL;
  if ( !v14 )
    v16 = qword_140353D38;
  v17 = a1 + a2 - 1;
  *a4 = v16;
  qword_140353D38 = v15;
  if ( (a5 & 1) != 0 )
  {
    if ( v17 > BugCheckParameter3 )
      BugCheckParameter3 = a1 + a2 - 1;
    if ( (a5 & 4) == 0 )
      qword_1403551D0 += a2;
  }
  else
  {
    if ( v17 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_1403551D0 -= a2;
  }
  MiInitializeNonPagedPoolThresholds();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140353DF0, retaddr);
  else
    dword_140353DF0[0] = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
