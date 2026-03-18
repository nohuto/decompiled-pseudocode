/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z @ 0x1C0067DA0
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0067880 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C006812C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C00682C4 (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5)
{
  void *v5; // rbp
  unsigned int v9; // ebx
  int v10; // edi
  COPMProtectedOutput *PoolWithTag; // rax
  COPMProtectedOutput *v12; // rax
  COPMProtectedOutput *v13; // rsi
  void *v15; // [rsp+30h] [rbp-28h] BYREF
  PRKMUTEX *v16[4]; // [rsp+38h] [rbp-20h] BYREF
  COPM *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = this;
  v5 = qword_1C01003A0;
  CAutoMutex::CAutoMutex((CAutoMutex *)v16, (struct CMutex *)((char *)qword_1C01003A0 + 24));
  v9 = 0;
  v15 = 0LL;
  v10 = 0;
  LODWORD(v17) = 0;
  PoolWithTag = (COPMProtectedOutput *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v12 = COPMProtectedOutput::COPMProtectedOutput(PoolWithTag, a2, a3, a4, (int *)&v17);
    v10 = (int)v17;
    v13 = v12;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v10 = -1073741801;
LABEL_11:
    v9 = v10;
    goto LABEL_7;
  }
  if ( v10 < 0 || (v10 = CMonitorHandleTable<COPMProtectedOutput,void *>::AddHandleToTable(v5, v13, &v15), v10 < 0) )
  {
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v13)(v13, 1LL);
    goto LABEL_11;
  }
  *a5 = v15;
LABEL_7:
  CAutoMutex::~CAutoMutex(v16);
  return v9;
}
