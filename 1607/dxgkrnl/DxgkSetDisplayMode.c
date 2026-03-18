/*
 * XREFs of DxgkSetDisplayMode @ 0x1C0071D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001588 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00015FC (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001624 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00068C8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0006A38 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0006B3C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00114CC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00871E0 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00884F8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00959B4 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0095A80 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpiPollDisplayChildren @ 0x1C0193460 (DpiPollDisplayChildren.c)
 *     DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01A3488 (DmmCacheInvalidDisplayModeChangeRequest.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r12
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  ULONG64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rbx
  unsigned __int8 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // r12
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // r8d
  int v50; // r9d
  _QWORD *v51; // rax
  __int64 v52; // rcx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rcx
  _QWORD *v56; // rax
  int v57; // r8d
  int v58; // r9d
  unsigned __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // r12d
  _QWORD *v62; // rax
  int v63; // r8d
  int v64; // r9d
  int v65; // eax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // r8
  __int64 v71; // rax
  int v72; // eax
  _DWORD *v73; // rdx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rbx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  void *v80; // rbx
  __int64 v81; // rax
  struct DXGALLOCATION *v82; // [rsp+80h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 144) = a3;
  *(_QWORD *)(v3 + 136) = a2;
  *(_QWORD *)(v3 + 128) = a1;
  memset((void *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 272), 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 280));
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = 49;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerEnter, v6, 2018);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v8);
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v11);
LABEL_6:
    v14 = qword_1C0056840;
    v15 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2018);
    return (unsigned int)v12;
  }
  v17 = a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)v17;
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_QWORD *)(v17 + 16);
  *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_DWORD *)(v17 + 24);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 120));
  v19 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  if ( !v19 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    LODWORD(v12) = -1073741811;
    v20[3] = -1073741811LL;
    v20[4] = PsGetCurrentProcess();
    v20[5] = *(unsigned int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    WdLogEvent5_WdError(v20);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32),
    *(struct DXGDEVICE **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78));
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48), (struct DXGPROCESS *)ProcessDxgProcess);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)(v3 + 48), 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16),
    ProcessDxgProcess,
    v21);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 16));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 160, v19, 1, v22, 0);
  LODWORD(v12) = COREDEVICEACCESS::AcquireExclusive(v3 + 160);
  if ( (int)v12 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    goto LABEL_6;
  }
  v24 = *(_QWORD *)(v19 + 2856);
  if ( !v24 )
  {
    v25 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v25 + 24) = v19;
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
    goto LABEL_15;
  }
  ++*(_DWORD *)(*(_QWORD *)(v24 + 2128) + 240LL);
  v26 = *(unsigned int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
  DXGPROCESS::GetAllocationSafe(
    (__int64)ProcessDxgProcess,
    (DXGALLOCATIONREFERENCE *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54));
  v28 = *(_QWORD *)v3;
  if ( !*(_QWORD *)v3 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    LODWORD(v12) = -1073741811;
    v29[3] = -1073741811LL;
    v29[4] = v19;
    v29[5] = v26;
    WdLogEvent5_WdError(v29);
    DmmCacheInvalidDisplayModeChangeRequest(v24, -1, v30, v31, -1071775468);
LABEL_22:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  v32 = *(_QWORD *)(v19 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL) + 16LL) != *(_QWORD *)(v32 + 16) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v33[3] = v19;
    v33[4] = *(_QWORD *)v3;
    LODWORD(v12) = -1073741811;
    v33[5] = -1073741811LL;
    WdLogEvent5_WdError(v33);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v34,
      v35,
      -1071775467);
    goto LABEL_22;
  }
  v36 = *(_QWORD *)(v28 + 48);
  if ( (*(_DWORD *)(v36 + 4) & 1) == 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
    LODWORD(v12) = -1073741811;
    v37[3] = -1073741811LL;
    v37[4] = v19;
    v37[5] = v26;
    v37[6] = *(_QWORD *)v3;
    v37[7] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v37);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v38,
      v39,
      -1071775482);
    goto LABEL_22;
  }
  if ( v24 != *(_QWORD *)(v19 + 2856) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v40 + 24) = 5632LL;
    WdLogEvent5_WdAssertion(v40);
    v28 = *(_QWORD *)v3;
  }
  v41 = *(int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  v42 = (unsigned int)(v41 - 1);
  if ( (unsigned int)v42 > 2 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    LODWORD(v12) = -1073741811;
    v43[3] = -1073741811LL;
    v43[4] = v19;
    v43[5] = v41;
    WdLogEvent5_WdError(v43);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v44,
      v45,
      -1071774894);
    goto LABEL_22;
  }
  v46 = *(int *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
  v47 = (unsigned int)(v46 - 1);
  if ( (unsigned int)v47 > 3 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    LODWORD(v12) = -1073741811;
    v48[3] = -1073741811LL;
    v48[4] = v19;
    v48[5] = v46;
    WdLogEvent5_WdError(v48);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v49,
      v50,
      -1071774907);
    goto LABEL_22;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v24 + 2128),
          (const struct DXGDEVICE *)v19,
          (*(_DWORD *)(*(_QWORD *)(v28 + 48) + 4LL) >> 6) & 0xF) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v12 = -1071775744LL;
LABEL_35:
    v51[3] = v12;
    v51[4] = v19;
    v51[5] = v26;
    v51[6] = *(_QWORD *)v3;
    v52 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
LABEL_36:
    v51[7] = v52;
    WdLogEvent5_WdDmmEvent(v51);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v53,
      v54,
      v12);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16));
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48));
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v14 = qword_1C0056840;
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(DXGADAPTER ***)(v24 + 2128),
                        (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF) == 2
     || *(_DWORD *)(v19 + 304) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v24 + 2128),
         (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
         0) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v12 = -1071774910LL;
    goto LABEL_35;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(DXGADAPTER ***)(v24 + 2128),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF) )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    LODWORD(v12) = -1071774972;
    v51[3] = -1071774972LL;
    v51[4] = v19;
    v51[5] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
    v51[6] = v26;
    v52 = *(_QWORD *)v3;
    goto LABEL_36;
  }
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v19 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v55);
    LODWORD(v12) = -1073741811;
    v56[3] = -1073741811LL;
    v56[4] = v19;
    v56[5] = v26;
    v56[6] = *(_QWORD *)v3;
    v56[7] = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
    WdLogEvent5_WdError(v56);
    DmmCacheInvalidDisplayModeChangeRequest(
      v24,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      v57,
      v58,
      -1071775467);
    v59 = 2055LL;
LABEL_45:
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      v59,
      (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
      *(_QWORD *)(*(_QWORD *)v3 + 8LL),
      v19);
    goto LABEL_22;
  }
  v60 = *(_QWORD *)(*(_QWORD *)v3 + 48LL);
  if ( *(_DWORD *)(v19 + 304) == 1 )
  {
    v61 = (*(_DWORD *)(v60 + 4) >> 6) & 0xF;
    if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v24 + 2128), v61, 0) != *(struct DXGADAPTERALLOCATION **)(*(_QWORD *)v3 + 48LL)
      && !(unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(
                          (DXGDEVICE *)v19,
                          v61,
                          *(struct DXGALLOCATION **)v3) )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      LODWORD(v12) = -1073741811;
      v62[3] = -1073741811LL;
      v62[4] = v19;
      v62[5] = v26;
      v62[6] = *(_QWORD *)v3;
      v62[7] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdDmmEvent(v62);
      DmmCacheInvalidDisplayModeChangeRequest(
        v24,
        (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
        v63,
        v64,
        -1071774928);
      v59 = 2056LL;
      goto LABEL_45;
    }
    v65 = DXGDEVICE::PinPrimaryAllocations((DXGDEVICE *)v19, v61);
    v12 = v65;
    if ( v65 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v66[3] = v12;
      v66[4] = v19;
      v66[5] = v26;
      v66[6] = *(_QWORD *)v3;
      v66[7] = v61;
      WdLogEvent5_WdDmmEvent(v66);
    }
    LODWORD(v46) = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
LABEL_58:
    v71 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v71 + 24) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v71 + 32) = v24;
    WdLogEvent5_WdDmmEvent(v71);
    if ( (int)v12 >= 0 )
    {
      v72 = DXGDEVICE::SetDisplayMode(
              (DXGDEVICE *)v19,
              *(const struct DXGALLOCATION **)v3,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)*(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                     + 0x58),
              (enum _D3DDDI_ROTATION)v46,
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64),
              (unsigned int *)(v3 + 72),
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)(v3 + 272));
      LODWORD(v12) = v72;
      if ( v72 == -1071774891 )
      {
        v73 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) + 16LL);
        if ( (unsigned __int64)v73 >= MmUserProbeAddress )
          v73 = (_DWORD *)MmUserProbeAddress;
        *v73 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      }
      else if ( v72 >= 0 )
      {
        v74 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(ADAPTER_DISPLAY **)(v24 + 2128),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF);
        v76 = v74;
        if ( v74 < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v75);
          v77[3] = v24;
          v77[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
          v77[5] = v76;
          WdLogEvent5_WdError(v77);
        }
        *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 7;
        *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 0LL;
        if ( (int)DxgkStatusChangeNotify(v3 + 256) < 0 )
        {
          v79 = WdLogNewEntry5_WdAssertion(v78);
          *(_QWORD *)(v79 + 24) = 5829LL;
          WdLogEvent5_WdAssertion(v79);
        }
        **(_QWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = *(_QWORD *)(v24 + 268);
        **(_DWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL)
                                                                                            + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v12 == -1071774920 )
    {
      v80 = *(void **)(v24 + 192);
      ObfReferenceObject(v80);
      v81 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v81 + 24) = v80;
      WdLogEvent5_WdDmmEvent(v81);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 160));
      DpiPollDisplayChildren(v80, 16LL, v3 + 272);
      ObfDereferenceObject(v80);
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v60 + 4) & 0x10) == 0 )
    goto LABEL_58;
  v67 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
  v67[3] = -1071775482LL;
  v67[4] = v19;
  v67[5] = v26;
  v67[6] = *(_QWORD *)v3;
  v67[7] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v67);
  DmmCacheInvalidDisplayModeChangeRequest(
    v24,
    (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 48LL) + 4LL) >> 6) & 0xF,
    v68,
    v69,
    -1071775482);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL));
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 16));
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)(v3 + 48));
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v70, 2018);
  return 3223191814LL;
}
