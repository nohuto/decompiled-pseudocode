/*
 * XREFs of WPP_SF_ddd @ 0x1C002572C
 * Callers:
 *     StorPortPauseDevice @ 0x1C00072E0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0007560 (StorPortResumeDevice.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C000BDD8 (RaidBusEnumeratorVisitUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0012790 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeviceBusy @ 0x1C00212D0 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0021388 (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x1C00279A0 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0027CF0 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C0029A10 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C0033284 (RaidUnitRequestTimeout.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_ddd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.ActiveThreadCount)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
