/*
 * XREFs of SepCleanSingletonEntry @ 0x1401277C4
 * Callers:
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanSingletonEntry(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // edi
  signed __int32 v5; // eax
  _DWORD *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = SepGetSingletonEntryFromIndexNumber(a1);
  v2 = result;
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(result);
    }
    else
    {
      v4 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)result, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)result);
      while ( 1 )
      {
        v5 = *(_DWORD *)v2;
        if ( (*(_DWORD *)v2 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)v2, v5 | 0x40000000, v5);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
    }
    *(_QWORD *)(v2 + 8) = 0LL;
    v6 = *(_DWORD **)(v2 + 16);
    if ( v6 )
    {
      AuthzBasepFreeSecurityAttributesList(v6);
      ExFreePoolWithTag(*(PVOID *)(v2 + 16), 0x74446553u);
      *(_QWORD *)(v2 + 16) = 0LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    else
      *(_DWORD *)v2 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
