/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C008AF10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, struct DXGADAPTER *a2, __int64 a3, int a4)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v5; // esi
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // r8d
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v30; // rax
  struct _KTHREAD *v31; // rbx
  int v32; // esi
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  struct _EX_RUNDOWN_REF *v36; // rbx
  ULONG_PTR Count; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _KEVENT *v42; // rdi
  BOOLEAN v43; // al
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // of
  volatile signed __int64 *v49; // rsi
  __int64 v50; // rt0
  struct DXGADAPTER *v51; // r13
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  volatile signed __int64 *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  ULONG_PTR v60; // rcx
  struct DXGADAPTER *v61; // r14
  unsigned int v62; // r12d
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned int v66; // r14d
  struct DXGADAPTER *v67; // rcx
  __int64 v68; // rax
  DXGADAPTER *v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _KTHREAD *v84; // rbx
  int v85; // edi
  __int64 *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r9
  __int64 v89; // rax
  struct _KTHREAD *v90; // rbx
  __int64 v91; // rdx
  int v92; // edi
  __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rbx
  unsigned __int8 v97; // di
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // r9d
  __int64 v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  _QWORD *v117; // rax
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  _QWORD *v125; // rax
  struct _EX_RUNDOWN_REF *v126; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v127; // [rsp+40h] [rbp-51h]
  char v128[8]; // [rsp+50h] [rbp-41h] BYREF
  char *v129; // [rsp+58h] [rbp-39h]
  int v130; // [rsp+60h] [rbp-31h]
  char v131[8]; // [rsp+70h] [rbp-21h] BYREF
  DXGADAPTER *v132; // [rsp+78h] [rbp-19h]
  char v133; // [rsp+80h] [rbp-11h]
  char v134[8]; // [rsp+88h] [rbp-9h] BYREF
  struct DXGADAPTER *v135; // [rsp+90h] [rbp-1h]
  char v136; // [rsp+98h] [rbp+7h]
  struct DXGADAPTER *v137; // [rsp+F8h] [rbp+67h] BYREF
  struct _EX_RUNDOWN_REF *v138; // [rsp+100h] [rbp+6Fh] BYREF
  unsigned int v139; // [rsp+108h] [rbp+77h]
  int v140; // [rsp+110h] [rbp+7Fh]

  v140 = a4;
  v139 = a3;
  Current = (struct DXGPROCESS *)a1;
  v5 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3016);
  if ( !Current )
    Current = DXGPROCESS::GetCurrent(a1);
  if ( !a2 )
  {
    v99 = WdLogNewEntry5_WdError(a1);
    v66 = -1073741811;
    *(_QWORD *)(v99 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v99);
    goto LABEL_104;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a2, 0, &v137, 0LL);
  v12 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v100 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v100 + 24) = a2;
    *(_QWORD *)(v100 + 32) = v12;
    WdLogEvent5_WdError(v100);
    v66 = v12;
    goto LABEL_104;
  }
  if ( !v137 )
  {
    v101 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v101 + 24) = 1966LL;
    WdLogEvent5_WdAssertion(v101);
  }
  v138 = 0LL;
  v129 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v102 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v102 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v102);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v103 = *((_DWORD *)Current + 52);
      if ( v103 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v13, &EventBlockThread, v14, v103);
    }
    ExAcquirePushLockSharedEx((char *)Current + 192, 0LL);
  }
  v130 = 1;
  v15 = (v5 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)Current + 58)
    && (v16 = *((_QWORD *)Current + 27),
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
        ((v5 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x30))
    && (v17 & 0x1000) == 0
    && (v17 & 0xF) != 0
    && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0xF) == 5 )
  {
    v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
  }
  else
  {
    v18 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v126, v18);
  DXGALLOCATIONREFERENCE::MoveAssign(&v138, &v126);
  v22 = (__int64)v126;
  if ( v126 )
    ExReleaseRundownProtection(v126 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v22, v19, v20, v21) + 195) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v104 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v104 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v104);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24, v23, v25, v26);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v30 = *ThreadWin32Thread;
          if ( v30 )
          {
            if ( *(_QWORD *)(v30 + 80) )
            {
              v31 = KeGetCurrentThread();
              if ( !v31 )
              {
                v105 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
                *(_QWORD *)(v105 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v105);
              }
              v32 = PsGetCurrentProcessSessionId(v24, v23, v25, v26);
              if ( v32
                && (unsigned int)PsGetThreadSessionId(v31) == v32
                && (v33 = (__int64 *)PsGetThreadWin32Thread(v31)) != 0LL
                && (v34 = *v33) != 0 )
              {
                v35 = *(_QWORD *)(v34 + 80);
              }
              else
              {
                v35 = 0LL;
              }
              if ( *(_DWORD *)(v35 + 136) )
              {
                v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
                v106[3] = 275LL;
                v106[4] = 25LL;
                v106[5] = *(int *)(v35 + 136);
                v106[6] = 0LL;
                v106[7] = 0LL;
                WdLogEvent5_WdCriticalError(v106);
              }
            }
          }
        }
      }
    }
    v5 = v139;
  }
  v36 = v138;
  if ( v138 )
  {
    Count = v138[1].Count;
    ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( v36[3].Count )
    {
      v42 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 80LL);
      if ( !KeReadStateEvent(v42) )
        KeWaitForSingleObject(v42, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      v43 = ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 80), 0);
      v48 = 0;
      if ( !v43 )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 80LL));
        v97 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v98, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 80), 1u);
        if ( v97 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v49 = *(volatile signed __int64 **)(*(_QWORD *)(Count + 16) + 16LL);
      v127 = (struct DXGADAPTER *)v49;
      v50 = _InterlockedAdd64(v49 + 3, 1uLL);
      if ( (v50 < 0) ^ v48 | (v50 == 0) )
      {
        v109 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
        *(_QWORD *)(v109 + 24) = 1050LL;
        WdLogEvent5_WdAssertion(v109);
      }
      KeEnterCriticalRegion();
      v51 = v127;
      ExAcquirePushLockSharedEx((char *)v127 + 104, 0LL);
      v55 = (volatile signed __int64 *)v137;
      v132 = v137;
      v133 = 0;
      if ( v137 )
      {
        if ( _InterlockedAdd64((volatile signed __int64 *)v137 + 3, 1uLL) <= 0 )
        {
          v110 = WdLogNewEntry5_WdAssertion(v55, v52, v53, v54);
          *(_QWORD *)(v110 + 24) = 1050LL;
          WdLogEvent5_WdAssertion(v110);
        }
        v55 = (volatile signed __int64 *)v137;
      }
      v135 = (struct DXGADAPTER *)v55;
      v136 = 0;
      if ( v55 )
      {
        if ( _InterlockedAdd64(v55 + 3, 1uLL) <= 0 )
        {
          v111 = WdLogNewEntry5_WdAssertion(v55, v52, v53, v54);
          *(_QWORD *)(v111 + 24) = 1050LL;
          WdLogEvent5_WdAssertion(v111);
        }
        v55 = (volatile signed __int64 *)v137;
      }
      v56 = _InterlockedDecrement64(v55 + 3);
      if ( v56 )
      {
        if ( v56 < 0 )
        {
          v112 = WdLogNewEntry5_WdAssertion(v55, v52, v53, v54);
          *(_QWORD *)(v112 + 24) = 1067LL;
          WdLogEvent5_WdAssertion(v112);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v137 + 2), v137);
      }
      COREACCESS::AcquireShared((COREACCESS *)v131);
      v60 = *((unsigned int *)v132 + 40);
      if ( (_DWORD)v60 == 1 )
      {
        if ( v132 == v135
          || (COREACCESS::AcquireShared((COREACCESS *)v134), v60 = *((unsigned int *)v135 + 40), (_DWORD)v60 == 1) )
        {
          v61 = v137;
          if ( !*((_QWORD *)v137 + 248) )
          {
            v118 = WdLogNewEntry5_WdAssertion(v60, v57, v58, v59);
            *(_QWORD *)(v118 + 24) = 2024LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v62 = 0;
          if ( v140 )
          {
            v62 = 1;
            v60 = v138[6].Count;
            *(_DWORD *)(v60 + 4) &= ~0x400u;
          }
          if ( v132 != v135 )
            COREACCESS::Release((COREACCESS *)v134);
          if ( !v133 )
          {
            v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v60, v57, v58);
            v119[5] = v131;
            v119[3] = 275LL;
            v119[4] = 4LL;
            v119[6] = 0LL;
            v119[7] = 0LL;
            WdLogEvent5_WdCriticalError(v119);
          }
          v133 = 0;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v132 + 18) )
            DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v132);
          v66 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 248) + 400LL)
                                                                                         + 8LL)
                                                                             + 592LL))(
                  *(_QWORD *)(*((_QWORD *)v61 + 248) + 408LL),
                  v36[3].Count,
                  v139 & 0x3F,
                  v62);
          goto LABEL_69;
        }
        COREACCESS::Release((COREACCESS *)v134);
      }
      COREACCESS::Release((COREACCESS *)v131);
      v117 = (_QWORD *)WdLogNewEntry5_WdEvent(v114, v113, v115, v116);
      v117[3] = -1073741130LL;
      v117[4] = a2;
      v117[5] = Current;
      WdLogEvent5_WdEvent(v117);
      v66 = -1073741130;
LABEL_69:
      v67 = v135;
      if ( v135 )
      {
        if ( v136 )
        {
          COREACCESS::Release((COREACCESS *)v134);
          v67 = v135;
        }
        v68 = _InterlockedDecrement64((volatile signed __int64 *)v67 + 3);
        if ( v68 )
        {
          if ( v68 < 0 )
          {
            v120 = WdLogNewEntry5_WdAssertion(v67, v63, v64, v65);
            *(_QWORD *)(v120 + 24) = 1067LL;
            WdLogEvent5_WdAssertion(v120);
          }
        }
        else
        {
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v67 + 2), v67);
        }
      }
      v69 = v132;
      if ( v132 )
      {
        if ( v133 )
        {
          COREACCESS::Release((COREACCESS *)v131);
          v69 = v132;
        }
        v70 = _InterlockedDecrement64((volatile signed __int64 *)v69 + 3);
        if ( v70 )
        {
          if ( v70 < 0 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v69, v63, v64, v65);
            *(_QWORD *)(v121 + 24) = 1067LL;
            WdLogEvent5_WdAssertion(v121);
          }
        }
        else
        {
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v69 + 2), v69);
        }
      }
      ExReleasePushLockSharedEx((char *)v51 + 104, 0LL);
      KeLeaveCriticalRegion();
      v75 = _InterlockedDecrement64(v49 + 3);
      if ( v75 )
      {
        if ( v75 < 0 )
        {
          v122 = WdLogNewEntry5_WdAssertion(v72, v71, v73, v74);
          *(_QWORD *)(v122 + 24) = 1067LL;
          WdLogEvent5_WdAssertion(v122);
        }
      }
      else
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v127 + 2), v127);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(Count + 80));
      KeLeaveCriticalRegion();
      v36 = v138;
      goto LABEL_85;
    }
    v108 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
    v66 = -1073741811;
    v108[3] = v5;
    v108[4] = v36;
    v108[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v108);
  }
  else
  {
    v107 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    v66 = -1073741811;
    *(_QWORD *)(v107 + 24) = v5;
    *(_QWORD *)(v107 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v107);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v128);
  }
LABEL_85:
  if ( v36 )
    ExReleaseRundownProtection(v36 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v77, v76, v78, v79) + 195) )
  {
    v84 = KeGetCurrentThread();
    if ( !v84 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v81, v80, v82, v83);
      *(_QWORD *)(v123 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v123);
    }
    v85 = PsGetCurrentProcessSessionId(v81, v80, v82, v83);
    if ( v85 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v84) == v85 )
      {
        v86 = (__int64 *)PsGetThreadWin32Thread(v84);
        if ( v86 )
        {
          v89 = *v86;
          if ( v89 )
          {
            if ( *(_QWORD *)(v89 + 80) )
            {
              v90 = KeGetCurrentThread();
              if ( !v90 )
              {
                v124 = WdLogNewEntry5_WdAssertion(v81, v87, v82, v88);
                *(_QWORD *)(v124 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v124);
              }
              v92 = PsGetCurrentProcessSessionId(v81, v87, v82, v88);
              if ( v92
                && (unsigned int)PsGetThreadSessionId(v90) == v92
                && (v93 = (__int64 *)PsGetThreadWin32Thread(v90)) != 0LL
                && (v94 = *v93) != 0 )
              {
                v95 = *(_QWORD *)(v94 + 80);
              }
              else
              {
                v95 = 0LL;
              }
              if ( *(_DWORD *)(v95 + 136) )
              {
                v125 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v91, v82);
                v125[3] = 275LL;
                v125[4] = 25LL;
                v125[5] = *(int *)(v95 + 136);
                v125[6] = 0LL;
                v125[7] = 0LL;
                WdLogEvent5_WdCriticalError(v125);
              }
            }
          }
        }
      }
    }
  }
LABEL_104:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v81, &EventProfilerExit, v82, 3016);
  return v66;
}
