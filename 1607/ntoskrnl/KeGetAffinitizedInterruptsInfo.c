/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1401DA468
 * Callers:
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030FF0 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x1404BBBFC (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
