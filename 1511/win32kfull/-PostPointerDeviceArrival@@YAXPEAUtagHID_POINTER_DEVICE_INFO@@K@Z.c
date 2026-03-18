/*
 * XREFs of ?PostPointerDeviceArrival@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C7698
 * Callers:
 *     ?GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINFO@@KPEADPEAUtagHPD_CONTACT_GEOMETRY@@@Z @ 0x1C01C6CD8 (-GetMultiContactDeviceState@@YAJPEAU_HIDP_PREPARSED_DATA@@GPEAUtagPOINTEREVENTINT@@PEAUDEVICEINF.c)
 *     ExtractDeviceUsages @ 0x1C01CB53C (ExtractDeviceUsages.c)
 * Callees:
 *     PostPointerEventMessage @ 0x1C0110BB0 (PostPointerEventMessage.c)
 *     ArbitratePrimaryStatus @ 0x1C01C8F58 (ArbitratePrimaryStatus.c)
 */

void __fastcall PostPointerDeviceArrival(struct tagHID_POINTER_DEVICE_INFO *a1, unsigned int a2)
{
  if ( *((_DWORD *)a1 + 6) != 8 )
  {
    EtwTracePointerDeviceInRangeMessageStart();
    PostPointerEventMessage((__int64)a1, 0x239u, 0LL, 0);
    EtwTracePointerDeviceInRangeMessageStop();
  }
  ArbitratePrimaryStatus(a1, a2);
  AddToActiveDevices(a1);
}
