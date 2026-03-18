/*
 * XREFs of WPP_SF_ @ 0x1C0004214
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0001E90 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A650 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000ACD0 (CiTaskIndexCreate.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000AEF0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDriverUnload @ 0x1C000BF80 (CiDriverUnload.c)
 *     CiSchedulerInitialize @ 0x1C000D1E0 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000D2E0 (CiConfigInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
