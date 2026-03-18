/*
 * XREFs of SepSetSingletonEntry @ 0x14024FEF0
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x14024FCD0 (SeSetSecurityAttributesTokenEx.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14002D234 (SepGetSingletonEntryFromIndexNumber.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepSetSingletonEntry(unsigned int a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 SingletonEntryFromIndexNumber; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *PoolWithTag; // rax
  signed __int32 v9; // edx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0;
  SingletonEntryFromIndexNumber = SepGetSingletonEntryFromIndexNumber(a1);
  if ( !SingletonEntryFromIndexNumber )
    return v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SingletonEntryFromIndexNumber);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)SingletonEntryFromIndexNumber, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)SingletonEntryFromIndexNumber);
    while ( 1 )
    {
      v9 = *(_DWORD *)SingletonEntryFromIndexNumber;
      if ( (*(_DWORD *)SingletonEntryFromIndexNumber & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v9 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)SingletonEntryFromIndexNumber, v9 | 0x40000000, v9);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  if ( *(_QWORD *)(SingletonEntryFromIndexNumber + 16) )
    goto LABEL_17;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x74416553u);
  *(_QWORD *)(SingletonEntryFromIndexNumber + 16) = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    *(_DWORD *)(*(_QWORD *)(SingletonEntryFromIndexNumber + 16) + 24LL) = 0;
    v10 = (_QWORD *)(*(_QWORD *)(SingletonEntryFromIndexNumber + 16) + 8LL);
    v10[1] = v10;
    *v10 = v10;
    v11 = (_QWORD *)(*(_QWORD *)(SingletonEntryFromIndexNumber + 16) + 32LL);
    v11[1] = v11;
    *v11 = v11;
LABEL_17:
    v5 = AuthzBasepSetSecurityAttributesToken(*(_QWORD *)(SingletonEntryFromIndexNumber + 16), a2, a3);
    *((_DWORD *)SepSingletonGlobal + 4) |= 1u;
    goto LABEL_18;
  }
  v5 = -1073741801;
LABEL_18:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SingletonEntryFromIndexNumber, retaddr);
  else
    *(_DWORD *)SingletonEntryFromIndexNumber = 0;
  __writecr8(CurrentIrql);
  return v5;
}
