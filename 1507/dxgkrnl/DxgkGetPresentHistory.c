/*
 * XREFs of DxgkGetPresentHistory @ 0x1C00A3390
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUINDEPENDENTFLIPBITS@@@Z @ 0x1C0008C90 (-ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUIN.c)
 *     ?RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z @ 0x1C0008DF4 (-RetirePresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJI@Z.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009A64 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     Template_ppqqx @ 0x1C001F188 (Template_ppqqx.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C008DAD0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v25; // rdx
  ULONG64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  _OWORD *v36; // rax
  _DWORD *v37; // rdx
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rcx
  struct DXGADAPTER *v44; // rdi
  __int64 v45; // rax
  int PairingAdapters; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  struct DXGADAPTER *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  _QWORD *v61; // rax
  DXGADAPTER *v62; // rcx
  signed __int64 v63; // rdi
  struct DXGADAPTER *v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // r9d
  __int64 v73; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  DXGPRESENTHISTORYTOKENQUEUE *v79; // r14
  struct DXGGLOBAL *v80; // rax
  __int64 v81; // rax
  DXGSESSIONMGR *v82; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v84; // r8
  __int64 v85; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGSESSIONDATA *v87; // rdi
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  _QWORD *v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rax
  int **v104; // rbx
  char *v105; // rsi
  char *v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  unsigned int v112; // r13d
  int v113; // r14d
  unsigned int v114; // edi
  unsigned int v115; // eax
  unsigned __int64 v116; // rdx
  int *v117; // rbx
  unsigned int v118; // eax
  __int64 v119; // rax
  int v120; // eax
  unsigned int v121; // eax
  __int64 v122; // rax
  unsigned int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // rax
  __int64 v131; // rax
  char v132; // al
  unsigned __int8 v133; // al
  _QWORD *v134; // rax
  __int64 v135; // rsi
  ULONG64 v136; // rcx
  __int64 v137; // rdx
  char v138; // al
  __int64 v139; // rax
  __int64 v140; // rax
  ULONG64 v141; // r8
  _DWORD *v142; // rdx
  _DWORD *v143; // rdx
  _DWORD *v144; // rdx
  ULONG64 v145; // r8
  LONG v146; // edi
  __int64 v147; // rsi
  struct DXGADAPTER *v148; // r14
  char *v149; // r12
  DXGPRESENTHISTORYTOKENQUEUE *v150; // r13
  int *v151; // rbx
  int v152; // edx
  char v153; // al
  unsigned int v154; // ecx
  __int64 v155; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v156; // rbx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // rbx
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rax
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // [rsp+28h] [rbp-140h]
  __int64 v176; // [rsp+30h] [rbp-138h]
  unsigned int v177; // [rsp+40h] [rbp-128h]
  struct DXGADAPTER *v178; // [rsp+48h] [rbp-120h] BYREF
  int v179; // [rsp+50h] [rbp-118h]
  __int64 v180; // [rsp+58h] [rbp-110h] BYREF
  char v181; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v182; // [rsp+68h] [rbp-100h] BYREF
  int v183; // [rsp+70h] [rbp-F8h]
  unsigned int v184; // [rsp+74h] [rbp-F4h] BYREF
  unsigned int v185; // [rsp+78h] [rbp-F0h]
  unsigned int v186; // [rsp+7Ch] [rbp-ECh]
  int **v187; // [rsp+80h] [rbp-E8h]
  char v188[8]; // [rsp+88h] [rbp-E0h] BYREF
  DXGADAPTER *v189; // [rsp+90h] [rbp-D8h]
  char v190; // [rsp+98h] [rbp-D0h]
  char *v191; // [rsp+A0h] [rbp-C8h]
  DXGPRESENTHISTORYTOKENQUEUE *v192; // [rsp+A8h] [rbp-C0h]
  unsigned int i; // [rsp+B0h] [rbp-B8h]
  ULONG64 v194; // [rsp+B8h] [rbp-B0h]
  __int64 v195; // [rsp+C0h] [rbp-A8h]
  __int64 v196; // [rsp+C8h] [rbp-A0h] BYREF
  char v197; // [rsp+D0h] [rbp-98h]
  char v198[8]; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v199; // [rsp+E0h] [rbp-88h]
  int v200; // [rsp+E8h] [rbp-80h]
  struct DXGADAPTER *v201[2]; // [rsp+F0h] [rbp-78h] BYREF
  unsigned int v202; // [rsp+100h] [rbp-68h]
  int v203; // [rsp+104h] [rbp-64h]
  unsigned int v204[4]; // [rsp+108h] [rbp-60h]
  void *v205[2]; // [rsp+118h] [rbp-50h]
  int v207; // [rsp+180h] [rbp+18h]
  unsigned int v208; // [rsp+188h] [rbp+20h]

  v194 = a1;
  v179 = 2060;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2060);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( !ProcessWin32Process )
  {
    v173 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v173 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v173);
    goto LABEL_190;
  }
  v11 = *(_QWORD *)(ProcessWin32Process + 248);
  v195 = v11;
  if ( !v11 )
  {
LABEL_190:
    v174 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v174 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v174);
LABEL_191:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v40, &EventProfilerExit, v41, 2060);
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
  DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180, (struct DXGFASTMUTEX *const *)v11);
  if ( v181 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20, v22);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = &v180;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v24 = v180;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v24 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v24 + 24) <= 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v29);
    }
    ++*(_DWORD *)(v24 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v24 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = *(_DWORD *)(v24 + 28);
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v26, &EventBlockThread, v31, v33);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v24);
      ExAcquirePushLockExclusiveEx(v24 + 16, 0LL);
    }
    if ( *(_QWORD *)(v24 + 8) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v26, v30, v31, v32);
      *(_QWORD *)(v34 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( *(_DWORD *)(v24 + 24) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v26, v30, v31, v32);
      *(_QWORD *)(v35 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v35);
    }
    *(_QWORD *)(v24 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v24 + 24) = 1;
  }
  v181 = 1;
  if ( a2 )
  {
    v203 = 0;
    v26 = MmUserProbeAddress;
    v36 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v36 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v204 = *v36;
    *(_OWORD *)v205 = v36[1];
    v37 = (_DWORD *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v37 = (_DWORD *)MmUserProbeAddress;
    *v37 = 0;
    v38 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v38 = (_DWORD *)MmUserProbeAddress;
    *v38 = 0;
  }
  else
  {
    *(_OWORD *)v204 = *(_OWORD *)a1;
    *(_OWORD *)v205 = *(_OWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !v205[0] )
  {
    v39 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180);
    goto LABEL_191;
  }
  v42 = v204[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v178, v204[0], (struct _KTHREAD **)v11, v201);
  v44 = v201[0];
  if ( !v201[0] )
  {
    v45 = WdLogNewEntry5_WdError(v43);
    *(_QWORD *)(v45 + 24) = v42;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v45);
LABEL_41:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v178);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180);
    goto LABEL_191;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v201[0], 0LL, &v182, 0LL);
  v51 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v52 = WdLogNewEntry5_WdError(v48);
    *(_QWORD *)(v52 + 24) = v44;
    *(_QWORD *)(v52 + 32) = v51;
    WdLogEvent5_WdError(v52);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v178);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v53, &EventProfilerExit, v54, 2060);
    return (unsigned int)v51;
  }
  v55 = v182;
  if ( !v182 )
  {
    v56 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
    *(_QWORD *)(v56 + 24) = 241LL;
    WdLogEvent5_WdAssertion(v56);
  }
  COREACCESS::COREACCESS((COREACCESS *)v188, v55);
  if ( v190 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57, v59);
    v61[3] = 275LL;
    v61[4] = 4LL;
    v61[5] = v188;
    v61[6] = 0LL;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
  }
  v62 = v189;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v189 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v189 + 32)) )
      KeWaitForSingleObject((char *)v189 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v189);
  }
  v190 = 1;
  v63 = _InterlockedExchangeAdd64((volatile signed __int64 *)v182 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v64 = v182;
  v65 = v63 - 1;
  if ( !v65 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v182 + 2), v182);
  if ( v65 < 0 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v62, v57, v59, v60);
    *(_QWORD *)(v66 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v66);
  }
  if ( !*((_QWORD *)v64 + 248) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v62, v57, v59, v60);
    *(_QWORD *)(v67 + 24) = 253LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v183 = 0;
  v185 = 0;
  v68 = *((_QWORD *)v64 + 248);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198, (struct _KTHREAD **)(v68 + 592));
  KeEnterCriticalRegion();
  v69 = v199;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v199, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v72 = *(_DWORD *)(v69 + 16);
      if ( v72 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v70, &EventBlockThread, v71, v72);
    }
    ExAcquirePushLockSharedEx(v69, 0LL);
  }
  v200 = 1;
  v73 = PsGetCurrentProcess(v70);
  ProcessSessionId = PsGetProcessSessionId(v73);
  if ( ProcessSessionId >= *(_DWORD *)(v68 + 616)
    || (v76 = 8LL * ProcessSessionId, !*(_QWORD *)(v76 + *(_QWORD *)(v68 + 624))) )
  {
LABEL_184:
    v170 = WdLogNewEntry5_WdEvent(v76, v75, v77, v78);
    *(_QWORD *)(v170 + 24) = v64;
    WdLogEvent5_WdEvent(v170);
    if ( *((_DWORD *)v64 + 40) != 1 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198);
      COREACCESS::~COREACCESS((COREACCESS *)v188);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v178);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v171, &EventProfilerExit, v172, 2060);
      return 0LL;
    }
LABEL_182:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198);
    COREACCESS::~COREACCESS((COREACCESS *)v188);
    goto LABEL_41;
  }
  _mm_lfence();
  v79 = *(DXGPRESENTHISTORYTOKENQUEUE **)(v76 + *(_QWORD *)(v68 + 624));
  v192 = v79;
  v201[1] = v79;
  if ( !v79 )
  {
    v64 = v182;
    goto LABEL_184;
  }
  v80 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v81 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
    *(_QWORD *)(v81 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v81);
    v80 = DXGGLOBAL::m_pGlobal;
  }
  v82 = (DXGSESSIONMGR *)*((_QWORD *)v80 + 70);
  if ( !v82
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v76, v75, v77, v78),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                           v82,
                                           CurrentProcessSessionId,
                                           v84,
                                           v85),
        (v87 = SessionDataForSpecifiedSession) == 0LL) )
  {
    v165 = WdLogNewEntry5_WdEvent(v76, v75, v77, v78);
    *(_QWORD *)(v165 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v167, v166, v168, v169);
    WdLogEvent5_WdEvent(v165);
    goto LABEL_182;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)&v196,
    (struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 16));
  if ( v197 )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88, v90);
    v91[3] = 275LL;
    v91[4] = 4LL;
    v91[5] = &v196;
    v91[6] = 0LL;
    v91[7] = 0LL;
    WdLogEvent5_WdCriticalError(v91);
  }
  v92 = v196;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v92 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v92 + 24) <= 0 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v94, v93, v95, v96);
      *(_QWORD *)(v97 + 24) = 319LL;
      WdLogEvent5_WdAssertion(v97);
    }
    ++*(_DWORD *)(v92 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v92 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v101 = *(_DWORD *)(v92 + 28);
        if ( v101 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v98, &EventBlockThread, v99, v101);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v92);
      ExAcquirePushLockExclusiveEx(v92 + 16, 0LL);
    }
    if ( *(_QWORD *)(v92 + 8) )
    {
      v102 = WdLogNewEntry5_WdAssertion(v98, v93, v99, v100);
      *(_QWORD *)(v102 + 24) = 343LL;
      WdLogEvent5_WdAssertion(v102);
    }
    if ( *(_DWORD *)(v92 + 24) )
    {
      v103 = WdLogNewEntry5_WdAssertion(v98, v93, v99, v100);
      *(_QWORD *)(v103 + 24) = 344LL;
      WdLogEvent5_WdAssertion(v103);
    }
    *(_QWORD *)(v92 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v92 + 24) = 1;
  }
  v197 = 1;
  v104 = (int **)((char *)v87 + 56);
  v187 = (int **)((char *)v87 + 56);
  v105 = (char *)v87 + 16440;
  v191 = (char *)v87 + 16440;
  v106 = (char *)v205[0];
  v208 = v204[1];
  v184 = 2048;
  if ( (int)DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
              (KSPIN_LOCK *)v79,
              v93,
              &v184,
              (struct DXGSESSIONDATA *)((char *)v87 + 56),
              (struct DXGSESSIONDATA *)((char *)v87 + 16440)) < 0 )
  {
    v111 = WdLogNewEntry5_WdAssertion(v108, v107, v109, v110);
    *(_QWORD *)(v111 + 24) = 321LL;
    WdLogEvent5_WdAssertion(v111);
  }
  v177 = 0;
  v112 = 0;
  v186 = 0;
  v113 = v183;
  v114 = v185;
  v115 = v184;
  for ( i = v184; ; v115 = i )
  {
    v207 = v113;
    v116 = 0x1C0000000uLL;
    if ( v112 >= v115 )
      break;
    v117 = v104[v112];
    switch ( *v117 )
    {
      case 1:
        v118 = v117[14];
        if ( v118 <= 0x10 )
        {
          v120 = 16 * v118 + 60;
          goto LABEL_107;
        }
        v119 = WdLogNewEntry5_WdAssertion(v108, 0x1C0000000uLL, v109, v110);
        *(_QWORD *)(v119 + 24) = 62LL;
        WdLogEvent5_WdAssertion(v119);
        v114 = 0;
        break;
      case 2:
        v121 = v117[205];
        if ( v121 <= 0x10 )
        {
          v120 = 16 * v121 + 824;
          goto LABEL_107;
        }
        v122 = WdLogNewEntry5_WdAssertion(v108, 0x1C0000000uLL, v109, v110);
        *(_QWORD *)(v122 + 24) = 72LL;
        WdLogEvent5_WdAssertion(v122);
        v114 = 0;
        break;
      case 3:
        v123 = v117[10];
        if ( v123 <= 0x10 )
        {
          v120 = 16 * v123 + 44;
          goto LABEL_107;
        }
        v124 = WdLogNewEntry5_WdAssertion(v108, 0x1C0000000uLL, v109, v110);
        *(_QWORD *)(v124 + 24) = 82LL;
        WdLogEvent5_WdAssertion(v124);
        v114 = 0;
        break;
      case 4:
      case 5:
      case 7:
        v120 = 24;
        goto LABEL_107;
      default:
        v125 = WdLogNewEntry5_WdError(v108);
        *(_QWORD *)(v125 + 24) = 99LL;
        WdLogEvent5_WdError(v125);
        v130 = WdLogNewEntry5_WdAssertion(v127, v126, v128, v129);
        *(_QWORD *)(v130 + 24) = 100LL;
        WdLogEvent5_WdAssertion(v130);
        v120 = 0;
LABEL_107:
        v114 = (v120 + 7) & 0xFFFFFFF8;
        break;
    }
    v185 = v114;
    if ( !v114 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v108, v116, v109, v110);
      *(_QWORD *)(v131 + 24) = 331LL;
      WdLogEvent5_WdAssertion(v131);
    }
    if ( v114 > v208 )
    {
      v177 = 261;
      v104 = v187;
      break;
    }
    v117[1] = v114;
    if ( *v117 != 2 || (v132 = 1, (v117[15] & 0x40) != 0) )
      v132 = 0;
    if ( v132 )
    {
      v133 = v105[v112];
      if ( (v133 & 1) != 0 )
      {
        v117[15] |= 0x2000u;
        v117[15] ^= (v117[15] ^ ((unsigned __int8)v105[v112] << 17)) & 0x40000;
      }
      else
      {
        v117[15] ^= (v117[15] ^ (v133 << 18)) & 0x100000;
      }
      v134 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v134[3] = v117;
      v134[4] = *((_QWORD *)v117 + 2);
      v134[5] = ((unsigned int)v117[15] >> 13) & 1;
      v134[6] = *((_QWORD *)v117 + 9);
      v134[7] = *((_QWORD *)v117 + 1);
      WdLogEvent5_WdPresentTokenEvent(v134);
    }
    if ( a2 )
    {
      v135 = v114;
      v136 = (ULONG64)&v106[v114];
      if ( v136 > MmUserProbeAddress || v136 <= (unsigned __int64)v106 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v106, v117, v114);
    }
    else
    {
      v135 = v114;
      memmove(v106, v117, v114);
    }
    if ( *v117 != 2 || (v138 = 1, (v117[15] & 0x40) != 0) )
      v138 = 0;
    if ( v138 && (v191[v112] & 1) != 0 )
    {
      if ( (v117[15] & 0x2000) == 0 )
      {
        v139 = WdLogNewEntry5_WdAssertion(v108, v137, v109, v110);
        *(_QWORD *)(v139 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v139);
      }
      if ( (unsigned int)(v117[15] << 16 >> 30) > 1 )
      {
        v140 = WdLogNewEntry5_WdAssertion(v108, v137, v109, v110);
        *(_QWORD *)(v140 + 24) = 388LL;
        WdLogEvent5_WdAssertion(v140);
      }
      v108 = v117[15] ^ ((unsigned __int16)v117[15] ^ (unsigned __int16)((v117[15] & 0xC000) + 0x4000)) & 0xC000u;
      v117[15] = v108;
    }
    v106 += v135;
    v113 += v114;
    v183 = v114 + v207;
    v208 -= v114;
    v186 = ++v112;
    v105 = v191;
    v104 = v187;
  }
  v202 = v112;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v192, 0);
  if ( a2 )
  {
    v141 = v194;
    v142 = (_DWORD *)(v194 + 24);
    if ( v194 + 24 >= MmUserProbeAddress )
      v142 = (_DWORD *)MmUserProbeAddress;
    *v142 = v112;
    if ( v112 || !v114 )
    {
      v144 = (_DWORD *)(v141 + 8);
      if ( v141 + 8 >= MmUserProbeAddress )
        v144 = (_DWORD *)MmUserProbeAddress;
      *v144 = v113;
    }
    else
    {
      v143 = (_DWORD *)(v141 + 8);
      if ( v141 + 8 >= MmUserProbeAddress )
        v143 = (_DWORD *)MmUserProbeAddress;
      *v143 = v114;
      v177 = -1073741789;
    }
  }
  else
  {
    v145 = v194;
    *(_DWORD *)(v194 + 24) = v112;
    if ( v112 || !v114 )
    {
      *(_DWORD *)(v145 + 8) = v113;
    }
    else
    {
      *(_DWORD *)(v145 + 8) = v114;
      v177 = -1073741789;
    }
  }
  v146 = v112;
  if ( v112 )
  {
    v147 = v112;
    v148 = v182;
    v149 = v191;
    v150 = v192;
    do
    {
      v151 = *v104;
      v152 = *v151;
      if ( *v151 != 2 || (v153 = 1, (v151[15] & 0x40) != 0) )
        v153 = 0;
      if ( v153
        && (*v149 & 1) != 0
        && (v154 = v151[15] ^ (v151[15] ^ ((v151[15] & 0xFFFF0000) + 0x10000)) & 0x30000,
            v151[15] = v154,
            (v154 & 0x30000) < 0x20000) )
      {
        --v146;
      }
      else
      {
        switch ( v152 )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
            v155 = *((_QWORD *)v151 + 2);
            break;
          case 2:
            v155 = *((_QWORD *)v151 + 3);
            break;
          default:
            v155 = 0LL;
            break;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v176) = v151[1];
          LODWORD(v175) = v152;
          Template_ppqqx(v155, &EventRetirePresentHistory, (unsigned int)v176, v148, v151, v175, v176, v155);
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v150 + 3, (PSLIST_ENTRY)v151 - 1);
      }
      v104 = ++v187;
      ++v149;
      --v147;
    }
    while ( v147 );
    v112 = v186;
  }
  v156 = v192;
  DXGPRESENTHISTORYTOKENQUEUE::RetirePresentHistory(v192, v112);
  if ( v146 )
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v156 + 8), 0, v146, 0);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v196);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v198);
  COREACCESS::~COREACCESS((COREACCESS *)v188);
  if ( v178 )
  {
    v161 = _InterlockedDecrement64((volatile signed __int64 *)v178 + 3);
    if ( !v161 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v178 + 2), v178);
    if ( v161 < 0 )
    {
      v162 = WdLogNewEntry5_WdAssertion(v158, v157, v159, v160);
      *(_QWORD *)(v162 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v162);
    }
  }
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)&v180);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v163, &EventProfilerExit, v164, v179);
  return v177;
}
