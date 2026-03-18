/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0078FD0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091D60 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00904BC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00906EC (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00A8CEC (--1DXGALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rbx
  DXGDEVICE *v6; // r14
  void **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned int v15; // edi
  __int64 v16; // r12
  __int64 v17; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  int v33; // r15d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int8 CurrentIrql; // r12
  __int64 v43; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v45; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v48; // esi
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r14
  __int64 v53; // rcx
  _QWORD *v54; // rax
  unsigned __int8 v55; // cl
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  void **v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  struct DXGTERMINATIONTRACKER *v61; // rbx
  __int64 v62; // rdx
  char v63; // r13
  __int64 v64; // rcx
  __int64 v65; // rax
  DXGDEVICE *v66; // rsi
  __int64 v67; // rax
  bool v68; // zf
  __int64 j; // rax
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // r12
  __int64 v77; // r15
  struct DXGPROCESS *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // r9d
  void *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  void *v86; // rbx
  __int64 v87; // r13
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // rax
  int v97; // r14d
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // r9d
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned __int8 v106; // r12
  __int64 v107; // rdi
  struct _KTHREAD *v108; // rdi
  __int64 v109; // rax
  int v110; // esi
  __int64 v111; // rax
  int v112; // esi
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r15
  __int64 v117; // rcx
  _QWORD *v118; // rax
  unsigned __int8 v119; // cl
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  void **v122; // rcx
  __int64 v123; // rax
  char *v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // r9d
  __int64 v132; // rax
  void **v134; // [rsp+40h] [rbp-C8h]
  __int64 v135; // [rsp+48h] [rbp-C0h]
  __int64 v136; // [rsp+48h] [rbp-C0h]
  struct DXGTERMINATIONTRACKER *v137; // [rsp+50h] [rbp-B8h]
  __int64 v138; // [rsp+58h] [rbp-B0h] BYREF
  void **v139; // [rsp+60h] [rbp-A8h]
  __int64 v140; // [rsp+68h] [rbp-A0h] BYREF
  void **v141; // [rsp+70h] [rbp-98h]
  __int64 v142; // [rsp+78h] [rbp-90h]
  __int64 v143; // [rsp+80h] [rbp-88h]
  _BYTE v144[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v145[128]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  v137 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v134 = v7) == 0LL) )
  {
    v7 = (void **)v145;
    v134 = (void **)v145;
  }
  v8 = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  if ( v4 )
  {
    v9 = WdLogNewEntry5_WdTrace(0LL, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)v5;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v5 + 8LL);
    v8 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v9 + 32) = v8;
  }
  for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)i[8] )
  {
    v11 = WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = i;
    v12 = i[1];
    a2 = *(struct DXGTERMINATIONTRACKER **)(v12 + 40);
    *(_QWORD *)(v11 + 32) = a2;
    v13 = i[3];
    if ( v13 )
    {
      v14 = *((_QWORD *)v6 + 2);
      v15 = *((_DWORD *)v5 + 12);
      v16 = *(_QWORD *)(v14 + 408);
      v17 = *(_QWORD *)(v14 + 400);
      Current = DXGPROCESS::GetCurrent(v12);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 120, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v21 = *((_DWORD *)Current + 34);
              if ( v21 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v19, &EventBlockThread, v20, v21);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
        v6 = this;
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v17 + 8) + 160LL))(v16, v13, 0LL, v15);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v5 = v137;
      i[3] = 0LL;
    }
    v8 = i[4];
    v7 = v134;
    if ( v8 )
    {
      v134[(unsigned int)v138] = (void *)v8;
      LODWORD(v138) = v138 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v138 )
  {
    v22 = *((_QWORD *)v6 + 2);
    v23 = *((_QWORD *)v6 + 45);
    v135 = v23;
    v139 = v7;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerEnter, a3, 5029);
    CurrentProcess = PsGetCurrentProcess(v8);
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process )
    {
      v30 = *(_QWORD *)(ProcessWin32Process + 248);
      if ( v30 )
      {
        v31 = v30 + 96;
LABEL_34:
        v33 = 0;
        if ( v31 && *(struct _KTHREAD **)(v31 + 8) == KeGetCurrentThread() )
        {
          v34 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          *(_QWORD *)(v34 + 24) = 1135LL;
          WdLogEvent5_WdAssertion(v34);
        }
        if ( v30 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v31, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v37 = *(_DWORD *)(v31 + 16);
              if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v35, &EventBlockThread, v36, v37);
            }
            ExAcquirePushLockExclusiveEx(v31, 0LL);
          }
          v33 = 2;
          *(_QWORD *)(v31 + 8) = KeGetCurrentThread();
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v22 + 16), 1);
        CurrentIrql = KeGetCurrentIrql();
        v43 = 0LL;
        if ( CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v45 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
            *(_QWORD *)(v45 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v45);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v39, v38, v40, v41);
          if ( CurrentProcessSessionId
            && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
            && *(_QWORD *)ThreadWin32Thread )
          {
            v43 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
            if ( v43 )
            {
              v48 = *(_DWORD *)(v43 + 136);
LABEL_56:
              v52 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v22 + 16) + 576LL))(v23, &v138);
              v53 = KeGetCurrentIrql();
              if ( CurrentIrql != (_BYTE)v53 )
              {
                v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v49, v50);
                v54[3] = 275LL;
                v54[4] = 16LL;
                v54[5] = v22;
                v54[6] = CurrentIrql;
                v55 = KeGetCurrentIrql();
                v54[7] = v55;
                WdLogEvent5_WdCriticalError(v54);
              }
              if ( v43 && *(_DWORD *)(v43 + 136) != v48 )
              {
                v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v49, v50);
                v56[3] = 275LL;
                v56[4] = 25LL;
                v56[5] = *(int *)(v43 + 136);
                v56[6] = v48;
                v56[7] = 0LL;
                WdLogEvent5_WdCriticalError(v56);
              }
              v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v49, v50, v51);
              v57[3] = v52;
              v57[4] = v135;
              v57[5] = (unsigned int)v138;
              v58 = v139;
              v57[6] = *v139;
              if ( (_DWORD)v52 )
              {
                v59 = WdLogNewEntry5_WdError(v58);
                *(_QWORD *)(v59 + 24) = v52;
                WdLogEvent5_WdError(v59);
              }
              DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v22 + 16));
              if ( v33 == 2 )
              {
                *(_QWORD *)(v31 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v31, 0LL);
                KeLeaveCriticalRegion();
              }
              if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
                Template_q(v60, &EventProfilerExit, a3, 5029);
              goto LABEL_68;
            }
          }
          else
          {
            v43 = 0LL;
          }
        }
        v48 = 0;
        goto LABEL_56;
      }
    }
    else
    {
      v32 = WdLogNewEntry5_WdEvent(v27, v26, v28, v29);
      *(_QWORD *)(v32 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v32);
      v30 = 0LL;
    }
    v31 = 0LL;
    goto LABEL_34;
  }
LABEL_68:
  v61 = v137;
  v62 = 0LL;
  v63 = 1;
  v136 = 0LL;
  v64 = *(_QWORD *)v137;
  if ( !*(_QWORD *)v137 )
  {
LABEL_83:
    v66 = this;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(v64 + 4) & 1) == 0 )
  {
    v62 = *(_QWORD *)(v64 + 56);
    v136 = v62;
    goto LABEL_83;
  }
  v65 = *(_QWORD *)(v64 + 56);
  v66 = this;
  if ( v65 )
  {
    v67 = *(_QWORD *)(v65 + 136);
    if ( v67 )
    {
      if ( *(DXGDEVICE **)(v67 + 72) == this )
      {
        v68 = (*(_DWORD *)(v67 + 64))-- == 1;
        if ( v68 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v144,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v137 + 56LL) + 136LL) + 8LL));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v137 + 56LL) + 136LL) + 72LL) = 0LL;
          if ( v144[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v144);
        }
      }
    }
    a3 = 0LL;
    for ( j = *(_QWORD *)(*(_QWORD *)v137 + 24LL); j; a3 = (unsigned int)(a3 + 1) )
      j = *(_QWORD *)(j + 64);
    v64 = *(_QWORD *)(*(_QWORD *)v137 + 56LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v64 + 60), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v64, v134, a3);
    v62 = 0LL;
    *(_QWORD *)(*(_QWORD *)v137 + 56LL) = 0LL;
  }
  v63 = 0;
LABEL_84:
  v70 = *((_QWORD *)v137 + 1);
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0LL;
  v143 = 0LL;
  if ( !v70 )
    goto LABEL_119;
  do
  {
    v71 = *(_QWORD *)(v70 + 64);
    if ( (*(_DWORD *)(v70 + 72) & 0x100) != 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v64, v62, a3, a4);
      *(_QWORD *)(v72 + 24) = 1694LL;
      WdLogEvent5_WdAssertion(v72);
    }
    if ( (*(_DWORD *)(v70 + 72) & 0xFE) != 0 )
    {
      v73 = WdLogNewEntry5_WdAssertion(v64, v62, a3, a4);
      *(_QWORD *)(v73 + 24) = 1695LL;
      WdLogEvent5_WdAssertion(v73);
    }
    v74 = *(_QWORD *)(v70 + 48);
    if ( v74 )
    {
      if ( v63 )
      {
        v75 = *(_QWORD *)(v74 + 8);
        if ( v75 )
        {
          v76 = *((_QWORD *)this + 67);
          v77 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
          v78 = DXGPROCESS::GetCurrent((__int64)this);
          if ( v78 )
          {
            if ( *((struct _KTHREAD **)v78 + 16) == KeGetCurrentThread() )
            {
              v78 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v78 + 120, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v81 = *((_DWORD *)v78 + 34);
                  if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                    Template_q(v79, &EventBlockThread, v80, v81);
                }
                ExAcquirePushLockExclusiveEx((char *)v78 + 120, 0LL);
              }
              *((_QWORD *)v78 + 16) = KeGetCurrentThread();
            }
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v77 + 8) + 128LL))(v76, 0LL, v75);
          if ( v78 )
          {
            *((_QWORD *)v78 + 16) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v78 + 120, 0LL);
            KeLeaveCriticalRegion();
          }
          v61 = v137;
          *(_QWORD *)(*(_QWORD *)(v70 + 48) + 8LL) = 0LL;
        }
        v82 = *(void **)(*(_QWORD *)(v70 + 48) + 16LL);
        if ( v82 )
        {
          v134[(unsigned int)v140] = v82;
          LODWORD(v140) = v140 + 1;
          *(_QWORD *)(*(_QWORD *)(v70 + 48) + 16LL) = 0LL;
        }
        goto LABEL_112;
      }
    }
    else if ( v63 )
    {
      goto LABEL_112;
    }
    if ( !*(_QWORD *)v61 )
    {
      v83 = WdLogNewEntry5_WdAssertion(v64, v62, a3, a4);
      *(_QWORD *)(v83 + 24) = 1721LL;
      WdLogEvent5_WdAssertion(v83);
    }
    v84 = *(unsigned int *)(*(_QWORD *)v61 + 4LL);
    if ( (v84 & 1) == 0 )
    {
      v85 = WdLogNewEntry5_WdAssertion(v84, v62, a3, a4);
      *(_QWORD *)(v85 + 24) = 1722LL;
      WdLogEvent5_WdAssertion(v85);
    }
LABEL_112:
    if ( !*(_QWORD *)v61 || (*(_DWORD *)(*(_QWORD *)v61 + 4LL) & 1) == 0 )
    {
      v86 = *(void **)(v70 + 48);
      if ( v86 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v70 + 48));
        operator delete(v86);
      }
      v61 = v137;
    }
    DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v70);
    ExFreePoolWithTag((PVOID)v70, 0);
    v70 = v71;
  }
  while ( v71 );
  v66 = this;
  v62 = v136;
LABEL_119:
  if ( !v63 )
    goto LABEL_168;
  v68 = *(_QWORD *)v61 == 0LL;
  v142 = v62;
  LODWORD(v143) = !v68;
  if ( (_DWORD)v140 )
  {
    v64 = (__int64)v134;
    v141 = v134;
    goto LABEL_124;
  }
  v141 = 0LL;
  if ( !v62 )
    goto LABEL_168;
LABEL_124:
  v87 = *((_QWORD *)v66 + 2);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v64, &EventProfilerEnter, a3, 5005);
  v88 = PsGetCurrentProcess(v64);
  v89 = PsGetProcessWin32Process(v88);
  if ( !v89 )
  {
    v96 = WdLogNewEntry5_WdEvent(v91, v90, v92, v93);
    *(_QWORD *)(v96 + 24) = v88;
    WdLogEvent5_WdEvent(v96);
    v94 = 0LL;
    goto LABEL_131;
  }
  v94 = *(_QWORD *)(v89 + 248);
  if ( !v94 )
  {
LABEL_131:
    v95 = 0LL;
    goto LABEL_132;
  }
  v95 = v94 + 96;
LABEL_132:
  v97 = 0;
  if ( v95 && *(struct _KTHREAD **)(v95 + 8) == KeGetCurrentThread() )
  {
    v98 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v93);
    *(_QWORD *)(v98 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v98);
  }
  if ( v94 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v95, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v101 = *(_DWORD *)(v95 + 16);
        if ( v101 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v99, &EventBlockThread, v100, v101);
      }
      ExAcquirePushLockExclusiveEx(v95, 0LL);
    }
    v97 = 2;
    *(_QWORD *)(v95 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v87 + 16), 1);
  v106 = KeGetCurrentIrql();
  v107 = 0LL;
  if ( v106 < 2u )
  {
    v108 = KeGetCurrentThread();
    if ( !v108 )
    {
      v109 = WdLogNewEntry5_WdAssertion(v103, v102, v104, v105);
      *(_QWORD *)(v109 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v109);
    }
    v110 = PsGetCurrentProcessSessionId(v103, v102, v104, v105);
    if ( v110
      && (unsigned int)PsGetThreadSessionId(v108) == v110
      && (v111 = PsGetThreadWin32Thread(v108)) != 0
      && *(_QWORD *)v111 )
    {
      v107 = *(_QWORD *)(*(_QWORD *)v111 + 80LL);
      if ( v107 )
      {
        v112 = *(_DWORD *)(v107 + 136);
        goto LABEL_154;
      }
    }
    else
    {
      v107 = 0LL;
    }
  }
  v112 = 0;
LABEL_154:
  v116 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v87 + 16) + 320LL))(
           *(_QWORD *)(*(_QWORD *)(v87 + 16) + 224LL),
           &v140);
  v117 = KeGetCurrentIrql();
  if ( v106 != (_BYTE)v117 )
  {
    v118 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v113, v114);
    v118[3] = 275LL;
    v118[4] = 16LL;
    v118[5] = v87;
    v118[6] = v106;
    v119 = KeGetCurrentIrql();
    v118[7] = v119;
    WdLogEvent5_WdCriticalError(v118);
  }
  if ( v107 && *(_DWORD *)(v107 + 136) != v112 )
  {
    v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v113, v114);
    v120[3] = 275LL;
    v120[4] = 25LL;
    v120[5] = *(int *)(v107 + 136);
    v120[6] = v112;
    v120[7] = 0LL;
    WdLogEvent5_WdCriticalError(v120);
  }
  v121 = (_QWORD *)WdLogNewEntry5_WdTrace(v117, v113, v114, v115);
  v121[3] = v116;
  v121[4] = (unsigned int)v143;
  v121[5] = v142;
  v121[6] = (unsigned int)v140;
  v122 = v141;
  if ( v141 )
    v122 = (void **)*v141;
  v121[7] = v122;
  if ( (_DWORD)v116 )
  {
    v123 = WdLogNewEntry5_WdError(v122);
    *(_QWORD *)(v123 + 24) = v116;
    WdLogEvent5_WdError(v123);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v87 + 16));
  if ( v97 == 2 )
  {
    *(_QWORD *)(v95 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v95, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v64, &EventProfilerExit, a3, 5005);
LABEL_168:
  v124 = (char *)this + 112;
  if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
  {
    v125 = WdLogNewEntry5_WdAssertion(v64, v62, a3, a4);
    *(_QWORD *)(v125 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v125);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v124, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v130 = *((_DWORD *)this + 32);
      if ( v130 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v127, &EventBlockThread, v128, v130);
    }
    ExAcquirePushLockExclusiveEx(v124, 0LL);
  }
  *((_QWORD *)this + 15) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 4681) < 0 )
  {
    v132 = WdLogNewEntry5_WdAssertion(v127, v126, v128, v129);
    *(_QWORD *)(v132 + 24) = 1090LL;
    WdLogEvent5_WdAssertion(v132);
  }
  if ( !*((_DWORD *)this + 4681) )
    KeSetEvent(*((PRKEVENT *)this + 2341), 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  ExReleasePushLockExclusiveEx(v124, 0LL);
  KeLeaveCriticalRegion();
}
