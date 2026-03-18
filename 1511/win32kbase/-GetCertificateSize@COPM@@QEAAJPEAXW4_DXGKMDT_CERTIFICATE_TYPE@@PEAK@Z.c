/*
 * XREFs of ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C0082AE8
 * Callers:
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0082180 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0082230 (NtGdiGetCertificateByHandle.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C0082F24 (-GetCertificateSize@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetCertificateSize(COPM *this, void *a2, enum _DXGKMDT_CERTIFICATE_TYPE a3, unsigned int *a4)
{
  void *v4; // rbx
  int HandleObject; // eax
  unsigned int v9; // ebx
  PRKMUTEX *v11[3]; // [rsp+20h] [rbp-18h] BYREF
  COPMProtectedOutput *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v4 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)v11, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v4, a2, &v12);
  v9 = 0;
  if ( HandleObject < 0 || (HandleObject = COPMProtectedOutput::GetCertificateSize(v12, a3, a4), HandleObject < 0) )
    v9 = HandleObject;
  CAutoMutex::~CAutoMutex(v11);
  return v9;
}
