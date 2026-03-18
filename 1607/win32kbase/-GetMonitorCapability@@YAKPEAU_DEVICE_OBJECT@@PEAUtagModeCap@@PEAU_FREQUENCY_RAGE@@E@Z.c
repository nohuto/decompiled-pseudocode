/*
 * XREFs of ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C005E3B8
 * Callers:
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C005E9D8 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     ?CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C00C57E4 (-CalculateDefaultPreferredModeFromEdid@@YAHPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C005E478 (-GetMonitorCapability1@@YAKPEAEPEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     GetRegEDID @ 0x1C005EEE0 (GetRegEDID.c)
 *     ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C005EFA0 (-GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?GetMonitorCapability2@@YAKPEAU_EDID2@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00C76CC (-GetMonitorCapability2@@YAKPEAU_EDID2@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 */

unsigned int __fastcall GetMonitorCapability(
        struct _DEVICE_OBJECT *a1,
        struct tagModeCap *a2,
        struct _FREQUENCY_RAGE *a3,
        unsigned __int8 a4)
{
  unsigned int result; // eax
  struct _EDID2 *v9; // [rsp+20h] [rbp-248h] BYREF
  _BYTE v10[512]; // [rsp+30h] [rbp-238h] BYREF

  v9 = 0LL;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 4) = 0;
  *((_DWORD *)a3 + 1) = -1;
  *((_DWORD *)a3 + 3) = -1;
  *(_DWORD *)a3 = a4 == 0 ? 0x38 : 0;
  *((_DWORD *)a3 + 5) = -1;
  result = GetMonitorCapabilityFromInf(a1, a2, a4);
  if ( result )
  {
    *(_DWORD *)a3 = *((_DWORD *)a2 + 3);
    *((_DWORD *)a3 + 1) = *((_DWORD *)a2 + 2);
  }
  else if ( (unsigned int)GetRegEDID(a1, v10, &v9) )
  {
    if ( *(_BYTE *)v9 == 32 )
      return GetMonitorCapability2(v9, a2, a3, a4);
    else
      return GetMonitorCapability1((unsigned __int8 *)v9, a2, a3, a4);
  }
  else
  {
    return 0;
  }
  return result;
}
