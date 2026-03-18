/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1404C45E0
 * Callers:
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1405300A4 (PopSetupUserPresencePredictionNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405300D8 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupAudioEventNotification @ 0x14053010C (PopSetupAudioEventNotification.c)
 *     PiUEventInit @ 0x140756CC8 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2, a4, a5, a6, a3, 0);
  KeLeaveCriticalRegion();
  return v7;
}
