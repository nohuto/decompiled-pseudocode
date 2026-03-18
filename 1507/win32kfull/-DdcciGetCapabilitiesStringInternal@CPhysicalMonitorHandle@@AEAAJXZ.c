/*
 * XREFs of ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025BC38
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C025B7D0 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C025BCE4 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 * Callees:
 *     operator_delete @ 0x1C0132128 (operator_delete.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025B884 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C025BAA8 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal(void **this)
{
  __int64 result; // rax

  operator_delete(this[9]);
  this[9] = 0LL;
  *((_DWORD *)this + 20) = 0;
  result = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry((PDEVICE_OBJECT *)this);
  if ( (_DWORD)result == 1612644351 )
    return CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(this);
  return result;
}
