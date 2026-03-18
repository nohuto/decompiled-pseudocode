/*
 * XREFs of operator_delete @ 0x1C00EE304
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C00EE1E0 (DDCCICleanUpWrap.c)
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C025B120 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 *     ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C025B16C (-AddElement@-$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B5A4 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B7C8 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B958 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C025C080 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall operator_delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x63326947u);
}
