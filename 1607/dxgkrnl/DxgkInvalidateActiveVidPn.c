/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C0164290
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0009468 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01A46EC (DmmInvalidateActiveVidPn.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(ULONG64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rcx
  DXGADAPTER *v16; // r14
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  int active; // ebx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  PVOID v26; // rsi
  size_t v27; // r12
  char *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  unsigned int v35; // [rsp+28h] [rbp-48h]
  _BYTE v36[16]; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL;
  memset((void *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 160), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 168));
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 44;
  *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2037;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v3, &EventProfilerEnter, v4, 2037);
  CurrentProcess = PsGetCurrentProcess(v3);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
    WdLogEvent5_WdError(v9);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2037);
    return 3221225485LL;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)a1;
  *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(a1 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
    ProcessDxgProcess,
    (struct DXGADAPTER **)(v1 + 32));
  v16 = *(DXGADAPTER **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v17[3] = -1073741811LL;
    v17[4] = ProcessDxgProcess;
    v17[5] = *(unsigned int *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL), v18);
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 80),
    *(struct DXGADAPTER *const *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v1 + 80));
  if ( active >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v16) > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = v16;
LABEL_22:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v1 + 80));
      goto LABEL_14;
    }
    v26 = 0LL;
    v27 = *(unsigned int *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( (_DWORD)v27 )
    {
      v28 = *(char **)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      if ( !v28 )
      {
        v29 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v29 + 24) = 5940LL;
        WdLogEvent5_WdError(v29);
        goto LABEL_22;
      }
      v26 = operator new(
              *(unsigned int *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
              0x4B677844u,
              PagedPool);
      *(_QWORD *)(((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v26;
      if ( !v26 )
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
        active = -1073741801;
        *(_QWORD *)(v34 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v34);
        goto LABEL_16;
      }
      if ( &v28[v27] < v28 || (unsigned __int64)&v28[v27] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v26, v28, v27);
    }
    active = DmmInvalidateActiveVidPn(
               v16,
               DXGK_AVIR_USERMODE,
               v26,
               v27,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v1 + 160),
               v35);
    operator delete(v26);
  }
LABEL_16:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v1 + 80));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)v36 & 0xFFFFFFFFFFFFFFC0uLL), v20);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v21, 2037);
  return (unsigned int)active;
}
