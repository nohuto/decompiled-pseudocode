/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x140111400 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiCheckThreadAffinity @ 0x1400CEFD4 (KiCheckThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(__int64 *a1)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  char v10; // al
  unsigned __int64 *v11; // r8
  __int64 v12; // rcx
  char EffectivePriorityThread; // al
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v5 = *(_QWORD *)(v4 + 8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v5 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(_QWORD *)(v5 + 64) );
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 1420));
      if ( v5 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
    v6 = 0;
    if ( !KiCheckThreadAffinity(v5) )
    {
      KiComputeThreadAffinity(v8);
      v10 = *(_BYTE *)(v5 + 388);
      if ( v10 == 2 || v10 == 5 )
        v6 = KiRescheduleThreadAfterAffinityChange(v5, v5 + 576, 2, v4, 0LL, a1);
    }
    *(_QWORD *)(v5 + 64) = 0LL;
    v9 = *(_QWORD *)(v4 + 16);
    if ( v9 && !KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v12 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v12, v4);
      else
        EffectivePriorityThread = *(_BYTE *)(v12 + 195);
      **(_BYTE **)(v4 + 56) = EffectivePriorityThread;
      KiSelectNextThread(v4, a1, v11);
      *(_BYTE *)(v9 + 388) = 7;
      *(_QWORD *)(v9 + 216) = *a1;
      *a1 = v9 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    if ( v6 )
    {
      v14 = *(unsigned int *)(v4 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v14 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v7) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v14, v7);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
