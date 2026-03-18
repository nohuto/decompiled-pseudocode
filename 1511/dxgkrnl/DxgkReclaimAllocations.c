/*
 * XREFs of DxgkReclaimAllocations @ 0x1C0134940
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C006F7B0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  char v23; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)v4;
    *(_OWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_OWORD *)(v4 + 16);
    *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(v4 + 32);
    *(_DWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
    *(_DWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = *(_DWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x38);
    *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
    *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x28);
    *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x30);
    *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
      Current,
      (struct DXGDEVICE **)(v3 + 8));
    v14 = *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v14 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 112, v14, 0, v16, 0);
      v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 112));
      v8 = v17;
      if ( v17 >= 0 )
      {
        LODWORD(v8) = DXGDEVICE::ReclaimAllocations(v14, 0LL, (struct _D3DKMT_RECLAIMALLOCATIONS2 *)(v3 + 64));
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
        goto LABEL_6;
      }
      v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v22 + 24) = v14;
      *(_QWORD *)(v22 + 32) = v8;
      WdLogEvent5_WdWarning(v22);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 8));
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  v7 = WdLogNewEntry5_WdError(v5);
  LODWORD(v8) = -1073741811;
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v7);
LABEL_6:
  v10 = qword_1C00467F0;
  v11 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
  if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2071);
  return (unsigned int)v8;
}
