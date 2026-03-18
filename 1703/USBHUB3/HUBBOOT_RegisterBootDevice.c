/*
 * XREFs of HUBBOOT_RegisterBootDevice @ 0x1C0034370
 * Callers:
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0016620 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBBOOT_RegisterBootDevice(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, L"ExNotifyBootDeviceRemoval");
  g_ExNotifyBootDeviceRemoval = (__int64 (__fastcall *)(_QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"ExRegisterBootDevice");
  g_ExRegisterBootDevice = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  v4 = -1073741637;
  if ( g_ExRegisterBootDevice )
  {
    memset(v8, 0, 0x28uLL);
    LODWORD(v8[0]) = 1;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *))(WdfFunctions_01015 + 944))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver);
    v8[2] = 0LL;
    v8[1] = v5;
    v8[4] = a1;
    v8[3] = HUBBOOT_IsBootDeviceReady;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD *, __int64))g_ExRegisterBootDevice)(v8, a2);
  }
  return v4;
}
