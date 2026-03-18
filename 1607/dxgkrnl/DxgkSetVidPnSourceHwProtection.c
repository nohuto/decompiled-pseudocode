/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C0150B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER *const *v3; // rbp
  ULONG64 v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGADAPTER *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // r8
  unsigned int v46; // r9d
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct DXGADAPTER *v50; // [rsp+60h] [rbp+0h] BYREF

  v3 = (struct DXGADAPTER *const *)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2130);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 7701LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v11, 2130);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)v4;
  v13 = *(_DWORD *)(v4 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)(v3 + 3),
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    ProcessDxgProcess,
    (struct DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
  v18 = *v3;
  if ( !*v3 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = ProcessDxgProcess;
    *(_QWORD *)(v19 + 32) = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdError(v19);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 3, v20);
    goto LABEL_6;
  }
  if ( !*((_QWORD *)v18 + 266) )
  {
    v21 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = v18;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6), *v3, 0LL);
  v22 = COREADAPTERACCESS::AcquireExclusive((_QWORD *)v3 + 6);
  v27 = v22;
  if ( v22 >= 0 )
  {
    v32 = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    if ( (unsigned int)v32 >= *(_DWORD *)(*((_QWORD *)v18 + 266) + 80LL) )
    {
      v33 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v33 + 24) = v32;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v33);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
      goto LABEL_14;
    }
    v34 = PsGetCurrentProcess(v24);
    PsGetProcessDxgProcess(v34, v35);
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      *(_BYTE *)(1016 * v32 + *(_QWORD *)(*((_QWORD *)v18 + 266) + 112LL) + 1008) = v13 != 0;
      v43 = *((_QWORD *)v18 + 266);
      if ( v13 )
      {
        *(_BYTE *)(v43 + 268) = 1;
      }
      else
      {
        *(_BYTE *)(v43 + 268) = 0;
        v44 = 0;
        v45 = *((_QWORD *)v18 + 266);
        v46 = *(_DWORD *)(v45 + 80);
        if ( v46 )
        {
          while ( !*(_BYTE *)(1016LL * v44 + *(_QWORD *)(v45 + 112) + 1008) )
          {
            if ( ++v44 >= v46 )
              goto LABEL_36;
          }
          *(_BYTE *)(v45 + 268) = 1;
        }
      }
LABEL_36:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 3, v47);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v48, &EventProfilerExit, v49, 2130);
      return 0LL;
    }
    else
    {
      v40 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      *(_QWORD *)(v40 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v40);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 3, v41);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C0056840, &EventProfilerExit, v42, 2130);
      return 3221225506LL;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdError(v28);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 6));
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)v3 + 3, v29);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v30, &EventProfilerExit, v31, 2130);
    return (unsigned int)v27;
  }
}
