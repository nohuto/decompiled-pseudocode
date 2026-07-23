/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1401DA294
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
