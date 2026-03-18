/*
 * XREFs of UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0030A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     Controller_RemoveDeviceFromControllerDeviceList @ 0x1C001EF50 (Controller_RemoveDeviceFromControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqqq @ 0x1C0033410 (WPP_RECORDER_SF_dqqq.c)
 *     Etw_DeviceDelete @ 0x1C003382C (Etw_DeviceDelete.c)
 */

__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  int v3; // r9d
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0041318);
  v4 = (__int64 *)result;
  if ( *(_QWORD *)result == a1 )
  {
    WPP_RECORDER_SF_dqqq(
      *(_QWORD *)(*(_QWORD *)(result + 8) + 64LL),
      *(_QWORD *)(result + 424),
      *(unsigned __int8 *)(result + 135),
      v3);
    v6 = v4[53];
    if ( v6 )
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v4[1] + 88), v6);
    v7 = v4[54];
    if ( v7 )
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(v4[1] + 88), v7);
    if ( v4[9] || v4[10] )
      Controller_RemoveDeviceFromControllerDeviceList(v4[1], *v4, v4 + 9);
    return Etw_DeviceDelete(v5, v4);
  }
  return result;
}
