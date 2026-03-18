/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C0258E08
 * Callers:
 *     ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C0258D94 (-DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C0258D5C (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(struct CMutex **this, unsigned int *a2)
{
  int CapabilitiesStringInternal; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v6, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    CapabilitiesStringInternal = -1071774323;
  }
  else
  {
    CapabilitiesStringInternal = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringInternal((void **)this);
    if ( CapabilitiesStringInternal >= 0 )
      *a2 = *((_DWORD *)this + 20);
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v6);
  return (unsigned int)CapabilitiesStringInternal;
}
