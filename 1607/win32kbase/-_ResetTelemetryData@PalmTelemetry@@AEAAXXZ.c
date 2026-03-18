/*
 * XREFs of ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C008E070
 * Callers:
 *     rimSetupPalmTelemetry @ 0x1C0005530 (rimSetupPalmTelemetry.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C00DC620 (rimEndPointerDeviceStaleContacts.c)
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C00E150C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall PalmTelemetry::_ResetTelemetryData(PalmTelemetry *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 519) = 0;
  memset((char *)this + 2080, 0, 0x27F0uLL);
  memset((char *)this + 28, 0, 0x800uLL);
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 5) = 0;
}
