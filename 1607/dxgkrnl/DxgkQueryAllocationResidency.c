/*
 * XREFs of DxgkQueryAllocationResidency @ 0x1C00DA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0098CDC (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 */

__int64 __fastcall DxgkQueryAllocationResidency(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rcx
  DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned int AllocationResidency; // edi
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2008);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v23 = WdLogNewEntry5_WdError(v7);
    AllocationResidency = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
  *(_OWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 8));
  v10 = *(DXGDEVICE **)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v10 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    AllocationResidency = -1073741811;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL));
    v21 = (qword_1C0056840 & 2) == 0;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v10, 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  v17 = v12;
  if ( v12 >= 0 )
  {
    AllocationResidency = DXGDEVICE::QueryAllocationResidency(
                            v10,
                            (struct _D3DKMT_QUERYALLOCATIONRESIDENCY *)(v3 + 24),
                            v15,
                            v16);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_8:
    v20 = qword_1C0056840;
    v21 = (qword_1C0056840 & 2) == 0;
LABEL_9:
    if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v20, &EventProfilerExit, v19, 2008);
    return AllocationResidency;
  }
  v25 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
  *(_QWORD *)(v25 + 24) = v10;
  *(_QWORD *)(v25 + 32) = v17;
  WdLogEvent5_WdWarning(v25);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v28 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 2008);
  return (unsigned int)v17;
}
