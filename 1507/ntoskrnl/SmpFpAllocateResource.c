/*
 * XREFs of SmpFpAllocateResource @ 0x140258C48
 * Callers:
 *     SmpFpWaitForResource @ 0x140258E30 (SmpFpWaitForResource.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall SmpFpAllocateResource(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 *i; // rcx
  unsigned int v6; // edi
  signed __int32 v7; // eax
  __int64 v8; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
    while ( 1 )
    {
      v7 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)a1, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  for ( i = *(__int64 **)(a1 + 8 * v2 + 32); (i[1] & 1) != 0; i = (__int64 *)*i )
    ;
  v8 = i[1];
  *((_DWORD *)i + 2) |= 1u;
  ++*(_BYTE *)(v2 + a1 + 72);
  ++*(_BYTE *)(a1 + 77);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
  else
    *(_DWORD *)a1 = 0;
  __writecr8(CurrentIrql);
  return v8;
}
