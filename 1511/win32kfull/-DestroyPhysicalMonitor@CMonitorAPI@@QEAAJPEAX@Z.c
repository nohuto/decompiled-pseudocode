/*
 * XREFs of ?DestroyPhysicalMonitor@CMonitorAPI@@QEAAJPEAX@Z @ 0x1C025C140
 * Callers:
 *     DestroyPhysicalMonitor @ 0x1C025C4D0 (DestroyPhysicalMonitor.c)
 *     NtGdiDestroyPhysicalMonitor @ 0x1C025C750 (NtGdiDestroyPhysicalMonitor.c)
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMonitorHandle@@K@Z @ 0x1C025C0D0 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@AEAAJPEAVCPhysicalMo.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C025C1E0 (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall CMonitorAPI::DestroyPhysicalMonitor(CMonitorAPI *this, void *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  int HandleObject; // ebx
  int v6; // eax
  CMonitorAPI *v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = this;
  v2 = qword_1C0323B50;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v9, (struct CMutex *)qword_1C0323B50);
  v4 = v2 + 8;
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject(v2 + 8, a2, &v8);
  if ( HandleObject >= 0 )
  {
    v6 = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v4, (__int64)v8, (unsigned int)a2);
    HandleObject = 0;
    if ( v6 < 0 )
      HandleObject = v6;
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v9);
  return (unsigned int)HandleObject;
}
