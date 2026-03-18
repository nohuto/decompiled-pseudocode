/*
 * XREFs of DxgkReclaimAllocations @ 0x1C0153D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0097EC0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  char v25; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)v4;
    *(_OWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v4 + 32);
    *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
    *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x38);
    *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
    *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x28);
    *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x30);
    *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 8));
    v16 = *(_QWORD *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v16 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 112, v16, 0, v18, 0);
      v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 112));
      v10 = v19;
      if ( v19 >= 0 )
      {
        LODWORD(v10) = DXGDEVICE::ReclaimAllocations(v16, 0LL, (struct _D3DKMT_RECLAIMALLOCATIONS2 *)(v3 + 64));
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL));
        goto LABEL_6;
      }
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = v10;
      WdLogEvent5_WdWarning(v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 8));
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v17);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v25 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  v9 = WdLogNewEntry5_WdError(v7);
  LODWORD(v10) = -1073741811;
  *(_QWORD *)(v9 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v9);
LABEL_6:
  v12 = qword_1C0056840;
  v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
  if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v11, 2071);
  return (unsigned int)v10;
}
