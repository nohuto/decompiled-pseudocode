/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C00A8460
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C007D3DC (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rcx
  DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  unsigned int AllocationResidency; // edi
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  char v26; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2008);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v21 = WdLogNewEntry5_WdError(v5);
    AllocationResidency = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
  *(_OWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  v8 = *(DXGDEVICE **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v8 )
  {
    v22 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v22 + 24) = *(unsigned int *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    AllocationResidency = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
    v19 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v8, 0, v9, 0);
  v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v15 = v10;
  if ( v10 >= 0 )
  {
    AllocationResidency = DXGDEVICE::QueryAllocationResidency(
                            v8,
                            (struct _D3DKMT_QUERYALLOCATIONRESIDENCY *)(v3 + 24),
                            v13,
                            v14);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_8:
    v18 = qword_1C00467F0;
    v19 = (qword_1C00467F0 & 2) == 0;
LABEL_9:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v18, &EventProfilerExit, v17, 2008);
    return AllocationResidency;
  }
  v23 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  *(_QWORD *)(v23 + 24) = v8;
  *(_QWORD *)(v23 + 32) = v15;
  WdLogEvent5_WdWarning(v23);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 2008);
  return (unsigned int)v15;
}
