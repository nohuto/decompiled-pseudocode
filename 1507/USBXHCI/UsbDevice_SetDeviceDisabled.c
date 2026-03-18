/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C00304F4
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0001410 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0030230 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0005328 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C0016E60 (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable @ 0x1C00176D0 (Endpoint_Disable.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1)
{
  _QWORD *v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // cf
  char result; // al

  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    0xBu,
    0x36u,
    (__int64)&WPP_87fc70acbba44992ba40c6b485cfec47_Traceguids,
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
  v6 = *(_BYTE *)(a1 + 448) != 0;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  if ( v5 )
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             v5,
             v6 ? 0 : 0xC0000001);
  return result;
}
