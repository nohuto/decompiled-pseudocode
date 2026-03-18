/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C00DECA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  int v17; // r15d
  unsigned int v18; // esi
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  _BYTE v26[16]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2099);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v22 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v14 = qword_1C0056840;
    v16 = (qword_1C0056840 & 2) == 0;
    goto LABEL_14;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(v4 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
    ProcessDxgProcess,
    (struct DXGADAPTER **)(v3 + 16));
  v13 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v13 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    v23[3] = -1073741811LL;
    v23[4] = ProcessDxgProcess;
    v23[5] = *(unsigned int *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    WdLogEvent5_WdWarning(v23);
    goto LABEL_7;
  }
  if ( !*(_QWORD *)(v13 + 2136) )
  {
LABEL_7:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL), v9);
    v16 = (qword_1C0056840 & 2) == 0;
LABEL_14:
    if ( !v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v15, 2099);
    return 3221225485LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
    *(struct DXGADAPTER *const *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    0LL);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 32));
  if ( v17 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL), v24);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v25, 2099);
    return (unsigned int)v17;
  }
  else
  {
    v18 = _guard_dispatch_icall_fptr();
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL), v19);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v20, 2099);
    return v18;
  }
}
