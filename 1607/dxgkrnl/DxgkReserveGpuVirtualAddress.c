/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C00DE920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C000D934 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000DA08 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **ProcessDxgProcess; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r15d
  int v24; // ebx
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGADAPTER **)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2098);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v33 = WdLogNewEntry5_WdError(v8);
    v24 = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    v28 = qword_1C0056840;
    v30 = (qword_1C0056840 & 2) == 0;
    goto LABEL_21;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)v12;
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_OWORD *)(v12 + 16);
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(v12 + 32);
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(v12 + 48);
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_QWORD *)(v12 + 64);
  if ( *(int *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) > 1 )
  {
    v34 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v10, v11);
    v24 = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    *(_QWORD *)(v34 + 32) = 10309LL;
    WdLogEvent5_WdWarning(v34);
LABEL_30:
    v30 = (qword_1C0056840 & 2) == 0;
    goto LABEL_21;
  }
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE(
    (DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
    ProcessDxgProcess,
    v3 + 2);
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 3),
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
    (struct DXGPROCESS *)ProcessDxgProcess,
    v3 + 1);
  v16 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v16 && !*(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    v35 = WdLogNewEntry5_WdWarning(v13, 0LL, v14, v15);
    *(_QWORD *)(v35 + 24) = *(unsigned int *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    v24 = -1073741811;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 3, v36);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_30;
  }
  v17 = 0LL;
  if ( v16 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL);
    *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)(v13 + 16);
    v17 = *(_QWORD *)(v16 + 32);
  }
  v18 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !*(_QWORD *)(v18 + 2136) )
  {
    v32 = WdLogNewEntry5_WdWarning(v13, v16, v14, v15);
    v24 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = 10337LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 48),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    0LL);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 6));
  if ( v23 >= 0 )
  {
    if ( *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) > 1u )
    {
      v39 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    }
    else
    {
      if ( *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) != 1 || v17 )
      {
        *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v18 + 2136);
        v24 = _guard_dispatch_icall_fptr();
        if ( v24 >= 0 )
        {
          v25 = (_QWORD *)(a1 + 56);
          if ( a1 + 56 >= MmUserProbeAddress )
            v25 = (_QWORD *)MmUserProbeAddress;
          *v25 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
          v26 = (_QWORD *)(a1 + 64);
          if ( a1 + 64 >= MmUserProbeAddress )
            v26 = (_QWORD *)MmUserProbeAddress;
          *v26 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
        }
        goto LABEL_19;
      }
      v39 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v39 + 32) = 10358LL;
    }
    v24 = -1073741811;
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
LABEL_20:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 3, v27);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
    v30 = (qword_1C0056840 & 2) == 0;
LABEL_21:
    if ( !v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v28, &EventProfilerExit, v29, 2098);
    return (unsigned int)v24;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 3, v37);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v38, 2098);
  return (unsigned int)v23;
}
