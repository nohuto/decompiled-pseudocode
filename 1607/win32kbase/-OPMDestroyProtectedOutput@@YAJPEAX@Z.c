/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0084198
 * Callers:
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0083EC0 (NtGdiDestroyOPMProtectedOutput.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0083F00 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0084A8C (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084AF0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(void *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  unsigned int v3; // ebx
  int HandleObject; // edi
  int v5; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PRKMUTEX *v8; // [rsp+50h] [rbp+18h] BYREF

  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  v3 = 0;
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(DeviceObjectExtension, a1, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           DeviceObjectExtension,
           v7,
           (unsigned int)a1);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  CAutoMutex::~CAutoMutex(&v8);
  if ( HandleObject < 0 )
    return (unsigned int)HandleObject;
  return v3;
}
