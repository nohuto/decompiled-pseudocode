/*
 * XREFs of SmpFpReleaseResource @ 0x140258D2C
 * Callers:
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall SmpFpReleaseResource(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *i; // rcx
  unsigned int v8; // edi
  signed __int32 v9; // eax
  unsigned int v10; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    while ( 1 )
    {
      v9 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v9 | 0x40000000, v9);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  for ( i = *(_QWORD **)(a1 + 8 * v4 + 32); ; i = (_QWORD *)*i )
  {
    if ( !i )
    {
      v10 = 0;
      goto LABEL_17;
    }
    if ( (i[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
      break;
  }
  *((_DWORD *)i + 2) &= ~1u;
  v10 = 1;
  --*(_BYTE *)(v4 + a1 + 72);
  --*(_BYTE *)(a1 + 77);
LABEL_17:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
  else
    *(_DWORD *)a1 = 0;
  __writecr8(CurrentIrql);
  return v10;
}
