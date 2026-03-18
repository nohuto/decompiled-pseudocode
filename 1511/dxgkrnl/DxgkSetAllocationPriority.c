/*
 * XREFs of DxgkSetAllocationPriority @ 0x1C0134B70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C01333A4 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

__int64 __fastcall DxgkSetAllocationPriority(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rcx
  DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  char v26; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2007);
    return v8;
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
  v14 = *(DXGDEVICE **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v8 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v14, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v22 = v17;
  if ( v17 >= 0 )
  {
    v8 = DXGDEVICE::SetAllocationPriority(v14, (struct _D3DKMT_SETALLOCATIONPRIORITY *)(v3 + 24), v20, v21);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    if ( *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v23 + 24) = v14;
  *(_QWORD *)(v23 + 32) = v22;
  WdLogEvent5_WdWarning(v23);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  if ( *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 2007);
  return (unsigned int)v22;
}
