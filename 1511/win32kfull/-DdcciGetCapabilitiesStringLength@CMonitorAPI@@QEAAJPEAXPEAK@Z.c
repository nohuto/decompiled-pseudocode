/*
 * XREFs of ?DdcciGetCapabilitiesStringLength@CMonitorAPI@@QEAAJPEAXPEAK@Z @ 0x1C025B990
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesStringLength @ 0x1C025C500 (NtGdiDDCCIGetCapabilitiesStringLength.c)
 * Callees:
 *     ?DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z @ 0x1C025BA04 (-DdcciGetCapabilitiesStringLength@CPhysicalMonitorHandle@@QEAAJPEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C025C1E0 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesStringLength(CMonitorAPI *this, void *a2, unsigned int *a3)
{
  __int64 v3; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v3 = qword_1C0323B50;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)qword_1C0323B50);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v3 + 8, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesStringLength(v8, a3);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
