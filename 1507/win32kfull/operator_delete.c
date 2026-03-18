/*
 * XREFs of operator_delete @ 0x1C0132128
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C01320D0 (DDCCICleanUpWrap.c)
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C025B400 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 *     ?AddElement@?$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z @ 0x1C025B44C (-AddElement@-$CList@VCPhysicalMonitorHandle@@@@QEAAJPEAVCPhysicalMonitorHandle@@PEAK@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B884 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025BAA8 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025BC38 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C025C360 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall operator_delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x63326947u);
}
