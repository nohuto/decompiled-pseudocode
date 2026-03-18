/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x14000B188
 * Callers:
 *     PspSetProcessSchedulingGroup @ 0x14041C094 (PspSetProcessSchedulingGroup.c)
 *     PspTerminateProcess @ 0x14041C990 (PspTerminateProcess.c)
 * Callees:
 *     KiSetThreadSchedulingGroup @ 0x14000B26C (KiSetThreadSchedulingGroup.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  signed __int32 v7; // eax
  __int64 v8; // rbp
  _QWORD *i; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
    while ( 1 )
    {
      v7 = *v5;
      if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v7 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, v7 | 0x40000000, v7);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v8 = *(_QWORD *)(a1 + 608);
  if ( v8 != a2 )
  {
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      if ( *(i - 82) != a2 )
        KiSetThreadSchedulingGroup(i - 95, a2);
    }
    *(_QWORD *)(a1 + 608) = a2;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  __writecr8(CurrentIrql);
  return v8;
}
