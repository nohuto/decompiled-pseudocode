/*
 * XREFs of DxgkSetStablePowerState @ 0x1C0174380
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148A68 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0149344 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int PairingAdapters; // r15d
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // r15
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2124);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 2621LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2124);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v3 = *v4;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 4),
    *v3,
    ProcessDxgProcess,
    (struct DXGADAPTER **)v3 + 4);
  v15 = *(struct DXGADAPTER **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = ProcessDxgProcess;
    *(_QWORD *)(v16 + 32) = *v3;
    WdLogEvent5_WdError(v16);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 2, v17);
    goto LABEL_6;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v15, 0, (struct DXGADAPTER **)v3 + 1, (unsigned __int64 *)v3 + 5, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v26 = *(struct DXGADAPTER **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 12), v26, 0LL);
    v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 12));
    DXGADAPTER::ReleaseReference(v26);
    if ( v27 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)ProcessDxgProcess + 136, 0LL);
      *((_QWORD *)ProcessDxgProcess + 18) = KeGetCurrentThread();
      v39 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v40 = *(unsigned int *)(v39 + 200);
      v41 = *(_QWORD *)(*((_QWORD *)ProcessDxgProcess + 5) + 8 * v40);
      if ( !v41 )
      {
        v42 = WdLogNewEntry5_WdWarning(v40, v36, v37, v38);
        *(_QWORD *)(v42 + 24) = v39;
        *(_QWORD *)(v42 + 32) = ProcessDxgProcess;
        WdLogEvent5_WdWarning(v42);
        *((_QWORD *)ProcessDxgProcess + 18) = 0LL;
        ExReleasePushLockExclusiveEx((char *)ProcessDxgProcess + 136, 0LL);
        KeLeaveCriticalRegion();
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 12));
        DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 2, v43);
        v12 = (qword_1C0056840 & 2) == 0;
        goto LABEL_7;
      }
      v44 = *(_QWORD *)(v39 + 2136);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v44 + 1048, 0LL);
      *(_QWORD *)(v44 + 1056) = KeGetCurrentThread();
      if ( *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
      {
        if ( !*(_DWORD *)(v41 + 28) )
          ADAPTER_RENDER::AddStablePowerReference(*(ADAPTER_RENDER **)(v39 + 2136));
        ++*(_DWORD *)(v41 + 28);
      }
      else
      {
        v49 = *(_DWORD *)(v41 + 28);
        if ( v49 )
        {
          v51 = v49 - 1;
          *(_DWORD *)(v41 + 28) = v51;
          if ( !v51 )
            ADAPTER_RENDER::ReleaseStablePowerReference(*(ADAPTER_RENDER **)(v39 + 2136));
        }
        else
        {
          v50 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
          *(_QWORD *)(v50 + 24) = ProcessDxgProcess;
          *(_QWORD *)(v50 + 32) = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          WdLogEvent5_WdWarning(v50);
        }
      }
      *(_QWORD *)(v44 + 1056) = 0LL;
      ExReleasePushLockExclusiveEx(v44 + 1048, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)ProcessDxgProcess + 18) = 0LL;
      ExReleasePushLockExclusiveEx((char *)ProcessDxgProcess + 136, 0LL);
      KeLeaveCriticalRegion();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 12));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 2, v52);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v53, &EventProfilerExit, v54, 2124);
      return 0LL;
    }
    else
    {
      v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
      *(_QWORD *)(v32 + 24) = v26;
      WdLogEvent5_WdWarning(v32);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 12));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 2, v33);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v34, &EventProfilerExit, v35, 2124);
      return (unsigned int)v27;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v23 + 24) = v15;
    WdLogEvent5_WdWarning(v23);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 2, v24);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C0056840, &EventProfilerExit, v25, 2124);
    return (unsigned int)PairingAdapters;
  }
}
