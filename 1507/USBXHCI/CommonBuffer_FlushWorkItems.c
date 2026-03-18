/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C00013A0
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00014E0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1C001515C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0015420 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
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
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 3056))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           a1[29]);
}
