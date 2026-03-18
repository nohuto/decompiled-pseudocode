/*
 * XREFs of IsFrameReportingPointerDevice @ 0x1C01CC010
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C5118 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ArbitratePrimaryStatus @ 0x1C01C7398 (ArbitratePrimaryStatus.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFrameReportingPointerDevice(__int64 a1)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  v2 = 0;
  if ( (unsigned int)(v1 - 3) <= 2 || v1 == 8 )
    return 1;
  return v2;
}
