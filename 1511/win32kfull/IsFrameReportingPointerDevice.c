/*
 * XREFs of IsFrameReportingPointerDevice @ 0x1C01CDBF0
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C6CD8 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ArbitratePrimaryStatus @ 0x1C01C8F58 (ArbitratePrimaryStatus.c)
 *     ExtractDeviceUsages @ 0x1C01CB53C (ExtractDeviceUsages.c)
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01D0F54 (GetPTPContactState.c)
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
