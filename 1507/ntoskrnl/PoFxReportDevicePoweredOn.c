/*
 * XREFs of PoFxReportDevicePoweredOn @ 0x140136498
 * Callers:
 *     VerifierPoFxReportDevicePoweredOn @ 0x1407423B8 (VerifierPoFxReportDevicePoweredOn.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     PopFxCompleteDevicePowerRequired @ 0x14013027C (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerState @ 0x140136C40 (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PoFxReportDevicePoweredOn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbp
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  volatile signed __int32 *v8; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v10; // edi
  signed __int32 v11; // eax
  int v12; // edi
  __int64 result; // rax
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int i; // ebp
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *(_QWORD *)(BugCheckParameter2 + 48);
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
  {
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    v6 = *(_DWORD *)(BugCheckParameter2 + 32);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v6, v6);
    }
    while ( v7 != v6 );
    LOBYTE(a4) = v6 & 1;
    LOBYTE(a3) = 1;
    PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1LL, a3, a4);
    PopDiagTraceFxDevicePowerState(v5, 1LL);
  }
  v8 = (volatile signed __int32 *)(v5 + 88);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5 + 88);
  }
  else
  {
    v10 = 0;
    if ( _interlockedbittestandset(v8, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v5 + 88));
    while ( 1 )
    {
      v11 = *v8;
      if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v11 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v8, v11 | 0x40000000, v11);
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  v12 = _InterlockedExchange((volatile __int32 *)(v5 + 124), 0);
  if ( v12 > 0 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
    if ( v12 > v14 )
      PopFxBugCheck(0x602uLL, v5, v12, 0LL);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFE);
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v14 - v12;
    if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 296LL) & 4) != 0 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 620);
      v16 = (unsigned int)v12;
      do
      {
        for ( i = 0; i < v15; ++i )
        {
          PopFxIdleComponent(BugCheckParameter2, i, 2);
          v15 = *(_DWORD *)(BugCheckParameter2 + 620);
        }
        --v16;
      }
      while ( v16 );
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v12 )
    return PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
  return result;
}
