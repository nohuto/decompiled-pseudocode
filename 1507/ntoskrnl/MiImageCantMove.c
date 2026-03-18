/*
 * XREFs of MiImageCantMove @ 0x14023112C
 * Callers:
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiImageCantMove(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  signed __int32 v5; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
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
  *(_DWORD *)(a1 + 92) |= 0x10000000u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  else
    *v2 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
