/*
 * XREFs of ExSubscribeWnfStateChange @ 0x1404EFB08
 * Callers:
 *     PopEnsureErratumSubscribed @ 0x14020568C (PopEnsureErratumSubscribed.c)
 *     PopEsWorker @ 0x1405458F4 (PopEsWorker.c)
 *     PopSetupAudioEventNotification @ 0x14057FF24 (PopSetupAudioEventNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140581438 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14058146C (PopSetupUserPresencePredictionNotification.c)
 *     PiUEventInit @ 0x14079D7F0 (PiUEventInit.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140461950 (ExpWnfSubscribeWnfStateChange.c)
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
