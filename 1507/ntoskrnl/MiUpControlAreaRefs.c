/*
 * XREFs of MiUpControlAreaRefs @ 0x1400013E8
 * Callers:
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReferenceSubsection @ 0x14008595C (MiReferenceSubsection.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiLockNestedVad @ 0x140533E1C (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x14053BDD0 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiUpControlAreaRefs(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rbx
  int v5; // r14d
  volatile signed __int32 *v6; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // ebx
  signed __int32 v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v2 = **(_QWORD **)(a1 + 72);
  if ( ((((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) - 4) & 0xFFFFFFFD) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 92));
  }
  v3 = *(_DWORD *)(v2 + 56);
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
  v14 = 0LL;
  if ( (v3 & 0x20) == 0 && *(_QWORD *)(v2 + 64) && (v3 & 0x400) == 0 )
  {
    v11 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad();
    MiGetProtoPteAddress(a1, v11, 1LL, &v14);
    v4 = v14;
    if ( v14 )
      v5 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  v6 = (volatile signed __int32 *)(v2 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 72);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(v2 + 72);
    while ( 1 )
    {
      v9 = *v6;
      if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    v4 = v14;
  }
  ++*(_QWORD *)(v2 + 40);
  ++*(_QWORD *)(v2 + 48);
  if ( v4 )
  {
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
      3LL,
      &v15);
    v12 = v15;
    if ( v4 != v15 )
    {
      do
      {
        MiReferenceSubsection(v4, 17LL);
        v4 = *(_QWORD *)(v4 + 16);
      }
      while ( v4 != v12 );
      v14 = v4;
    }
    if ( v12 )
      MiReferenceSubsection(v12, 17LL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v5 == 1 )
    return MiUnlockNestedVad(a1);
  return result;
}
