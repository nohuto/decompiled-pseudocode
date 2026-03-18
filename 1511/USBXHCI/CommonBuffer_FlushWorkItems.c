/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C0004610
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0004F40 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1C001E69C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C001E960 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
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
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(WdfDriverGlobals, a1[29]);
}
