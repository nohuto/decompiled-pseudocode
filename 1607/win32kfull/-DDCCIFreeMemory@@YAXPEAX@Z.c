/*
 * XREFs of ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C010C830 (DDCCICleanUpWrap.c)
 *     ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1C0258540 (--_GCPhysicalMonitorHandle@@UEAAPEAXI@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C02589AC (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258BCC (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258D5C (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?Destroy@CPhysicalMonitorHandle@@UEAAJXZ @ 0x1C0259480 (-Destroy@CPhysicalMonitorHandle@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DDCCIFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x63326947u);
}
