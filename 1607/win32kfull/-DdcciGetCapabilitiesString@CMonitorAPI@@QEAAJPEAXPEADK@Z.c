/*
 * XREFs of ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C0258878
 * Callers:
 *     NtGdiDDCCIGetCapabilitiesString @ 0x1C02598D0 (NtGdiDDCCIGetCapabilitiesString.c)
 * Callees:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z @ 0x1C02588F8 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QEAAJPEADK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02595D8 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetCapabilitiesString(CMonitorAPI *this, void *a2, char *a3, unsigned int a4)
{
  char *v4; // rbx
  int HandleObject; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v4 = (char *)qword_1C0329230;
  CAutoMutex::CAutoMutex((CAutoMutex *)v10, (struct CMutex *)qword_1C0329230);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v4 + 8, a2, &v11);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetCapabilitiesString(v11, a3, a4);
  CAutoMutex::~CAutoMutex((CAutoMutex *)v10);
  return (unsigned int)HandleObject;
}
