/*
 * XREFs of PnprWakeProcessors @ 0x14040146C
 * Callers:
 *     PnprEndMirroring @ 0x1403FFEA0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     xHalTscSynchronization @ 0x1401E48A0 (xHalTscSynchronization.c)
 *     KeResumeClockTimerSafe @ 0x1401FEA88 (KeResumeClockTimerSafe.c)
 *     KeRestoreMtrrBroadcast @ 0x1403FA0DC (KeRestoreMtrrBroadcast.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     PnprGetMillisecondCounter @ 0x1403FFF10 (PnprGetMillisecondCounter.c)
 */

NTSTATUS PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  SIZE_T v1; // rcx
  PVOID v2; // r8
  unsigned int v3; // eax
  SIZE_T v4; // rdx
  void *v5; // r8
  SIZE_T v6; // rcx
  NTSTATUS result; // eax
  void *v8; // rcx

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(PnprContext + 10736))(*(_QWORD *)(PnprContext + 10640), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 10780) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  off_140321870();
  KeResumeClockTimerSafe();
  off_140321848((PVOID)2, *(_QWORD *)(PnprContext + 10632), v2);
  v3 = PnprGetMillisecondCounter(0);
  v6 = PnprContext;
  *(_QWORD *)(PnprContext + 10752) = 10000 * (v3 - *(_QWORD *)(PnprContext + 10752));
  *(_DWORD *)(v6 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 188));
  result = PnprContext;
  v8 = (void *)*(unsigned int *)(PnprContext + 64);
  if ( ((unsigned __int8)v8 & 0x20) != 0 )
    return off_1403218A0(v8, v4, v5);
  return result;
}
