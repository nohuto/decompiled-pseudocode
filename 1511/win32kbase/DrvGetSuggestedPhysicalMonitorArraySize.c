/*
 * XREFs of DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00824C0
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00820B0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0061AA0 (UpdateMonitorDevices.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C0083804 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0083840 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 */

__int64 __fastcall DrvGetSuggestedPhysicalMonitorArraySize(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        unsigned int *Address)
{
  __int64 result; // rax
  struct tagGRAPHICS_DEVICE *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices();
  result = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v7);
  if ( (int)result >= 0 )
  {
    result = DrvGetNumberOfPhysicalMonitors(v7, &v8);
    if ( (int)result >= 0 )
    {
      ProbeForWrite(Address, 4uLL, 4u);
      *Address = v8;
      return 0LL;
    }
  }
  return result;
}
