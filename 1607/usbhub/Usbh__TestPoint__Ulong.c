/*
 * XREFs of Usbh__TestPoint__Ulong @ 0x1C00059E0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004B170 (UsbHubhInitTimeoutTimer.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh__TestPoint__Ulong(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    return a3;
  v6 = FdoExt(a1);
  if ( !*(_QWORD *)(v6 + 4432) )
    return a3;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(v6 + 4432))(*(_QWORD *)(v6 + 4232), 0LL, a2, &v8);
  if ( !(_DWORD)result )
    return a3;
  return result;
}
