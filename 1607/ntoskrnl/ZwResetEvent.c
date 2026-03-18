/*
 * XREFs of ZwResetEvent @ 0x14015C920
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1404F57A8 (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140669CEC (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwResetEvent(HANDLE EventHandle, PLONG NumberOfWaitingThreads)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, NumberOfWaitingThreads, v2);
}
