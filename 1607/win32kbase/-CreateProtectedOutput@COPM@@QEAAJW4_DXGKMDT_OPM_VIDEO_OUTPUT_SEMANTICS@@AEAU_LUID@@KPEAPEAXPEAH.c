/*
 * XREFs of ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C008457C
 * Callers:
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C0084168 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0 (-OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00849C8 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C0084B54 (-AddHandleToTable@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPM::CreateProtectedOutput(
        COPM *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        void **a5,
        int *a6)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int *v10; // r14
  unsigned int v11; // ebx
  int v12; // edi
  COPMProtectedOutput *v13; // rax
  COPMProtectedOutput *v14; // rax
  COPMProtectedOutput *v15; // rsi
  void *v17; // [rsp+30h] [rbp-38h] BYREF
  PRKMUTEX *v18; // [rsp+38h] [rbp-30h] BYREF
  COPM *v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = this;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v18, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  v10 = a6;
  v11 = 0;
  v17 = 0LL;
  v12 = 0;
  LODWORD(v19) = 0;
  *a6 = 0;
  v13 = (COPMProtectedOutput *)OPMAllocateMemory(0x58uLL, PagedPool);
  if ( v13 )
  {
    v14 = COPMProtectedOutput::COPMProtectedOutput(v13, a2, a3, a4, (int *)&v19);
    v12 = (int)v19;
    v15 = v14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v12 = -1073741801;
LABEL_12:
    v11 = v12;
    goto LABEL_7;
  }
  if ( v12 < 0
    || (v12 = CMonitorHandleTable<COPMProtectedOutput,void *>::AddHandleToTable(DeviceObjectExtension, v15, &v17),
        v12 < 0) )
  {
    (**(void (__fastcall ***)(COPMProtectedOutput *, __int64))v15)(v15, 1LL);
    if ( v12 == -1073741198 )
    {
      *v10 = 1;
      v12 = 0;
    }
    goto LABEL_12;
  }
  *a5 = v17;
LABEL_7:
  CAutoMutex::~CAutoMutex(&v18);
  return v11;
}
