/*
 * XREFs of DxgkChangeVideoMemoryReservation @ 0x1C01529E0
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
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0148AA0 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservation(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  void *v16; // r15
  struct DXGPROCESS *Process; // r12
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGADAPTER *v30; // r15
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  struct DXGADAPTER *v41; // rsi
  int v42; // r14d
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r8
  ADAPTER_RENDER *v47; // r9
  _DWORD *v48; // rdx
  _BYTE v49[16]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2120);
  memset((void *)(v3 + 32), 0, 0x20uLL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)v5;
  *(_QWORD *)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v5 + 16);
  CurrentProcess = PsGetCurrentProcess(MmUserProbeAddress);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_8:
    v13 = qword_1C0056840;
    v14 = (qword_1C0056840 & 2) == 0;
LABEL_9:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, 2120);
    return (unsigned int)v11;
  }
  v16 = *(void **)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160), v16, 512);
  Process = ProcessDxgProcess;
  if ( v16 )
  {
    v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160), 1);
    v11 = v18;
    if ( v18 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = v16;
      *(_QWORD *)(v23 + 32) = v11;
      WdLogEvent5_WdWarning(v23);
LABEL_16:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160), v24, v25);
      goto LABEL_8;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160));
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
    ProcessDxgProcess,
    (struct DXGADAPTER **)(v3 + 16));
  v30 = *(struct DXGADAPTER **)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v30 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    LODWORD(v11) = -1073741811;
    v31[3] = -1073741811LL;
    v31[4] = ProcessDxgProcess;
    v31[5] = *(unsigned int *)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    WdLogEvent5_WdWarning(v31);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL), v32);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160), v33, v34);
    v14 = (qword_1C0056840 & 2) == 0;
    goto LABEL_9;
  }
  LODWORD(v11) = DxgkpGetPairingAdapters(
                   v30,
                   0,
                   (struct DXGADAPTER **)(v3 + 24),
                   (unsigned __int64 *)(v3 + 64),
                   0LL,
                   0LL);
  if ( (int)v11 < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = v30;
    WdLogEvent5_WdWarning(v39);
LABEL_22:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL), v40);
    goto LABEL_16;
  }
  v41 = *(struct DXGADAPTER **)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80), v41, 0LL);
  v42 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 80));
  DXGADAPTER::ReleaseReference(v41);
  if ( v42 >= 0 )
  {
    v47 = (ADAPTER_RENDER *)*((_QWORD *)v41 + 267);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      v48 = (_DWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v48 = (_DWORD *)MmUserProbeAddress;
      *(_DWORD *)(((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *v48;
    }
    LODWORD(v11) = ADAPTER_RENDER::ChangeVideoMemoryReservation(
                     v47,
                     Process,
                     (const struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *)(v3 + 32));
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80));
    goto LABEL_22;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 80));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v49 & 0xFFFFFFFFFFFFFFC0uLL), v43);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)(v3 + 160), v44, v45);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v46, 2120);
  return (unsigned int)v42;
}
