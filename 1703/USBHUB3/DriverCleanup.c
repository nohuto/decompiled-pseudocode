/*
 * XREFs of DriverCleanup @ 0x1C0001AA0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventUnregister @ 0x1C00011E4 (McGenEventUnregister.c)
 *     UsbSleepStudy_Uninitialize @ 0x1C0036214 (UsbSleepStudy_Uninitialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     WppCleanupKm @ 0x1C006541C (WppCleanupKm.c)
 */

ULONG __fastcall DriverCleanup(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  ULONG result; // eax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B110);
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, *(_QWORD *)(v2 + 64));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v3);
  if ( *(_BYTE *)(v2 + 92) )
    UsbSleepStudy_Uninitialize();
  result = McGenEventUnregister(&Microsoft_Windows_USB_USBHUB3Handle);
  g_Usbhub3DriverObject = 0LL;
  return result;
}
