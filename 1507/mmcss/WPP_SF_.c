/*
 * XREFs of WPP_SF_ @ 0x1C0003D20
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C00012D0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiCommitTimerResolution @ 0x1C0001CD0 (CiCommitTimerResolution.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A190 (CiDispatchCreateTaskIndexClient.c)
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A860 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000A9A0 (CiThreadCreate.c)
 *     CiDriverUnload @ 0x1C000BF40 (CiDriverUnload.c)
 *     CiSchedulerInitialize @ 0x1C000D1E0 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000D2E0 (CiConfigInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
