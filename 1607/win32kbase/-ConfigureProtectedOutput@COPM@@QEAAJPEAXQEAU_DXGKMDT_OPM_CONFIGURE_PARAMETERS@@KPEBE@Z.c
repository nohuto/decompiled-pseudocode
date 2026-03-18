/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C1324
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084AF0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C127C (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        int a4,
        unsigned __int8 *a5)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  int HandleObject; // eax
  unsigned int v10; // ebx
  PRKMUTEX *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  COPMProtectedOutput *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)v12, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(
                   (__int64)DeviceObjectExtension,
                   a2,
                   &v13);
  v10 = 0;
  if ( HandleObject < 0
    || (HandleObject = COPMProtectedOutput::Configure((struct CMutex **)v13, a3, a4, a5), HandleObject < 0) )
  {
    v10 = HandleObject;
  }
  CAutoMutex::~CAutoMutex(v12);
  return v10;
}
