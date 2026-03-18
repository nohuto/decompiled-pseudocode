/*
 * XREFs of DrvDxgkGetMonitorDeviceObject @ 0x1C0008910
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0007F84 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvDxgkGetMonitorDeviceObject()
{
  return ((__int64 (*)(void))qword_1C011B610)();
}
