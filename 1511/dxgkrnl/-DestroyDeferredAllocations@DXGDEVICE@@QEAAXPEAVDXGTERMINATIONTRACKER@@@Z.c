/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C006BD20
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0068680 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x1C00017FC (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C006B0FC (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v6; // r12
  void **v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 i; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edi
  struct DXGPROCESS *Current; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v29; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rcx
  _QWORD *v37; // rax
  void **v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  char v42; // si
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r15
  struct DXGPROCESS *v49; // rax
  struct DXGPROCESS *v50; // rbx
  char *v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // r8
  void *v54; // rcx
  void *v55; // rbx
  bool v56; // zf
  __int64 v57; // r15
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rbx
  int v63; // esi
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rcx
  unsigned __int8 v67; // r12
  __int64 v68; // rdi
  struct _KTHREAD *v69; // r14
  int v70; // edi
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r14
  __int64 v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // r8d
  __int64 j; // rax
  __int64 v88; // rcx
  int v89; // r9d
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // r9d
  __int64 v93; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v95; // rax
  unsigned __int8 v96; // cl
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // r9d
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // r9d
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  unsigned __int8 v110; // cl
  _QWORD *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // r9d
  __int64 v115; // rax
  char v116; // [rsp+38h] [rbp-D0h]
  __int64 v117; // [rsp+40h] [rbp-C8h]
  __int64 v118; // [rsp+40h] [rbp-C8h]
  __int64 v119; // [rsp+40h] [rbp-C8h]
  __int64 v120; // [rsp+48h] [rbp-C0h]
  __int64 v121; // [rsp+48h] [rbp-C0h]
  __int64 v122; // [rsp+48h] [rbp-C0h]
  int v123; // [rsp+50h] [rbp-B8h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  int v125; // [rsp+50h] [rbp-B8h]
  void **v126; // [rsp+58h] [rbp-B0h]
  __int64 v127; // [rsp+60h] [rbp-A8h] BYREF
  void **v128; // [rsp+68h] [rbp-A0h]
  _QWORD v129[4]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v130[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v131[128]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v126 = v7) == 0LL) )
  {
    v7 = (void **)v131;
    v126 = (void **)v131;
  }
  v8 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  if ( v4 )
  {
    v83 = WdLogNewEntry5_WdTrace(0LL, a2, a3, a4);
    *(_QWORD *)(v83 + 24) = *(_QWORD *)v6;
    a2 = *(struct DXGTERMINATIONTRACKER **)(*(_QWORD *)v6 + 8LL);
    v8 = *((_QWORD *)a2 + 5);
    *(_QWORD *)(v83 + 32) = v8;
  }
  v9 = (_QWORD *)*((_QWORD *)v6 + 1);
  for ( i = 0LL; v9; v9 = (_QWORD *)v9[8] )
  {
    v11 = WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = v9;
    a2 = *(struct DXGTERMINATIONTRACKER **)(v9[1] + 40LL);
    *(_QWORD *)(v11 + 32) = a2;
    v12 = v9[3];
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 2);
      v14 = *((_DWORD *)v6 + 12);
      v120 = *(_QWORD *)(v13 + 424);
      v117 = *(_QWORD *)(v13 + 432);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          i = 0LL;
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 120, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v89 = *((_DWORD *)Current + 34);
              if ( v89 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v16, &EventBlockThread, v17, v89);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          i = 0LL;
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v120 + 8) + 160LL))(v117, v12, 0LL, v14);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      v9[3] = 0LL;
    }
    v8 = v9[4];
    v7 = v126;
    if ( v8 )
    {
      v126[(unsigned int)v127] = (void *)v8;
      LODWORD(v127) = v127 + 1;
      v9[4] = 0LL;
    }
  }
  if ( (_DWORD)v127 )
  {
    v18 = *((_QWORD *)this + 2);
    v118 = v18;
    v121 = *((_QWORD *)this + 45);
    v128 = v7;
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerEnter, a3, 5029);
    CurrentProcess = PsGetCurrentProcess();
    ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
    if ( ProcessWin32Process )
    {
      v22 = *(_QWORD *)(ProcessWin32Process + 248);
      if ( v22 )
      {
        v23 = v22 + 96;
LABEL_22:
        v24 = 0;
        if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
        {
          v91 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v91 + 24) = 1155LL;
          WdLogEvent5_WdAssertion(v91);
        }
        if ( v22 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v92 = *(_DWORD *)(v23 + 16);
              if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v25, &EventBlockThread, v26, v92);
            }
            ExAcquirePushLockExclusiveEx(v23, 0LL);
          }
          v24 = 2;
          *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v18 + 16), 1);
        CurrentIrql = KeGetCurrentIrql();
        v29 = 0LL;
        if ( CurrentIrql < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v93 = WdLogNewEntry5_WdAssertion(v27);
            *(_QWORD *)(v93 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v93);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId
            && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
            && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
            && *(_QWORD *)ThreadWin32Thread )
          {
            v29 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
            v18 = v118;
            if ( v29 )
            {
              v123 = *(_DWORD *)(v29 + 136);
              goto LABEL_35;
            }
          }
          else
          {
            v18 = v118;
            v29 = 0LL;
          }
        }
        v123 = 0;
LABEL_35:
        v35 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v18 + 16) + 576LL))(v121, &v127);
        v36 = KeGetCurrentIrql();
        if ( CurrentIrql != (_BYTE)v36 )
        {
          v95 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v32, v33);
          v95[5] = v118;
          v95[6] = CurrentIrql;
          v95[3] = 275LL;
          v95[4] = 16LL;
          v96 = KeGetCurrentIrql();
          v95[7] = v96;
          WdLogEvent5_WdCriticalError(v95);
        }
        if ( v29 && *(_DWORD *)(v29 + 136) != v123 )
        {
          v97 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v32, v33);
          v97[3] = 275LL;
          v97[4] = 25LL;
          v97[5] = *(int *)(v29 + 136);
          v97[6] = v123;
          v97[7] = 0LL;
          WdLogEvent5_WdCriticalError(v97);
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v32, v33, v34);
        v37[3] = v35;
        v37[4] = v121;
        v37[5] = (unsigned int)v127;
        v38 = v128;
        v37[6] = *v128;
        if ( (_DWORD)v35 )
        {
          v98 = WdLogNewEntry5_WdError(v38);
          *(_QWORD *)(v98 + 24) = v35;
          WdLogEvent5_WdError(v98);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v118 + 16));
        i = 0LL;
        if ( v24 == 2 )
        {
          *(_QWORD *)(v23 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v23, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v39, &EventProfilerExit, v40, 5029);
        goto LABEL_43;
      }
    }
    else
    {
      v90 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v90 + 24) = CurrentProcess;
      WdLogEvent5_WdEvent(v90);
      v22 = 0LL;
    }
    v23 = 0LL;
    goto LABEL_22;
  }
LABEL_43:
  v41 = *(_QWORD *)v6;
  v42 = 1;
  v116 = 1;
  v119 = 0LL;
  if ( *(_QWORD *)v6 )
  {
    v84 = *(_QWORD *)(v41 + 56);
    if ( (*(_DWORD *)(v41 + 4) & 1) != 0 )
    {
      if ( v84 )
      {
        v85 = *(_QWORD *)(v84 + 136);
        if ( v85 )
        {
          if ( *(DXGDEVICE **)(v85 + 96) == this )
          {
            v56 = (*(_DWORD *)(v85 + 88))-- == 1;
            if ( v56 )
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX(
                (DXGAUTOMUTEX *)v130,
                (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 56LL) + 136LL) + 8LL));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v130);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 56LL) + 136LL) + 96LL) = 0LL;
              if ( v130[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v130);
            }
          }
        }
        v86 = 0;
        for ( j = *(_QWORD *)(*(_QWORD *)v6 + 24LL); j; ++v86 )
          j = *(_QWORD *)(j + 64);
        DXGSHAREDRESOURCE::ReleaseReference(*(DXGSHAREDRESOURCE **)(*(_QWORD *)v6 + 56LL), v126, v86);
        *(_QWORD *)(*(_QWORD *)v6 + 56LL) = 0LL;
      }
      v42 = 0;
      v116 = 0;
    }
    else
    {
      v119 = *(_QWORD *)(v41 + 56);
    }
  }
  memset(v129, 0, sizeof(v129));
  v45 = *((_QWORD *)v6 + 1);
  if ( v45 )
  {
    do
    {
      i = *(_QWORD *)(v45 + 64);
      v122 = i;
      if ( (*(_DWORD *)(v45 + 72) & 0x800) != 0 )
      {
        v99 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v99 + 24) = 1664LL;
        WdLogEvent5_WdAssertion(v99);
      }
      if ( (*(_DWORD *)(v45 + 72) & 0x7FE) != 0 )
      {
        v100 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v100 + 24) = 1665LL;
        WdLogEvent5_WdAssertion(v100);
      }
      v46 = *(_QWORD *)(v45 + 48);
      if ( v46 )
      {
        if ( !v42 )
          goto LABEL_126;
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
        {
          v48 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
          v124 = *((_QWORD *)this + 67);
          v49 = DXGPROCESS::GetCurrent();
          v50 = v49;
          if ( v49 )
          {
            v51 = (char *)v49 + 120;
            if ( *((struct _KTHREAD **)v49 + 16) == KeGetCurrentThread() )
            {
              v50 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v51, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v101 = *((_DWORD *)v51 + 4);
                  if ( v101 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                    Template_q(v52, &EventBlockThread, v53, v101);
                }
                ExAcquirePushLockExclusiveEx(v51, 0LL);
              }
              *((_QWORD *)v51 + 1) = KeGetCurrentThread();
            }
            v42 = v116;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v48 + 8) + 128LL))(v124, 0LL, v47);
          if ( v50 )
          {
            *((_QWORD *)v50 + 16) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v50 + 120, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v45 + 48) + 8LL) = 0LL;
        }
        i = v122;
        v54 = *(void **)(*(_QWORD *)(v45 + 48) + 16LL);
        if ( v54 )
        {
          v126[LODWORD(v129[0])] = v54;
          ++LODWORD(v129[0]);
          *(_QWORD *)(*(_QWORD *)(v45 + 48) + 16LL) = 0LL;
        }
      }
      else if ( !v42 )
      {
LABEL_126:
        if ( !*(_QWORD *)v6 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v102 + 24) = 1691LL;
          WdLogEvent5_WdAssertion(v102);
        }
        v88 = *(unsigned int *)(*(_QWORD *)v6 + 4LL);
        if ( (v88 & 1) == 0 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v88);
          *(_QWORD *)(v103 + 24) = 1692LL;
          WdLogEvent5_WdAssertion(v103);
        }
      }
      if ( !*(_QWORD *)v6 || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 1) == 0 )
      {
        v55 = *(void **)(v45 + 48);
        if ( v55 )
        {
          DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v45 + 48));
          operator delete(v55);
        }
      }
      ExFreePoolWithTag((PVOID)v45, 0);
      v45 = i;
    }
    while ( i );
  }
  if ( v42 )
  {
    v56 = *(_QWORD *)v6 == 0LL;
    LODWORD(v129[3]) = i;
    if ( !v56 )
      LODWORD(v129[3]) = 1;
    v43 = v119;
    v129[2] = v119;
    if ( LODWORD(v129[0]) )
    {
      v129[1] = v126;
    }
    else
    {
      v129[1] = i;
      if ( !v119 )
        goto LABEL_98;
    }
    v57 = *((_QWORD *)this + 2);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v119, &EventProfilerEnter, v44, 5005);
    v58 = PsGetCurrentProcess();
    v59 = PsGetProcessWin32Process(v58);
    if ( v59 )
    {
      v61 = *(_QWORD *)(v59 + 248);
      if ( v61 )
      {
        v62 = v61 + 96;
LABEL_75:
        v63 = i;
        if ( v62 && *(struct _KTHREAD **)(v62 + 8) == KeGetCurrentThread() )
        {
          v105 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v105 + 24) = 1155LL;
          WdLogEvent5_WdAssertion(v105);
        }
        if ( v61 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v62, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v106 = *(_DWORD *)(v62 + 16);
              if ( v106 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v64, &EventBlockThread, v65, v106);
            }
            ExAcquirePushLockExclusiveEx(v62, 0LL);
          }
          v63 = 2;
          *(_QWORD *)(v62 + 8) = KeGetCurrentThread();
        }
        DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v57 + 16), 1);
        v67 = KeGetCurrentIrql();
        v68 = i;
        if ( v67 < 2u )
        {
          v69 = KeGetCurrentThread();
          if ( !v69 )
          {
            v107 = WdLogNewEntry5_WdAssertion(v66);
            *(_QWORD *)(v107 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v107);
          }
          v70 = PsGetCurrentProcessSessionId();
          if ( v70
            && (unsigned int)PsGetThreadSessionId(v69) == v70
            && (v108 = PsGetThreadWin32Thread(v69)) != 0
            && *(_QWORD *)v108 )
          {
            v68 = *(_QWORD *)(*(_QWORD *)v108 + 80LL);
            if ( v68 )
            {
              v125 = *(_DWORD *)(v68 + 136);
              goto LABEL_88;
            }
            LODWORD(i) = 0;
          }
          else
          {
            LODWORD(i) = 0;
            v68 = 0LL;
          }
        }
        v125 = i;
LABEL_88:
        v74 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v57 + 16) + 320LL))(
                *(_QWORD *)(*(_QWORD *)(v57 + 16) + 224LL),
                v129);
        v75 = KeGetCurrentIrql();
        if ( v67 != (_BYTE)v75 )
        {
          v109 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v71, v72);
          v109[3] = 275LL;
          v109[4] = 16LL;
          v109[5] = v57;
          v109[6] = v67;
          v110 = KeGetCurrentIrql();
          v109[7] = v110;
          WdLogEvent5_WdCriticalError(v109);
        }
        if ( v68 && *(_DWORD *)(v68 + 136) != v125 )
        {
          v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v71, v72);
          v111[3] = 275LL;
          v111[4] = 25LL;
          v111[5] = *(int *)(v68 + 136);
          v111[6] = v125;
          v111[7] = 0LL;
          WdLogEvent5_WdCriticalError(v111);
        }
        v76 = (_QWORD *)WdLogNewEntry5_WdTrace(v75, v71, v72, v73);
        v76[3] = v74;
        v76[4] = LODWORD(v129[3]);
        v76[5] = v129[2];
        v76[6] = LODWORD(v129[0]);
        v77 = v129[1];
        if ( v129[1] )
          v78 = *(_QWORD *)v129[1];
        else
          v78 = 0LL;
        v76[7] = v78;
        if ( (_DWORD)v74 )
        {
          v112 = WdLogNewEntry5_WdError(v77);
          *(_QWORD *)(v112 + 24) = v74;
          WdLogEvent5_WdError(v112);
        }
        DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v57 + 16));
        if ( v63 == 2 )
        {
          *(_QWORD *)(v62 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v62, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v43, &EventProfilerExit, v79, 5005);
        goto LABEL_98;
      }
    }
    else
    {
      v104 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v104 + 24) = v58;
      WdLogEvent5_WdEvent(v104);
      v61 = i;
    }
    v62 = i;
    goto LABEL_75;
  }
LABEL_98:
  if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
  {
    v113 = WdLogNewEntry5_WdAssertion(v43);
    *(_QWORD *)(v113 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v113);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 112, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v114 = *((_DWORD *)this + 32);
      if ( v114 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v80, &EventBlockThread, v81, v114);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 112, 0LL);
  }
  *((_QWORD *)this + 15) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 713) < 0 )
  {
    v115 = WdLogNewEntry5_WdAssertion(v80);
    *(_QWORD *)(v115 + 24) = 1089LL;
    WdLogEvent5_WdAssertion(v115);
  }
  if ( !*((_DWORD *)this + 713) )
    KeSetEvent(*((PRKEVENT *)this + 357), 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 112, 0LL);
  KeLeaveCriticalRegion();
}
