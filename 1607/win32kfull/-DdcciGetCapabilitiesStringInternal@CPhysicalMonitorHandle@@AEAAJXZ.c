/*
 * XREFs of ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258D5C
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C02588F8 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C0258E08 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x1C0135AAC (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C02589AC (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258BCC (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(void **this)
{
  __int64 result; // rax

  DDCCIFreeMemory(this[9]);
  this[9] = 0LL;
  *((_DWORD *)this + 20) = 0;
  result = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((PDEVICE_OBJECT *)this);
  if ( (_DWORD)result == 1612644351 )
    return CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(this);
  return result;
}
