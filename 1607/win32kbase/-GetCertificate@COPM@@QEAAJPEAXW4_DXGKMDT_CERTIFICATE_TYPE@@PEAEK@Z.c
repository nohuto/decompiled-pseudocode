/*
 * XREFs of ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0084470
 * Callers:
 *     NtGdiGetCertificateByHandle @ 0x1C0083C70 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00848C8 (-GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084AF0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCertificate(
        COPM *this,
        void *a2,
        enum _DXGKMDT_CERTIFICATE_TYPE a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  int HandleObject; // eax
  unsigned int v10; // ebx
  PRKMUTEX *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  COPMProtectedOutput *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)v12, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(DeviceObjectExtension, a2, &v13);
  v10 = 0;
  if ( HandleObject < 0 || (HandleObject = COPMProtectedOutput::GetCertificate(v13, a3, a4, a5), HandleObject < 0) )
    v10 = HandleObject;
  CAutoMutex::~CAutoMutex(v12);
  return v10;
}
