/*
 * XREFs of CiSchedulerDeepSleep @ 0x1C00012D0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001480 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610 (CiSchedulerCompleteTimerResolutionTransition.c)
 *     CiLogSchedulerSleep @ 0x1C00037A4 (CiLogSchedulerSleep.c)
 *     WPP_SF_ @ 0x1C0003D20 (WPP_SF_.c)
 */

__int64 __fastcall CiSchedulerDeepSleep(__int32 *a1)
{
  __int32 v2; // eax
  __int64 result; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_66507f198a44bcd69eddbed6c0ad95fb_Traceguids);
  if ( byte_1C0007298 )
    CiLogSchedulerSleep(5LL);
  v2 = _InterlockedExchange(&CiSchedulerWakeupReason, 0x8000);
  *a1 = v2;
  if ( !v2 )
    KeWaitForSingleObject(KeGetCurrentThread(), Executive, 0, 1u, 0LL);
  CiSchedulerProcessDeadlines(&v4);
  result = CiSchedulerCompleteTimerResolutionTransition();
  *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0);
  return result;
}
