/*
 * XREFs of ?GetCOPPCompatibleInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C0234
 * Callers:
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0470 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00681F0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C029C (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 */

__int64 __fastcall COPM::GetCOPPCompatibleInformation(
        COPM *this,
        unsigned __int64 a2,
        PRKMUTEX *a3,
        struct _DXGKMDT_OPM_REQUESTED_INFORMATION *a4)
{
  void *v4; // rbx
  int HandleObject; // eax
  struct _DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS *v7; // rdx
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v8; // r8
  unsigned int v9; // ebx
  PRKMUTEX *v11; // [rsp+40h] [rbp+18h] BYREF
  COPMProtectedOutput *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = (COPMProtectedOutput *)a4;
  v11 = a3;
  v4 = qword_1C01003A0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v11, (struct CMutex *)((char *)qword_1C01003A0 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v4, a2, &v12);
  v9 = 0;
  if ( HandleObject < 0
    || (HandleObject = COPMProtectedOutput::GetCOPPCompatibleInformation(v12, v7, v8), HandleObject < 0) )
  {
    v9 = HandleObject;
  }
  CAutoMutex::~CAutoMutex(&v11);
  return v9;
}
