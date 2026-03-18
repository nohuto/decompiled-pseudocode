/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00CA740
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C000C130 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C000C27C (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C9FC (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_ppqqx @ 0x1C0011BFC (Template_ppqqx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0077B20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C009FA70 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGFASTMUTEX **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  ULONG64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rdi
  int PairingAdapters; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct DXGADAPTER *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGADAPTER *v30; // rcx
  signed __int64 v31; // rax
  struct DXGADAPTER *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // r15
  DXGGLOBAL *v45; // rax
  DXGSESSIONMGR *v46; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v48; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r8
  char *v58; // rcx
  unsigned int v59; // ebx
  int v60; // r13d
  unsigned int v61; // edi
  unsigned int v62; // eax
  __int64 v63; // rdx
  _DWORD *v64; // r13
  unsigned int v65; // edi
  int v66; // edi
  LONG v67; // r13d
  unsigned int v68; // edi
  char *v69; // r12
  int *v70; // r14
  int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v76; // edi
  unsigned int v77; // edi
  char *v78; // rcx
  unsigned __int8 v79; // al
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  _QWORD *v89; // rax
  __int64 v90; // rax
  int v91; // r9d
  __int64 v92; // rax
  __int64 v93; // rax
  _OWORD *v94; // rax
  _DWORD *v95; // rdx
  _DWORD *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rax
  int v105; // r9d
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  int v109; // r9d
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  void *v118; // r9
  char *v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rax
  _DWORD *v122; // rdx
  _DWORD *v123; // rdx
  _DWORD *v124; // rdx
  unsigned int v125; // ecx
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  unsigned __int64 v135; // rdx
  unsigned __int64 *v136; // [rsp+28h] [rbp-140h]
  __int64 v137; // [rsp+30h] [rbp-138h]
  unsigned int v138; // [rsp+40h] [rbp-128h]
  __int64 v139; // [rsp+48h] [rbp-120h] BYREF
  char v140; // [rsp+50h] [rbp-118h]
  struct DXGADAPTER *v141; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v142; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v143; // [rsp+64h] [rbp-104h]
  int v144; // [rsp+68h] [rbp-100h]
  void *v145; // [rsp+70h] [rbp-F8h]
  struct DXGADAPTER *v146[2]; // [rsp+78h] [rbp-F0h] BYREF
  unsigned int i; // [rsp+88h] [rbp-E0h]
  __int64 v148; // [rsp+90h] [rbp-D8h]
  char *v149; // [rsp+98h] [rbp-D0h]
  __int64 v150; // [rsp+A0h] [rbp-C8h] BYREF
  char v151; // [rsp+A8h] [rbp-C0h]
  _BYTE v152[16]; // [rsp+B0h] [rbp-B8h] BYREF
  DXGADAPTER *v153; // [rsp+C0h] [rbp-A8h]
  char v154; // [rsp+C8h] [rbp-A0h]
  char *v155; // [rsp+D0h] [rbp-98h]
  char v156[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v157; // [rsp+E0h] [rbp-88h]
  int v158; // [rsp+E8h] [rbp-80h]
  int v159; // [rsp+F0h] [rbp-78h]
  unsigned int v160; // [rsp+F4h] [rbp-74h]
  struct DXGADAPTER *v161[2]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v162[4]; // [rsp+108h] [rbp-60h]
  __int128 v163; // [rsp+118h] [rbp-50h]
  unsigned __int64 v164[8]; // [rsp+128h] [rbp-40h] BYREF
  int v166; // [rsp+180h] [rbp+18h]
  unsigned int v167; // [rsp+188h] [rbp+20h]

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2060);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = (struct DXGFASTMUTEX **)ProcessDxgProcess;
  v148 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v84 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v84 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v84);
LABEL_105:
    if ( (qword_1C0056840 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_182;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(ProcessDxgProcess + 72) + 216LL))() )
  {
    v81 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v81 + 24) = v9;
    *(_QWORD *)(v81 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v81);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v82, &EventProfilerExit, v83, 2060);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139, v9);
  if ( v140 )
  {
    v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
    v89[3] = 275LL;
    v89[4] = 4LL;
    v89[5] = &v139;
    v89[6] = 0LL;
    v89[7] = 0LL;
    WdLogEvent5_WdCriticalError(v89);
  }
  v17 = v139;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v17 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v17 + 24) <= 0 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v90 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v90);
    }
    ++*(_DWORD *)(v17 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v17 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v91 = *(_DWORD *)(v17 + 28);
        if ( v91 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v18, &EventBlockThread, v19, v91);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v17);
      ExAcquirePushLockExclusiveEx(v17 + 16, 0LL);
    }
    if ( *(_QWORD *)(v17 + 8) )
    {
      v92 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v92 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v92);
    }
    if ( *(_DWORD *)(v17 + 24) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v93 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v93);
    }
    *(_QWORD *)(v17 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v17 + 24) = 1;
  }
  v140 = 1;
  if ( a2 )
  {
    v159 = 0;
    v18 = MmUserProbeAddress;
    v94 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v94 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v162 = *v94;
    v163 = v94[1];
    v95 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v95 = (_DWORD *)MmUserProbeAddress;
    *v95 = 0;
    v96 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v96 = (_DWORD *)MmUserProbeAddress;
    *v96 = 0;
  }
  else
  {
    *(_OWORD *)v162 = *(_OWORD *)a1;
    v163 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !(_QWORD)v163 )
  {
    v97 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v97 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v97);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
    goto LABEL_105;
  }
  v20 = v162[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v146, v162[0], (struct DXGPROCESS *)v9, v161);
  v22 = v161[0];
  if ( !v161[0] )
  {
    v87 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v87 + 24) = v20;
    *(_QWORD *)(v87 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v87);
LABEL_104:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v146, v88);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
    goto LABEL_105;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v161[0], 0, &v141, v164, 0LL, 0LL);
  v25 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v98 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v98 + 24) = v22;
    *(_QWORD *)(v98 + 32) = v25;
    WdLogEvent5_WdError(v98);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v146, v99);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v100, &EventProfilerExit, v101, 2060);
    return (unsigned int)v25;
  }
  v26 = v141;
  if ( !v141 )
  {
    v102 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v102 + 24) = 226LL;
    WdLogEvent5_WdAssertion(v102);
  }
  COREACCESS::COREACCESS((COREACCESS *)v152, v26);
  if ( v154 )
  {
    v103 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27, v29);
    v103[3] = 275LL;
    v103[4] = 4LL;
    v103[5] = v152;
    v103[6] = 0LL;
    v103[7] = 0LL;
    WdLogEvent5_WdCriticalError(v103);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v153 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v153 + 2) )
      KeWaitForSingleObject((char *)v153 + 48, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v153);
  }
  v154 = 1;
  v30 = v141;
  v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v32 = v141;
  if ( v31 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v141 + 2), v141);
  if ( !*((_QWORD *)v32 + 267) )
  {
    v104 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v104 + 24) = 238LL;
    WdLogEvent5_WdAssertion(v104);
  }
  v144 = 0;
  v143 = 0;
  v33 = *((_QWORD *)v32 + 267);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156, (struct _KTHREAD **)(v33 + 592));
  KeEnterCriticalRegion();
  v34 = v157;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v157, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v105 = *(_DWORD *)(v34 + 16);
      if ( v105 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v35, &EventBlockThread, v36, v105);
    }
    ExAcquirePushLockSharedEx(v34, 0LL);
  }
  v158 = 1;
  v37 = PsGetCurrentProcess(v35);
  ProcessSessionId = PsGetProcessSessionId(v37);
  if ( ProcessSessionId >= *(_DWORD *)(v33 + 616)
    || (v43 = 8LL * ProcessSessionId, !*(_QWORD *)(v43 + *(_QWORD *)(v33 + 624))) )
  {
LABEL_175:
    v131 = WdLogNewEntry5_WdEvent(v40);
    *(_QWORD *)(v131 + 24) = v32;
    WdLogEvent5_WdEvent(v131);
    if ( *((_DWORD *)v32 + 44) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
      COREACCESS::~COREACCESS((COREACCESS *)v152);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v146, v132);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v133, &EventProfilerExit, v134, 2060);
      return 0LL;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
    COREACCESS::~COREACCESS((COREACCESS *)v152);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v146, v135);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
    if ( (qword_1C0056840 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_182:
    Template_q(v85, &EventProfilerExit, v86, 2060);
    return 3221225485LL;
  }
  _mm_lfence();
  v44 = *(_QWORD *)(v43 + *(_QWORD *)(v33 + 624));
  v161[1] = (struct DXGADAPTER *)v44;
  if ( !v44 )
  {
    v32 = v141;
    goto LABEL_175;
  }
  v45 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v106 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v106 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v106);
    v45 = DXGGLOBAL::m_pGlobal;
  }
  v46 = (DXGSESSIONMGR *)*((_QWORD *)v45 + 69);
  if ( !v46
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v40, v39, v41, v42),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           v46,
                                           CurrentProcessSessionId,
                                           v48),
        (v50 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v126 = WdLogNewEntry5_WdEvent(v40);
    *(_QWORD *)(v126 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v128, v127, v129, v130);
    WdLogEvent5_WdEvent(v126);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
    COREACCESS::~COREACCESS((COREACCESS *)v152);
    goto LABEL_104;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v150,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16));
  if ( v151 )
  {
    v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v52, v51, v53);
    v107[3] = 275LL;
    v107[4] = 4LL;
    v107[5] = &v150;
    v107[6] = 0LL;
    v107[7] = 0LL;
    WdLogEvent5_WdCriticalError(v107);
  }
  v54 = v150;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v54 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v54 + 24) <= 0 )
    {
      v108 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v108 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v108);
    }
    ++*(_DWORD *)(v54 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v54 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v109 = *(_DWORD *)(v54 + 28);
        if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v56, &EventBlockThread, v57, v109);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v54);
      ExAcquirePushLockExclusiveEx(v54 + 16, 0LL);
    }
    if ( *(_QWORD *)(v54 + 8) )
    {
      v110 = WdLogNewEntry5_WdAssertion(v56);
      *(_QWORD *)(v110 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v110);
    }
    if ( *(_DWORD *)(v54 + 24) )
    {
      v111 = WdLogNewEntry5_WdAssertion(v56);
      *(_QWORD *)(v111 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v111);
    }
    *(_QWORD *)(v54 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v54 + 24) = 1;
  }
  v151 = 1;
  v155 = (char *)v50 + 56;
  v149 = (char *)v50 + 16440;
  v145 = (void *)v163;
  v167 = v162[1];
  v142 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v44,
              (__int64)v50 + 16440,
              &v142,
              (struct DXGSESSIONDATA *)((char *)v50 + 56),
              (struct DXGSESSIONDATA *)((char *)v50 + 16440)) < 0 )
  {
    v112 = WdLogNewEntry5_WdAssertion(v58);
    *(_QWORD *)(v112 + 24) = 306LL;
    WdLogEvent5_WdAssertion(v112);
  }
  v138 = 0;
  v59 = 0;
  v60 = v144;
  v61 = v143;
  v62 = v142;
  for ( i = v142; ; v62 = i )
  {
    v166 = v60;
    if ( v59 >= v62 )
      break;
    v63 = v59;
    v64 = *(_DWORD **)&v155[8 * v59];
    switch ( *v64 )
    {
      case 1:
        v65 = v64[14];
        if ( v65 <= 0x10 )
        {
          v66 = 16 * v65 + 60;
          goto LABEL_54;
        }
        v113 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v113 + 24) = 52LL;
        WdLogEvent5_WdAssertion(v113);
        v61 = 0;
        v63 = v59;
        break;
      case 2:
        v77 = v64[205];
        if ( v77 <= 0x10 )
        {
          v66 = 16 * v77 + 824;
          goto LABEL_54;
        }
        v114 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v114 + 24) = 62LL;
        WdLogEvent5_WdAssertion(v114);
        v61 = 0;
        v63 = v59;
        break;
      case 3:
        v76 = v64[10];
        if ( v76 <= 0x10 )
        {
          v66 = 16 * v76 + 44;
          goto LABEL_54;
        }
        v115 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v115 + 24) = 72LL;
        WdLogEvent5_WdAssertion(v115);
        v61 = 0;
        v63 = v59;
        break;
      case 4:
      case 5:
      case 7:
        v66 = 24;
        goto LABEL_54;
      default:
        v116 = WdLogNewEntry5_WdAssertion(v58);
        *(_QWORD *)(v116 + 24) = 89LL;
        WdLogEvent5_WdAssertion(v116);
        v66 = 0;
        v63 = v59;
LABEL_54:
        v61 = (v66 + 7) & 0xFFFFFFF8;
        break;
    }
    v143 = v61;
    if ( !v61 )
    {
      v117 = WdLogNewEntry5_WdAssertion(v58);
      *(_QWORD *)(v117 + 24) = 316LL;
      WdLogEvent5_WdAssertion(v117);
      v63 = v59;
    }
    if ( v61 > v167 )
    {
      v138 = 261;
      v60 = v166;
      break;
    }
    v64[1] = v61;
    if ( *v64 == 2 )
    {
      v78 = v149;
      v79 = v149[v63];
      if ( (v79 & 1) != 0 )
      {
        v64[15] |= 0x2000u;
        v64[15] ^= (v64[15] ^ ((unsigned __int8)v78[v63] << 17)) & 0x40000;
      }
      else
      {
        v64[15] ^= (v64[15] ^ (v79 << 18)) & 0x100000;
      }
      v80 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v80[3] = v64;
      v80[4] = *((_QWORD *)v64 + 2);
      v80[5] = (v64[15] >> 13) & 1;
      v80[6] = *((_QWORD *)v64 + 9);
      v80[7] = *((_QWORD *)v64 + 1);
      WdLogEvent5_WdPresentTokenEvent(v80);
    }
    if ( a2 )
    {
      v118 = v145;
      v119 = (char *)v145 + v61;
      if ( (unsigned __int64)v119 > MmUserProbeAddress || v119 <= v145 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v118, v64, v61);
    }
    else
    {
      memmove(v145, v64, v61);
    }
    if ( *v64 == 2 )
    {
      v58 = v149;
      if ( (v149[v59] & 1) != 0 )
      {
        if ( (v64[15] & 0x2000) == 0 )
        {
          v120 = WdLogNewEntry5_WdAssertion(v149);
          *(_QWORD *)(v120 + 24) = 372LL;
          WdLogEvent5_WdAssertion(v120);
        }
        if ( (unsigned int)((int)(v64[15] << 16) >> 30) > 1 )
        {
          v121 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v121 + 24) = 373LL;
          WdLogEvent5_WdAssertion(v121);
        }
        v58 = (char *)(v64[15] ^ ((unsigned __int16)v64[15] ^ (unsigned __int16)((v64[15] & 0xC000) + 0x4000)) & 0xC000u);
        v64[15] = (_DWORD)v58;
      }
    }
    v145 = (char *)v145 + v61;
    v60 = v61 + v166;
    v144 = v61 + v166;
    v167 -= v61;
    ++v59;
  }
  v160 = v59;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v44, 0);
  if ( a2 )
  {
    v122 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v122 = (_DWORD *)MmUserProbeAddress;
    *v122 = v59;
    if ( v59 || !v61 )
    {
      v124 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v124 = (_DWORD *)MmUserProbeAddress;
      *v124 = v60;
    }
    else
    {
      v123 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v123 = (_DWORD *)MmUserProbeAddress;
      *v123 = v61;
      v138 = -1073741789;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v59;
    if ( v59 || !v61 )
    {
      *(_DWORD *)(a1 + 8) = v60;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v61;
      v138 = -1073741789;
    }
  }
  v67 = v59;
  v68 = 0;
  v69 = v155;
  while ( v68 < v59 )
  {
    v70 = *(int **)&v69[8 * v68];
    v71 = *v70;
    if ( *v70 == 2
      && (v149[v68] & 1) != 0
      && (v125 = v70[15] ^ (v70[15] ^ ((v70[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
          v70[15] = v125,
          (v125 & 0x30000) < 0x20000) )
    {
      --v67;
    }
    else
    {
      if ( v71 == 1 )
      {
LABEL_71:
        v72 = *((_QWORD *)v70 + 2);
      }
      else
      {
        switch ( v71 )
        {
          case 2:
            v72 = *((_QWORD *)v70 + 3);
            break;
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            goto LABEL_71;
          default:
            v72 = 0LL;
            break;
        }
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v137) = v70[1];
        LODWORD(v136) = v71;
        Template_ppqqx(v72, &EventRetirePresentHistory, (unsigned int)v137, v141, v70, v136, v137, v72);
      }
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v44 + 48), (PSLIST_ENTRY)v70 - 1);
    }
    ++v68;
  }
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory((DXGPRESENTHISTORYTOKENQUEUE *)v44, v59);
  if ( v67 )
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v44 + 64), 0, v67, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v156);
  COREACCESS::~COREACCESS((COREACCESS *)v152);
  if ( v146[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v146[0] + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v146[0] + 2), v146[0]);
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v139);
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v73, &EventProfilerExit, v74, 2060);
  return v138;
}
