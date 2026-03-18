/*
 * XREFs of ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C13AC
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C1760 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084AF0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C1414 (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 */

__int64 __fastcall COPM::GetCOPPCompatibleInformation(
        COPM *this,
        unsigned __int64 a2,
        PRKMUTEX *a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  int HandleObject; // eax
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v7; // rdx
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v8; // r8
  unsigned int v9; // ebx
  PRKMUTEX *v11; // [rsp+40h] [rbp+18h] BYREF
  COPMProtectedOutput *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = (COPMProtectedOutput *)a4;
  v11 = a3;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v11, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(
                   (__int64)DeviceObjectExtension,
                   a2,
                   &v12);
  v9 = 0;
  if ( HandleObject < 0
    || (HandleObject = COPMProtectedOutput::GetCOPPCompatibleInformation(v12, v7, v8), HandleObject < 0) )
  {
    v9 = HandleObject;
  }
  CAutoMutex::~CAutoMutex(&v11);
  return v9;
}
