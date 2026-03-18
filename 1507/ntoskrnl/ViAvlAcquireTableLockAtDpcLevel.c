/*
 * XREFs of ViAvlAcquireTableLockAtDpcLevel @ 0x140025A3C
 * Callers:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ViAvlAcquireTableLockAtDpcLevel(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // edi
  __int64 result; // rax
  _DWORD *v7; // rdx
  signed __int32 v8; // ett

  if ( (*(_BYTE *)(a2 + 9) & 4) != 0 )
  {
    v4 = (volatile signed __int32 *)(a1 + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 128);
    }
    else
    {
      v5 = 0;
      if ( _interlockedbittestandset(v4, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 128);
      while ( 1 )
      {
        result = *(unsigned int *)v4;
        if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (result & 0x40000000) == 0 )
          _InterlockedCompareExchange(v4, result | 0x40000000, result);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
  }
  else
  {
    v7 = (_DWORD *)(a1 + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 128);
    }
    else
    {
      _m_prefetchw(v7);
      v8 = *v7 & 0x7FFFFFFF;
      result = (unsigned int)_InterlockedCompareExchange(v7, v8 + 1, v8);
      if ( v8 != (_DWORD)result )
        result = ExpWaitForSpinLockSharedAndAcquire(v7);
    }
  }
  *(_BYTE *)(a2 + 9) |= 2u;
  *(_QWORD *)a2 = a1;
  return result;
}
