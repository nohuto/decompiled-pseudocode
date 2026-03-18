/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C0003AC0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0003EE0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1C001EAFC (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001EDC0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CommonBuffer_FlushWorkItems(_QWORD *a1)
{
  void *i; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  for ( i = a1 + 11; KeWaitForSingleObject(i, Executive, 0, 0, &Timeout) == 258; i = a1 + 11 )
    WPP_RECORDER_SF_(
      *(_QWORD *)(a1[1] + 64LL),
      4u,
      7u,
      0x2Cu,
      (__int64)&WPP_cd940d3c41c233e2944b46db56fe2ea3_Traceguids);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(WdfDriverGlobals, a1[29]);
}
