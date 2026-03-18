/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00829E8
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0082330 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0082E28 (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetRandomNumber(COPM *this, void *a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  void *v3; // rbx
  int HandleObject; // eax
  unsigned int v7; // ebx
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF
  PRKMUTEX *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = this;
  v3 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v10, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v3, a2, &v9);
  v7 = 0;
  if ( HandleObject < 0 || (HandleObject = COPMProtectedOutput::GetRandomNumber(v9, a3), HandleObject < 0) )
    v7 = HandleObject;
  CAutoMutex::~CAutoMutex(&v10);
  return v7;
}
