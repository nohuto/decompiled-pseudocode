/*
 * XREFs of PopPepLockActivityLink @ 0x1400281A4
 * Callers:
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     PopPepTryPowerDownDevice @ 0x140029034 (PopPepTryPowerDownDevice.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopPepSurprisePowerOn @ 0x14014BE7C (PopPepSurprisePowerOn.c)
 *     PopPepComponentSetResidency @ 0x14017143C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetLatency @ 0x1401715E4 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x14023B284 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14023B35C (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepLockActivityLink(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // edi
  char v8; // bp
  volatile signed __int32 *v9; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // eax
  _DWORD *v13; // rbx
  unsigned __int8 v14; // r14
  signed __int32 v15; // ett
  bool v16; // zf
  signed __int32 v17; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0;
  v8 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 168) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
    {
LABEL_3:
      v8 = 1;
      v9 = (volatile signed __int32 *)(a1 + 64);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
      }
      else
      {
        if ( _interlockedbittestandset(v9, 0x1Fu) )
          v5 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
        while ( 1 )
        {
          v11 = *v9;
          if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v11 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v9, v11 | 0x40000000, v11);
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
      }
      *a5 = CurrentIrql;
      *(_BYTE *)(a1 + 125) = 1;
      return v8;
    }
  }
  else if ( a3 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * (int)a3) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * (int)a4) == 1 )
    goto LABEL_3;
  v13 = (_DWORD *)(a1 + 64);
  v14 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    _m_prefetchw(v13);
    v15 = *v13 & 0x7FFFFFFF;
    if ( v15 != _InterlockedCompareExchange(v13, v15 + 1, v15) )
      ExpWaitForSpinLockSharedAndAcquire(a1 + 64);
  }
  v16 = *(_BYTE *)(a1 + 125) == 1;
  *a5 = v14;
  if ( v16 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 64, retaddr);
    }
    else
    {
      _InterlockedAnd(v13, 0xBFFFFFFF);
      _InterlockedDecrement(v13);
    }
    __writecr8(v14);
    goto LABEL_3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2);
  }
  else
  {
    if ( _interlockedbittestandset(a2, 0x1Fu) )
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(a2);
    while ( 1 )
    {
      v17 = *a2;
      if ( (*a2 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v17 & 0x40000000) == 0 )
        _InterlockedCompareExchange(a2, v17 | 0x40000000, v17);
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
  }
  return v8;
}
