/*
 * XREFs of WPP_SF_dd @ 0x1C0003FAC
 * Callers:
 *     CiSystemAdjustTimerResolution @ 0x1C0001DA0 (CiSystemAdjustTimerResolution.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A190 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchFastIoDeviceControl @ 0x1C000A540 (CiDispatchFastIoDeviceControl.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A860 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
