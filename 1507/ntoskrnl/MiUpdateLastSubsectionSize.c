/*
 * XREFs of MiUpdateLastSubsectionSize @ 0x140077EB8
 * Callers:
 *     MmExtendSection @ 0x1404B096C (MmExtendSection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiUpdateLastSubsectionSize(__int64 a1, _QWORD *a2, unsigned int a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 v5; // rbp
  __int64 v7; // r9
  __int16 v8; // r8
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v12; // esi
  signed __int32 v13; // eax
  __int16 v14; // dx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(volatile signed __int32 **)a1;
  v5 = a3;
  if ( a3 )
  {
    v7 = *(_QWORD *)v3;
    _InterlockedExchange64(
      (volatile __int64 *)(*(_QWORD *)v3 + 24LL),
      _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v3 + 24LL), -1LL, -1LL)
    + ((unsigned __int64)a3 << 12));
    v8 = *(_WORD *)(v7 + 12);
    v9 = *(unsigned int *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v5 + v9;
    *(_WORD *)(v7 + 12) = v8 ^ (v8 ^ ((v5 + (v9 | ((unsigned __int64)(v8 & 0x3FF) << 32))) >> 32)) & 0x3FF;
  }
  v10 = v3 + 18;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v10, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v10);
    while ( 1 )
    {
      v13 = *v10;
      if ( (*v10 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v13 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v10, v13 | 0x40000000, v13);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
  }
  if ( (_DWORD)v5 )
  {
    *(_DWORD *)(a1 + 52) -= v5;
    *(_DWORD *)(a1 + 44) += v5;
  }
  v14 = *(_WORD *)(a1 + 34);
  *(_DWORD *)(a1 + 40) = (*a2 >> 12) - *(_DWORD *)(a1 + 36);
  *(_WORD *)(a1 + 34) = (16 * *(_WORD *)a2) | v14 & 0xF;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
  else
    *v10 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
