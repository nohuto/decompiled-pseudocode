/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00851E0
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0083F00 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C0085130 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C00C933C (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(
        struct _UNICODE_STRING *a1,
        int a2,
        struct tagGRAPHICS_DEVICE **a3)
{
  wchar_t *DeviceFromName; // rax
  struct tagGRAPHICS_DEVICE *v5; // rcx
  int v6; // eax

  DeviceFromName = DrvGetDeviceFromName(a1, a2);
  v5 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
  if ( !DeviceFromName )
    return 3223193057LL;
  v6 = *((_DWORD *)DeviceFromName + 40);
  if ( (v6 & 1) == 0 )
    return 3223193058LL;
  if ( (v6 & 8) != 0 )
    return 3223193059LL;
  *a3 = v5;
  return 0LL;
}
