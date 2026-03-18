/*
 * XREFs of ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0082A60
 * Callers:
 *     NtGdiGetCertificateByHandle @ 0x1C0082230 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0082EA0 (-GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCertificate(
        COPM *this,
        void *a2,
        enum _DXGKMDT_CERTIFICATE_TYPE a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  void *v5; // rbx
  int HandleObject; // eax
  unsigned int v10; // ebx
  PRKMUTEX *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  COPMProtectedOutput *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  v5 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)v12, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v5, a2, &v13);
  v10 = 0;
  if ( HandleObject < 0 || (HandleObject = COPMProtectedOutput::GetCertificate(v13, a3, a4, a5), HandleObject < 0) )
    v10 = HandleObject;
  CAutoMutex::~CAutoMutex(v12);
  return v10;
}
