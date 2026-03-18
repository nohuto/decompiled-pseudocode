/*
 * XREFs of PfSnNameQueryWorker @ 0x1400332A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     PfSnVolumeKeyQuery @ 0x140476D60 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // esi
  signed __int32 v5; // eax
  unsigned __int64 *Count; // rsi
  void *v7; // rsi
  unsigned __int64 v8; // rtt
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 *)&a1[72];
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2);
    }
    else
    {
      v4 = 0;
      if ( _interlockedbittestandset(v2, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(v2);
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
    Count = (unsigned __int64 *)a1[67].Count;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    else
      *v2 = 0;
    __writecr8(CurrentIrql);
    v7 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_1403535E8 + 16))(a1[44].Count, v7, &v10) >= 0 )
      PfSnVolumeKeyQuery(a1, v10, v7);
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  else
    *v2 = 0;
  __writecr8(CurrentIrql);
  _m_prefetchw(&a1[45]);
  v8 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v8 - 2, v8) )
    ExfReleaseRundownProtection(a1 + 45);
}
