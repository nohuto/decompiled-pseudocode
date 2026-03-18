/*
 * XREFs of UsbDevice_SetDeviceDisabled @ 0x1C002E75C
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0003CD0 (DeviceSlot_DisableAllDeviceSlots.c)
 *     UsbDevice_DisableCompletion @ 0x1C002CFB0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C002E490 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C002EA60 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1C0008A90 (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     DeviceSlot_ClearDeviceContext @ 0x1C001CE08 (DeviceSlot_ClearDeviceContext.c)
 *     Endpoint_Disable_Internal @ 0x1C001D68C (Endpoint_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C0036A00 (ESM_AddEvent.c)
 */

char __fastcall UsbDevice_SetDeviceDisabled(__int64 a1)
{
  int v2; // edx
  __int64 *v3; // rdi
  _QWORD *v4; // r15
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  __int64 **v8; // rdi
  __int64 v9; // r14
  __int64 *v10; // rbp
  __int64 v11; // rdx
  char result; // al

  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    4u,
    0xBu,
    0x36u,
    (__int64)&WPP_b259b106ca84381176d433aab66af5b0_Traceguids,
    *(unsigned __int8 *)(a1 + 135),
    *(_QWORD *)a1);
  LOBYTE(v2) = 1;
  v3 = *(__int64 **)(a1 + 176);
  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 104LL);
  Endpoint_Disable_Internal(v3, v2, v5);
  ESM_AddEvent(v3 + 34);
  v8 = (__int64 **)(a1 + 184);
  v9 = 30LL;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      LOBYTE(v6) = 1;
      Endpoint_Disable_Internal(*v8, v6, v7);
      ESM_AddEvent(v10 + 34);
      *v8 = 0LL;
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  DeviceSlot_ClearDeviceContext(v4, a1, *(unsigned __int8 *)(a1 + 135));
  v11 = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_WORD *)(a1 + 134) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  result = *(_BYTE *)(a1 + 448);
  if ( v11 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             v11,
             result != 0 ? 0 : 0xC0000001);
  return result;
}
