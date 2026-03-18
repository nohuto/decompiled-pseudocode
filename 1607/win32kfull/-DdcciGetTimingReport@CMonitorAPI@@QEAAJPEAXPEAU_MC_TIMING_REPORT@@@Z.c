/*
 * XREFs of ?DdcciGetTimingReport@CMonitorAPI@@QEAAJPEAXPEAU_MC_TIMING_REPORT@@@Z @ 0x1C0258E78
 * Callers:
 *     NtGdiDDCCIGetTimingReport @ 0x1C0259940 (NtGdiDDCCIGetTimingReport.c)
 * Callees:
 *     ?DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z @ 0x1C0258EEC (-DdcciGetTimingReport@CPhysicalMonitorHandle@@QEAAJPEAU_MC_TIMING_REPORT@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C02595D8 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DdcciGetTimingReport(CMonitorAPI *this, void *a2, struct _MC_TIMING_REPORT *a3)
{
  char *v3; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v3 = (char *)qword_1C0329230;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)qword_1C0329230);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v3 + 8, a2, &v8);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciGetTimingReport(v8, a3);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
