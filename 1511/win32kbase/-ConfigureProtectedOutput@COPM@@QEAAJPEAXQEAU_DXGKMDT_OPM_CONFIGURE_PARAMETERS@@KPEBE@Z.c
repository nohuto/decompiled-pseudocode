/*
 * XREFs of ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C0B6C
 * Callers:
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0D70 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C0AC4 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 */

__int64 __fastcall COPM::ConfigureProtectedOutput(
        COPM *this,
        unsigned __int64 a2,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a3,
        int a4,
        unsigned __int8 *a5)
{
  void *v5; // rbx
  int HandleObject; // eax
  unsigned int v10; // ebx
  PRKMUTEX *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  COPMProtectedOutput *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  v5 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)v12, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v5, a2, &v13);
  v10 = 0;
  if ( HandleObject < 0
    || (HandleObject = COPMProtectedOutput::Configure((struct CMutex **)v13, a3, a4, a5), HandleObject < 0) )
  {
    v10 = HandleObject;
  }
  CAutoMutex::~CAutoMutex(v12);
  return v10;
}
