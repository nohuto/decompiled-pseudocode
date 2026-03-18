/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14013328C
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140133514 (KiRescheduleThreadAfterAffinityChange.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // esi
  int v11; // r8d
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // r9
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rax

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v5 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v5 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      v6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
        while ( *(_QWORD *)(v5 + 48) );
      }
      v7 = *(_QWORD *)(v5 + 8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 1416), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( *(_QWORD *)(v7 + 64) );
      }
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v9);
        }
        while ( *(_QWORD *)(v5 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 1416));
      if ( v7 == *(_QWORD *)(v5 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      *(_QWORD *)(v7 + 64) = 0LL;
    }
    v10 = 0;
    if ( *(_QWORD *)(v7 + 568) != KiCpuSetSequence && (*(_DWORD *)(v7 + 116) & 8) == 0 )
    {
      KiComputeThreadAffinity(v7);
      v12 = *(_BYTE *)(v7 + 388);
      if ( v12 == 2 || v12 == 5 )
      {
        LOBYTE(v11) = 2;
        v10 = KiRescheduleThreadAfterAffinityChange(v7, (int)v7 + 576, v11, v5, 0LL, (__int64)a1);
      }
    }
    *(_QWORD *)(v7 + 64) = 0LL;
    v13 = *(_QWORD *)(v5 + 16);
    if ( v13 && *(_QWORD *)(v13 + 568) != KiCpuSetSequence && (*(_DWORD *)(v13 + 116) & 8) == 0 )
    {
      v14 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
      {
        if ( *(char *)(v14 + 195) >= 16
          || !*(_QWORD *)(v14 + 104)
          || (v16 = *(_QWORD *)(v14 + 104)) == 0
          || (v17 = *(unsigned int *)(v5 + 1624) + v16) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(*(_QWORD *)(v5 + 8), v17, 0),
              v15 = 1,
              !ThreadEffectiveRankNonZero) )
        {
          v15 = *(_BYTE *)(v14 + 195);
        }
      }
      else
      {
        v15 = *(_BYTE *)(v14 + 195);
      }
      **(_BYTE **)(v5 + 56) = v15;
      KiSelectNextThread(v5, a1);
      *(_BYTE *)(v13 + 388) = 7;
      *(_QWORD *)(v13 + 216) = *a1;
      *a1 = v13 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
    if ( v10 )
    {
      v19 = *(unsigned int *)(v5 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v19 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(a2) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v19, a2);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
