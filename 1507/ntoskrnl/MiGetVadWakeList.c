/*
 * XREFs of MiGetVadWakeList @ 0x14008CFD0
 * Callers:
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiFreeRotateView @ 0x1406A2FC0 (MiFreeRotateView.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiGetVadWakeList(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  __int64 **v3; // rsi
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // r14d
  signed __int32 v8; // edx
  __int64 *v9; // rcx
  char v10; // al
  char v11; // al
  __int64 *v13; // rdx
  __int16 *VmPartition; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r10
  unsigned int v17; // esi
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0LL;
  v3 = (__int64 **)(a1 + 56);
  v5 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
    while ( 1 )
    {
      v8 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v8 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v8 | 0x40000000, v8);
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
  }
  v9 = *v3;
  if ( *v3 )
  {
    do
    {
      v13 = (__int64 *)*v9;
      if ( ((_DWORD)v9[1] & a2) != 0 )
      {
        *v9 = (__int64)v2;
        v2 = v9;
        *v3 = v13;
      }
      else
      {
        v3 = (__int64 **)v9;
      }
      v9 = v13;
    }
    while ( v13 );
  }
  v10 = *((_BYTE *)v5 + 219);
  if ( (v10 & 0x10) != 0 )
  {
    *((_BYTE *)v5 + 219) = v10 & 0xEF;
    VmPartition = MiGetVmPartition((__int64)v5);
    MiAgeWorkingSet(v5, CurrentIrql, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  v11 = *((_BYTE *)v5 + 219);
  if ( (v11 & 0x20) != 0 )
  {
    v15 = *((_QWORD *)v5 + 17);
    v16 = *((_QWORD *)v5 + 15);
    v17 = 7;
    for ( *((_BYTE *)v5 + 219) = v11 & 0xDF; v16 > v15; --v17 )
    {
      v18 = v16 - v15;
      if ( v17 )
      {
        v19 = v18;
        v18 = *(_QWORD *)&v5[2 * v17 + 8];
        if ( v18 > v19 )
          v18 = v19;
      }
      if ( v18 )
      {
        MiTrimWorkingSet(v18, (__int64)v5, CurrentIrql, v17, 0);
        if ( !v17 )
          break;
      }
      v16 = *((_QWORD *)v5 + 15);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  __writecr8(CurrentIrql);
  return v2;
}
