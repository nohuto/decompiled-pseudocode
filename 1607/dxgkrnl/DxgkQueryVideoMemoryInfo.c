/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C0153870
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00CE1D0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C014478C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C0149240 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // r13
  _OWORD *v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  struct DXGPROCESS *Process; // r12
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rcx
  struct DXGADAPTER *v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // r8
  int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // r8
  _DWORD *v53; // rdx
  unsigned __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  _BYTE v59[16]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2119);
  memset((void *)(v3 + 32), 0, 0x38uLL);
  v5 = v4;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v5;
  *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5[1];
  *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v5[2];
  CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_8:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2119);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE(
    (DXGPROCESSMUTEXBYHANDLE *)(v3 + 176),
    *(void **)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    1024);
  Process = ProcessDxgProcess;
  if ( *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
  {
    v16 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), 1);
    v21 = v16;
    if ( v16 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      *(_QWORD *)(v22 + 32) = v21;
      WdLogEvent5_WdWarning(v22);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), v23, v24);
      v27 = (qword_1C0056840 & 2) == 0;
      goto LABEL_15;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176));
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
    ProcessDxgProcess,
    (struct DXGADAPTER **)(v3 + 24));
  v29 = *(struct DXGADAPTER **)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v29 )
  {
    v30 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v30 + 24) = ProcessDxgProcess;
    *(_QWORD *)(v30 + 32) = *(unsigned int *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    WdLogEvent5_WdError(v30);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL), v31);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), v32, v33);
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_8;
  }
  LODWORD(v21) = DxgkpGetPairingAdapters(
                   v29,
                   0,
                   (struct DXGADAPTER **)(v3 + 16),
                   (unsigned __int64 *)(v3 + 88),
                   0LL,
                   0LL);
  if ( (int)v21 < 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
    *(_QWORD *)(v38 + 24) = v29;
    WdLogEvent5_WdWarning(v38);
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL), v39);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), v40, v41);
    v25 = qword_1C0056840;
    v27 = (qword_1C0056840 & 2) == 0;
LABEL_15:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v25, &EventProfilerExit, v26, 2119);
    return (unsigned int)v21;
  }
  v21 = *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 96), (struct DXGADAPTER *const)v21, 0LL);
  v42 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 96));
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v21);
  if ( v42 >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 192) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      v53 = v4 + 3;
      if ( (unsigned __int64)(v4 + 3) >= MmUserProbeAddress )
        v53 = (_DWORD *)MmUserProbeAddress;
      *(_DWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *v53;
      v21 = *(_QWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    LODWORD(v21) = ADAPTER_RENDER::QueryVideoMemoryInfo(
                     *(ADAPTER_RENDER **)(v21 + 2136),
                     Process,
                     (struct _D3DKMT_QUERYVIDEOMEMORYINFO *)(v3 + 32));
    if ( (int)v21 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 96));
      goto LABEL_24;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_OWORD *)MmUserProbeAddress;
    *v4 = *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v4[1] = *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v4[2] = *(_OWORD *)(((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 96));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL), v54);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), v55, v56);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v57, &EventProfilerExit, v58, 2119);
    return 0LL;
  }
  else
  {
    v47 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = v21;
    WdLogEvent5_WdWarning(v47);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 96));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v59 & 0xFFFFFFFFFFFFFFC0uLL), v48);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 176), v49, v50);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v51, &EventProfilerExit, v52, 2119);
    return (unsigned int)v42;
  }
}
