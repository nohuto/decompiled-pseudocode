/*
 * XREFs of WPP_SF_d @ 0x1C0004164
 * Callers:
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSystemAdjustTimerResolution @ 0x1C0001DA0 (CiSystemAdjustTimerResolution.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A2A0 (CiCreateTaskIndexClientFromThread.c)
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CiSystemThrottleNdis @ 0x1C000B520 (CiSystemThrottleNdis.c)
 *     CiSystemOpenNdisDevice @ 0x1C000B620 (CiSystemOpenNdisDevice.c)
 *     CsInitialize @ 0x1C000D030 (CsInitialize.c)
 *     CiConfigInitialize @ 0x1C000D2E0 (CiConfigInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 *     CiTaskDump @ 0x1C000D8A0 (CiTaskDump.c)
 *     CiTaskAllocate @ 0x1C000D910 (CiTaskAllocate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
