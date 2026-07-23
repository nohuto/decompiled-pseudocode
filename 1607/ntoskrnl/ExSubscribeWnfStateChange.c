/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1404D1B24
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x1402054B8 (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x140545E34 (PopEsWorker.c)
 *     PopSetupAudioEventNotification @ 0x1405803D0 (PopSetupAudioEventNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1405818E4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140581918 (PopSetupUserPresencePredictionNotification.c)
 *     PiUEventInit @ 0x14079D7F0 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
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
