/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0005328
 * Callers:
 *     DeviceSlot_SetDeviceContext @ 0x1C0017004 (DeviceSlot_SetDeviceContext.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C002E7E0 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C002EA40 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C002EC24 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C002EEB0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C002F230 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0030230 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00304F4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C00306E0 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C00308A0 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0030CA0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0031450 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UpdateCompletion @ 0x1C00318A0 (UsbDevice_UpdateCompletion.c)
 *     Command_PrepareHardware @ 0x1C004816C (Command_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.Dpc.TargetInfoAsUlong)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
