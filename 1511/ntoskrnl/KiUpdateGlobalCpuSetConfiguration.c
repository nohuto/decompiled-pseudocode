/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x140106E54
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiCheckThreadAffinity @ 0x14002A76C (KiCheckThreadAffinity.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rdi
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
    v6 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v6 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v16, a2, a3);
        while ( *(_QWORD *)(v6 + 48) );
      }
      v7 = *(_QWORD *)(v6 + 8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 1416), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v17, a2, a3);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v18, a2, a3);
        while ( *(_QWORD *)(v6 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 1416));
      if ( v7 == *(_QWORD *)(v6 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      *(_QWORD *)(v7 + 64) = 0LL;
    }
    v8 = 0;
    if ( !KiCheckThreadAffinity(v7) )
    {
      KiComputeThreadAffinity(v9);
      v10 = *(_BYTE *)(v7 + 388);
      if ( v10 == 2 || v10 == 5 )
        v8 = KiRescheduleThreadAfterAffinityChange(v7, v7 + 576, 2, v6, 0LL, a1);
    }
    *(_QWORD *)(v7 + 64) = 0LL;
    v11 = *(_QWORD *)(v6 + 16);
    if ( v11 && !KiCheckThreadAffinity(*(_QWORD *)(v6 + 16)) )
    {
      v12 = *(_QWORD *)(v6 + 8);
      if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v12, v6);
      else
        EffectivePriorityThread = *(_BYTE *)(v12 + 195);
      **(_BYTE **)(v6 + 56) = EffectivePriorityThread;
      KiSelectNextThread(v6, a1);
      *(_BYTE *)(v11 + 388) = 7;
      *(_QWORD *)(v11 + 216) = *a1;
      *a1 = v11 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
    if ( v8 )
    {
      v14 = *(unsigned int *)(v6 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v14 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(a2) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v14, a2);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
