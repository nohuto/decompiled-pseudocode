/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1401CA838
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
