/*
 * XREFs of NtGdiDDCCISaveCurrentSettings @ 0x1C025C670
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ @ 0x1C025BE1C (-DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C025C1E0 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall NtGdiDDCCISaveCurrentSettings(void *a1)
{
  __int64 v1; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = qword_1C0323B50;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v6, (struct CMutex *)qword_1C0323B50);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v1 + 8, a1, &v5);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSaveCurrentSettings((struct CMutex **)v5);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v6);
  return (unsigned int)HandleObject;
}
