/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0067CB0
 * Callers:
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0067730 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0067FE4 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00681F0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::SetSigningKeyAndSequenceNumbers(
        COPM *this,
        void *a2,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a3)
{
  void *v3; // rbx
  int HandleObject; // eax
  unsigned int v7; // ebx
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF
  PRKMUTEX *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = this;
  v3 = qword_1C01003A0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v10, (struct CMutex *)((char *)qword_1C01003A0 + 24));
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v3, a2, &v9);
  v7 = 0;
  if ( HandleObject < 0
    || (HandleObject = COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(v9, a3), HandleObject < 0) )
  {
    v7 = HandleObject;
  }
  CAutoMutex::~CAutoMutex(&v10);
  return v7;
}
