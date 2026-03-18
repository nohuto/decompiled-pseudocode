/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00956B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C00068E4 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C000693C (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C1E4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     Template_ppqqx @ 0x1C001F074 (Template_ppqqx.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, int a2, __int64 a3)
{
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rbx
  ULONG64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  _OWORD *v31; // rax
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // rcx
  struct DXGADAPTER *v39; // rdi
  __int64 v40; // rax
  int PairingAdapters; // eax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGADAPTER *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *v52; // rax
  DXGADAPTER *v53; // rcx
  signed __int64 v54; // rdi
  struct DXGADAPTER *v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  __int64 v64; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  DXGPRESENTHISTORYTOKENQUEUE *v70; // r14
  struct DXGGLOBAL *v71; // rax
  __int64 v72; // rax
  DXGSESSIONMGR *v73; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  _QWORD *v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  int v86; // r9d
  __int64 v87; // rax
  __int64 v88; // rax
  int **v89; // rbx
  char *v90; // rsi
  char *v91; // r12
  __int64 v92; // rcx
  __int64 v93; // rax
  unsigned int v94; // r13d
  int v95; // r14d
  unsigned int v96; // edi
  unsigned int v97; // eax
  int *v98; // rbx
  unsigned int v99; // eax
  __int64 v100; // rax
  int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rax
  unsigned int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  char v110; // al
  unsigned __int8 v111; // al
  _QWORD *v112; // rax
  __int64 v113; // rsi
  ULONG64 v114; // rcx
  char v115; // al
  __int64 v116; // rax
  __int64 v117; // rax
  ULONG64 v118; // r8
  _DWORD *v119; // rdx
  _DWORD *v120; // rdx
  _DWORD *v121; // rdx
  ULONG64 v122; // r8
  LONG v123; // edi
  __int64 v124; // rsi
  struct DXGADAPTER *v125; // r14
  char *v126; // r12
  DXGPRESENTHISTORYTOKENQUEUE *v127; // r13
  int *v128; // rbx
  int v129; // edx
  char v130; // al
  unsigned int v131; // ecx
  __int64 v132; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v133; // rbx
  __int64 v134; // rcx
  __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // rbx
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // [rsp+28h] [rbp-140h]
  __int64 v146; // [rsp+30h] [rbp-138h]
  unsigned int v147; // [rsp+40h] [rbp-128h]
  struct DXGADAPTER *v148; // [rsp+48h] [rbp-120h] BYREF
  int v149; // [rsp+50h] [rbp-118h]
  __int64 v150; // [rsp+58h] [rbp-110h] BYREF
  char v151; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v152; // [rsp+68h] [rbp-100h] BYREF
  int v153; // [rsp+70h] [rbp-F8h]
  unsigned int v154; // [rsp+74h] [rbp-F4h] BYREF
  unsigned int v155; // [rsp+78h] [rbp-F0h]
  unsigned int v156; // [rsp+7Ch] [rbp-ECh]
  int **v157; // [rsp+80h] [rbp-E8h]
  char v158[8]; // [rsp+88h] [rbp-E0h] BYREF
  DXGADAPTER *v159; // [rsp+90h] [rbp-D8h]
  char v160; // [rsp+98h] [rbp-D0h]
  DXGPRESENTHISTORYTOKENQUEUE *v161; // [rsp+A0h] [rbp-C8h]
  char *v162; // [rsp+A8h] [rbp-C0h]
  unsigned int i; // [rsp+B0h] [rbp-B8h]
  __int64 v164; // [rsp+B8h] [rbp-B0h]
  __int64 v165; // [rsp+C0h] [rbp-A8h] BYREF
  char v166; // [rsp+C8h] [rbp-A0h]
  ULONG64 v167; // [rsp+D0h] [rbp-98h]
  char v168[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v169; // [rsp+E0h] [rbp-88h]
  int v170; // [rsp+E8h] [rbp-80h]
  struct DXGADAPTER *v171[2]; // [rsp+F0h] [rbp-78h] BYREF
  unsigned int v172; // [rsp+100h] [rbp-68h]
  int v173; // [rsp+104h] [rbp-64h]
  unsigned int v174[4]; // [rsp+108h] [rbp-60h]
  void *v175[2]; // [rsp+118h] [rbp-50h]
  int Increment; // [rsp+180h] [rbp+18h]
  unsigned int v178; // [rsp+188h] [rbp+20h]

  v167 = a1;
  v149 = 2060;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2060);
  CurrentProcess = PsGetCurrentProcess();
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v143 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v143 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v143);
    goto LABEL_190;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  v164 = v11;
  if ( !v11 )
  {
LABEL_190:
    v144 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v144 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v144);
LABEL_191:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v35, &EventProfilerExit, v36, 2060);
    return 3221225485LL;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 80) + 216LL))() )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v16);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2060);
    return 3221225506LL;
  }
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v150, (struct DXGFASTMUTEX *const *)v11);
  if ( v151 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = &v150;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v24 = v150;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)(v24 + 8)) > 1 )
  {
    if ( *(struct _KTHREAD **)v24 == KeGetCurrentThread() )
    {
      if ( *(int *)(v24 + 12) <= 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v27 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v27);
      }
      ++*(_DWORD *)(v24 + 12);
      goto LABEL_28;
    }
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v24 + 56);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v25, &EventBlockThread, v26, v28);
    }
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)(v24 + 16), (LARGE_INTEGER)1LL, (PKSPIN_LOCK)(v24 + 48));
    KeWaitForSingleObject((PVOID)(v24 + 24), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)v24 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v29 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *(_DWORD *)(v24 + 12) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v30 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v30);
  }
  *(_QWORD *)v24 = KeGetCurrentThread();
  *(_DWORD *)(v24 + 12) = 1;
LABEL_28:
  v151 = 1;
  if ( a2 )
  {
    v173 = 0;
    v25 = MmUserProbeAddress;
    v31 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v31 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v174 = *v31;
    *(_OWORD *)v175 = v31[1];
    v32 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v32 = (_DWORD *)MmUserProbeAddress;
    *v32 = 0;
    v33 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v33 = (_DWORD *)MmUserProbeAddress;
    *v33 = 0;
  }
  else
  {
    *(_OWORD *)v174 = *(_OWORD *)a1;
    *(_OWORD *)v175 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !v175[0] )
  {
    v34 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
    goto LABEL_191;
  }
  v37 = v174[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v148, v174[0], (struct _KTHREAD **)v11, v171);
  v39 = v171[0];
  if ( !v171[0] )
  {
    v40 = WdLogNewEntry5_WdError(v38);
    *(_QWORD *)(v40 + 24) = v37;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v40);
LABEL_41:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v148);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
    goto LABEL_191;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v171[0], 0, &v152, 0LL);
  v43 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v44 = WdLogNewEntry5_WdError(v42);
    *(_QWORD *)(v44 + 24) = v39;
    *(_QWORD *)(v44 + 32) = v43;
    WdLogEvent5_WdError(v44);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v148);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v45, &EventProfilerExit, v46, 2060);
    return (unsigned int)v43;
  }
  v47 = v152;
  if ( !v152 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v42);
    *(_QWORD *)(v48 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v48);
  }
  COREACCESS::COREACCESS((COREACCESS *)v158, v47);
  if ( v160 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49, v51);
    v52[3] = 275LL;
    v52[4] = 4LL;
    v52[5] = v158;
    v52[6] = 0LL;
    v52[7] = 0LL;
    WdLogEvent5_WdCriticalError(v52);
  }
  v53 = v159;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v159 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v159 + 32)) )
      KeWaitForSingleObject((char *)v159 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v159);
  }
  v160 = 1;
  v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)v152 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v55 = v152;
  v56 = v54 - 1;
  if ( !v56 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v152 + 2), v152);
  if ( v56 < 0 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v53);
    *(_QWORD *)(v57 + 24) = 1158LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( !*((_QWORD *)v55 + 249) )
  {
    v58 = WdLogNewEntry5_WdAssertion(v53);
    *(_QWORD *)(v58 + 24) = 243LL;
    WdLogEvent5_WdAssertion(v58);
  }
  v153 = 0;
  v155 = 0;
  v59 = *((_QWORD *)v55 + 249);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168, (struct _KTHREAD **)(v59 + 664));
  KeEnterCriticalRegion();
  v60 = v169;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v169, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v63 = *(_DWORD *)(v60 + 16);
      if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v61, &EventBlockThread, v62, v63);
    }
    ExAcquirePushLockSharedEx(v60, 0LL);
  }
  v170 = 1;
  v64 = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(v64);
  if ( ProcessSessionId >= *(_DWORD *)(v59 + 688)
    || (v67 = 8LL * ProcessSessionId, !*(_QWORD *)(v67 + *(_QWORD *)(v59 + 696))) )
  {
LABEL_184:
    v140 = WdLogNewEntry5_WdEvent(v67, v66, v68, v69);
    *(_QWORD *)(v140 + 24) = v55;
    WdLogEvent5_WdEvent(v140);
    if ( *((_DWORD *)v55 + 40) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168);
      COREACCESS::~COREACCESS((COREACCESS *)v158);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v148);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v141, &EventProfilerExit, v142, 2060);
      return 0LL;
    }
LABEL_182:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168);
    COREACCESS::~COREACCESS((COREACCESS *)v158);
    goto LABEL_41;
  }
  _mm_lfence();
  v70 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v67 + *(_QWORD *)(v59 + 696));
  v161 = v70;
  v171[1] = v70;
  if ( !v70 )
  {
    v55 = v152;
    goto LABEL_184;
  }
  v71 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v72 = WdLogNewEntry5_WdAssertion(v67);
    *(_QWORD *)(v72 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v72);
    v71 = DXGGLOBAL::m_pGlobal;
  }
  v73 = (DXGSESSIONMGR *)*((_QWORD *)v71 + 88);
  if ( !v73
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v73, CurrentProcessSessionId),
        (v76 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v139 = WdLogNewEntry5_WdEvent(v67, v66, v68, v69);
    *(_QWORD *)(v139 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    WdLogEvent5_WdEvent(v139);
    goto LABEL_182;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v165,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16));
  if ( v166 )
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77, v79);
    v80[3] = 275LL;
    v80[4] = 4LL;
    v80[5] = &v165;
    v80[6] = 0LL;
    v80[7] = 0LL;
    WdLogEvent5_WdCriticalError(v80);
  }
  v81 = v165;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)(v81 + 8)) > 1 )
  {
    if ( *(struct _KTHREAD **)v81 == KeGetCurrentThread() )
    {
      if ( *(int *)(v81 + 12) <= 0 )
      {
        v85 = WdLogNewEntry5_WdAssertion(v83);
        *(_QWORD *)(v85 + 24) = 328LL;
        WdLogEvent5_WdAssertion(v85);
      }
      ++*(_DWORD *)(v81 + 12);
      goto LABEL_91;
    }
    if ( bTracingEnabled )
    {
      v86 = *(_DWORD *)(v81 + 56);
      if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v83, &EventBlockThread, v84, v86);
    }
    ExInterlockedAddLargeInteger((PLARGE_INTEGER)(v81 + 16), (LARGE_INTEGER)1LL, (PKSPIN_LOCK)(v81 + 48));
    KeWaitForSingleObject((PVOID)(v81 + 24), Executive, 0, 0, 0LL);
  }
  if ( *(_QWORD *)v81 )
  {
    v87 = WdLogNewEntry5_WdAssertion(v83);
    *(_QWORD *)(v87 + 24) = 354LL;
    WdLogEvent5_WdAssertion(v87);
  }
  if ( *(_DWORD *)(v81 + 12) )
  {
    v88 = WdLogNewEntry5_WdAssertion(v83);
    *(_QWORD *)(v88 + 24) = 355LL;
    WdLogEvent5_WdAssertion(v88);
  }
  *(_QWORD *)v81 = KeGetCurrentThread();
  *(_DWORD *)(v81 + 12) = 1;
LABEL_91:
  v166 = 1;
  v89 = (int **)((char *)v76 + 80);
  v157 = (int **)((char *)v76 + 80);
  v90 = (char *)v76 + 16464;
  v162 = (char *)v76 + 16464;
  v91 = (char *)v175[0];
  v178 = v174[1];
  v154 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v70,
              v82,
              &v154,
              (struct DXGSESSIONDATA *)((char *)v76 + 80),
              (struct DXGSESSIONDATA *)((char *)v76 + 16464)) < 0 )
  {
    v93 = WdLogNewEntry5_WdAssertion(v92);
    *(_QWORD *)(v93 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v93);
  }
  v147 = 0;
  v94 = 0;
  v156 = 0;
  v95 = v153;
  v96 = v155;
  v97 = v154;
  for ( i = v154; ; v97 = i )
  {
    Increment = v95;
    if ( v94 >= v97 )
      break;
    v98 = v89[v94];
    switch ( *v98 )
    {
      case 1:
        v99 = v98[14];
        if ( v99 <= 0x10 )
        {
          v101 = 16 * v99 + 60;
          goto LABEL_107;
        }
        v100 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v100 + 24) = 52LL;
        WdLogEvent5_WdAssertion(v100);
        v96 = 0;
        break;
      case 2:
        v102 = v98[205];
        if ( v102 <= 0x10 )
        {
          v101 = 16 * v102 + 824;
          goto LABEL_107;
        }
        v103 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v103 + 24) = 62LL;
        WdLogEvent5_WdAssertion(v103);
        v96 = 0;
        break;
      case 3:
        v104 = v98[10];
        if ( v104 <= 0x10 )
        {
          v101 = 16 * v104 + 44;
          goto LABEL_107;
        }
        v105 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v105 + 24) = 72LL;
        WdLogEvent5_WdAssertion(v105);
        v96 = 0;
        break;
      case 4:
      case 5:
      case 7:
        v101 = 24;
        goto LABEL_107;
      default:
        v106 = WdLogNewEntry5_WdError(v92);
        *(_QWORD *)(v106 + 24) = 89LL;
        WdLogEvent5_WdError(v106);
        v108 = WdLogNewEntry5_WdAssertion(v107);
        *(_QWORD *)(v108 + 24) = 90LL;
        WdLogEvent5_WdAssertion(v108);
        v101 = 0;
LABEL_107:
        v96 = (v101 + 7) & 0xFFFFFFF8;
        break;
    }
    v155 = v96;
    if ( !v96 )
    {
      v109 = WdLogNewEntry5_WdAssertion(v92);
      *(_QWORD *)(v109 + 24) = 321LL;
      WdLogEvent5_WdAssertion(v109);
    }
    if ( v96 > v178 )
    {
      v147 = 261;
      v89 = v157;
      break;
    }
    v98[1] = v96;
    if ( *v98 != 2 || (v110 = 1, (v98[15] & 0x40) != 0) )
      v110 = 0;
    if ( v110 )
    {
      v111 = v90[v94];
      if ( (v111 & 1) != 0 )
      {
        v98[15] |= 0x2000u;
        v98[15] ^= (v98[15] ^ ((unsigned __int8)v90[v94] << 17)) & 0x40000;
      }
      else
      {
        v98[15] ^= (v98[15] ^ (v111 << 18)) & 0x100000;
      }
      v112 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v112[3] = v98;
      v112[4] = *((_QWORD *)v98 + 2);
      v112[5] = ((unsigned int)v98[15] >> 13) & 1;
      v112[6] = *((_QWORD *)v98 + 9);
      v112[7] = *((_QWORD *)v98 + 1);
      WdLogEvent5_WdPresentTokenEvent(v112);
    }
    if ( a2 )
    {
      v113 = v96;
      v114 = (ULONG64)&v91[v96];
      if ( v114 > MmUserProbeAddress || v114 <= (unsigned __int64)v91 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v91, v98, v96);
    }
    else
    {
      v113 = v96;
      memmove(v91, v98, v96);
    }
    if ( *v98 != 2 || (v115 = 1, (v98[15] & 0x40) != 0) )
      v115 = 0;
    if ( v115 && (v162[v94] & 1) != 0 )
    {
      if ( (v98[15] & 0x2000) == 0 )
      {
        v116 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v116 + 24) = 377LL;
        WdLogEvent5_WdAssertion(v116);
      }
      if ( (unsigned int)(v98[15] << 16 >> 30) > 1 )
      {
        v117 = WdLogNewEntry5_WdAssertion(v92);
        *(_QWORD *)(v117 + 24) = 378LL;
        WdLogEvent5_WdAssertion(v117);
      }
      v92 = v98[15] ^ ((unsigned __int16)v98[15] ^ (unsigned __int16)((v98[15] & 0xC000) + 0x4000)) & 0xC000u;
      v98[15] = v92;
    }
    v91 += v113;
    v95 += v96;
    v153 = v96 + Increment;
    v178 -= v96;
    v156 = ++v94;
    v90 = v162;
    v89 = v157;
  }
  v172 = v94;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v161, 0);
  if ( a2 )
  {
    v118 = v167;
    v119 = (_DWORD *)(v167 + 24);
    if ( v167 + 24 >= MmUserProbeAddress )
      v119 = (_DWORD *)MmUserProbeAddress;
    *v119 = v94;
    if ( v94 || !v96 )
    {
      v121 = (_DWORD *)(v118 + 8);
      if ( v118 + 8 >= MmUserProbeAddress )
        v121 = (_DWORD *)MmUserProbeAddress;
      *v121 = v95;
    }
    else
    {
      v120 = (_DWORD *)(v118 + 8);
      if ( v118 + 8 >= MmUserProbeAddress )
        v120 = (_DWORD *)MmUserProbeAddress;
      *v120 = v96;
      v147 = -1073741789;
    }
  }
  else
  {
    v122 = v167;
    *(_DWORD *)(v167 + 24) = v94;
    if ( v94 || !v96 )
    {
      *(_DWORD *)(v122 + 8) = v95;
    }
    else
    {
      *(_DWORD *)(v122 + 8) = v96;
      v147 = -1073741789;
    }
  }
  v123 = v94;
  if ( v94 )
  {
    v124 = v94;
    v125 = v152;
    v126 = v162;
    v127 = v161;
    do
    {
      v128 = *v89;
      v129 = *v128;
      if ( *v128 != 2 || (v130 = 1, (v128[15] & 0x40) != 0) )
        v130 = 0;
      if ( v130
        && (*v126 & 1) != 0
        && (v131 = v128[15] ^ (v128[15] ^ ((v128[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
            v128[15] = v131,
            (v131 & 0x30000) < 0x20000) )
      {
        --v123;
      }
      else
      {
        switch ( v129 )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            v132 = *((_QWORD *)v128 + 2);
            break;
          case 2:
            v132 = *((_QWORD *)v128 + 3);
            break;
          default:
            v132 = 0LL;
            break;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v146) = v128[1];
          LODWORD(v145) = v129;
          Template_ppqqx(v132, &EventRetirePresentHistory, (unsigned int)v146, v125, v128, v145, v146, v132);
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v127 + 3, (PSLIST_ENTRY)v128 - 1);
      }
      v89 = ++v157;
      ++v126;
      --v124;
    }
    while ( v124 );
    v94 = v156;
  }
  v133 = v161;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v161, v94);
  if ( v123 )
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v133 + 8), 0, v123, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v168);
  COREACCESS::~COREACCESS((COREACCESS *)v158);
  if ( v148 )
  {
    v135 = _InterlockedDecrement64((volatile signed __int64 *)v148 + 3);
    if ( !v135 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v148 + 2), v148);
    if ( v135 < 0 )
    {
      v136 = WdLogNewEntry5_WdAssertion(v134);
      *(_QWORD *)(v136 + 24) = 1158LL;
      WdLogEvent5_WdAssertion(v136);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v150);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v137, &EventProfilerExit, v138, v149);
  return v147;
}
