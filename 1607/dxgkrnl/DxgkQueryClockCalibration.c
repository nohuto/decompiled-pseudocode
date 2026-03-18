/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C014FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001F484 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // r15
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  ULONG64 v13; // rax
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int PairingAdapters; // r14d
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  bool v27; // zf
  DXGADAPTER *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  ADAPTER_RENDER *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rsi
  _QWORD *v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct DXGADAPTER *v54; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2125);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 6875LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2125);
    return 3221225485LL;
  }
  v13 = v4;
  if ( v4 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)v13;
  *(_OWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v13 + 16);
  *(_DWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_DWORD *)(v13 + 32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
    ProcessDxgProcess,
    (struct DXGADAPTER **)((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL));
  v15 = *(struct DXGADAPTER **)v3;
  if ( !*(_QWORD *)v3 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = ProcessDxgProcess;
    *(_QWORD *)(v16 + 32) = *(unsigned int *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    WdLogEvent5_WdError(v16);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v17);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      v15,
                      0,
                      (struct DXGADAPTER **)((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL),
                      (unsigned __int64 *)(v3 + 24),
                      0LL,
                      0LL);
  if ( PairingAdapters < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v15;
    WdLogEvent5_WdWarning(v23);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v24);
    v26 = qword_1C0056840;
    v27 = (qword_1C0056840 & 2) == 0;
    goto LABEL_16;
  }
  v28 = *(DXGADAPTER **)v3;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32), *(struct DXGADAPTER *const *)v3, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 32));
  DXGADAPTER::ReleaseReference(v28);
  if ( PairingAdapters < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v33 + 24) = v28;
    WdLogEvent5_WdWarning(v33);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v34);
    v27 = (qword_1C0056840 & 2) == 0;
LABEL_16:
    if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v26, &EventProfilerExit, v25, 2125);
    return (unsigned int)PairingAdapters;
  }
  v35 = (ADAPTER_RENDER *)*((_QWORD *)v28 + 267);
  v36 = *((_QWORD *)v35 + 2);
  if ( *(_QWORD *)(v36 + 784) && *(int *)(v36 + 1792) >= 0x2000 )
  {
    v37 = ADAPTER_RENDER::DdiCalibrateGpuClock(
            v35,
            *(_DWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74),
            *(unsigned int *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
            (struct _DXGK_GPUCLOCKDATA *)(v3 + 124));
    v42 = v37;
    if ( v37 >= 0 )
    {
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      *(_DWORD *)(v4 + 32) = *(_DWORD *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v47);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v48, &EventProfilerExit, v49, 2125);
      return 0LL;
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      v43[3] = v42;
      v43[4] = *(unsigned int *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74);
      v43[5] = *(unsigned int *)(((unsigned __int64)&v54 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      WdLogEvent5_WdWarning(v43);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v44);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v45, &EventProfilerExit, v46, 2125);
      return (unsigned int)v42;
    }
  }
  else
  {
    v50 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v50 + 24) = 6937LL;
    WdLogEvent5_WdError(v50);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 32));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)(v3 + 8), v51);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v52, &EventProfilerExit, v53, 2125);
    return 3221225473LL;
  }
}
