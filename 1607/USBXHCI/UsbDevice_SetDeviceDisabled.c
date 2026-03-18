/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C0031A44
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C00048D0 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C00303A4 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0031780 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0031D10 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008F40 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C0020B8C (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00213D0 (Endpoint_Disable.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1)
{
  _QWORD *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  char result; // al
  int v7; // r8d
  __int64 v8; // r8

  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    0xBu,
    0x36u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    *(unsigned __int8 *)(a1 + 135),
    *(_QWORD *)a1);
  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL);
  Endpoint_Disable(*(_QWORD *)(a1 + 176));
  v3 = (__int64 *)(a1 + 184);
  v4 = 30LL;
  do
  {
    if ( *v3 )
    {
      Endpoint_Disable(*v3);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  DeviceSlot_ClearDeviceContext(v2, a1, *(unsigned __int8 *)(a1 + 135));
  v5 = *(_QWORD *)(a1 + 440);
  result = -*(_BYTE *)(a1 + 448);
  v7 = -(*(_BYTE *)(a1 + 448) != 0);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  v8 = ~v7 & 0xC0000001;
  if ( v5 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v5,
             v8);
  return result;
}
