/*
 * XREFs of ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C009D6E0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C0091180 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C008F6D0 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C008F838 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATION@@QEAA@XZ @ 0x1C00D2A78 (--1DXGALLOCATION@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyDeferredAllocations(
        DXGDEVICE *this,
        struct DXGTERMINATIONTRACKER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct DXGTERMINATIONTRACKER *v5; // rbx
  DXGDEVICE *v6; // rdi
  void **v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // r13
  __int64 v22; // r14
  __int64 CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rbx
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v36; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v38; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  int v41; // esi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  __int64 v46; // rcx
  _QWORD *v47; // rax
  unsigned __int8 v48; // cl
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  void **v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  struct DXGTERMINATIONTRACKER *v54; // rsi
  __int64 v55; // rdx
  char v56; // r13
  __int64 v57; // rcx
  __int64 v58; // rax
  DXGDEVICE *v59; // r14
  __int64 v60; // rax
  bool v61; // zf
  unsigned int v62; // ebx
  __int64 j; // rcx
  __int64 k; // rcx
  __int64 v65; // rdi
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // r12
  __int64 v72; // r15
  struct DXGPROCESS *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  void *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  void *v81; // rbx
  __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  __int64 v87; // rbx
  int v88; // r14d
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // r9d
  __int64 v93; // rcx
  unsigned __int8 v94; // r12
  __int64 v95; // rdi
  struct _KTHREAD *v96; // rdi
  __int64 v97; // rax
  int v98; // esi
  __int64 v99; // rax
  int v100; // esi
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // r15
  __int64 v105; // rcx
  _QWORD *v106; // rax
  unsigned __int8 v107; // cl
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  void **v110; // rcx
  __int64 v111; // rax
  __int64 v112; // r8
  char *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  int v117; // r9d
  __int64 v119; // rax
  void **v121; // [rsp+40h] [rbp-C8h]
  __int64 v122; // [rsp+48h] [rbp-C0h]
  __int64 v123; // [rsp+48h] [rbp-C0h]
  struct DXGTERMINATIONTRACKER *v124; // [rsp+50h] [rbp-B8h]
  __int64 v125; // [rsp+58h] [rbp-B0h] BYREF
  void **v126; // [rsp+60h] [rbp-A8h]
  __int64 v127; // [rsp+68h] [rbp-A0h] BYREF
  void **v128; // [rsp+70h] [rbp-98h]
  __int64 v129; // [rsp+78h] [rbp-90h]
  __int64 v130; // [rsp+80h] [rbp-88h]
  __int64 v131; // [rsp+88h] [rbp-80h]
  _BYTE v132[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v133[24]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v134[128]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = a2;
  v6 = this;
  v124 = a2;
  if ( !*(_QWORD *)a2 || (v7 = *(void ***)(v4 + 64), (v121 = v7) == 0LL) )
  {
    v7 = (void **)v134;
    v121 = (void **)v134;
  }
  v8 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
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
    a2 = *(struct DXGTERMINATIONTRACKER **)(i[1] + 40LL);
    *(_QWORD *)(v11 + 32) = a2;
    v12 = i[3];
    if ( v12 )
    {
      v13 = *((_QWORD *)v6 + 2);
      v14 = *((_DWORD *)v5 + 12);
      v15 = *(_QWORD *)(v13 + 408);
      v16 = *(_QWORD *)(v13 + 400);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v20 = *((_DWORD *)Current + 32);
              if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v18, &EventBlockThread, v19, v20);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
          }
          *((_QWORD *)Current + 15) = KeGetCurrentThread();
        }
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(v16 + 8) + 160LL))(v15, v12, 0LL, v14);
      if ( Current )
      {
        *((_QWORD *)Current + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      v5 = v124;
      v6 = this;
      i[3] = 0LL;
    }
    v8 = i[4];
    v7 = v121;
    if ( v8 )
    {
      v121[(unsigned int)v125] = (void *)v8;
      LODWORD(v125) = v125 + 1;
      i[4] = 0LL;
    }
  }
  if ( (_DWORD)v125 )
  {
    v21 = *((_QWORD *)v6 + 2);
    v126 = v7;
    v22 = *((_QWORD *)v6 + 48);
    v122 = v22;
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v8, &EventProfilerEnter, a3, 5029);
    CurrentProcess = PsGetCurrentProcess(v8);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v24);
    v27 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
      v28 = ProcessDxgProcess + 88;
    else
      v28 = 0LL;
    v29 = 0;
    if ( v28 && *(struct _KTHREAD **)(v28 + 8) == KeGetCurrentThread() )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v30 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v27 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v33 = *(_DWORD *)(v28 + 16);
          if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v31, &EventBlockThread, v32, v33);
        }
        ExAcquirePushLockExclusiveEx(v28, 0LL);
      }
      v29 = 2;
      *(_QWORD *)(v28 + 8) = KeGetCurrentThread();
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v21 + 16), 1);
    CurrentIrql = KeGetCurrentIrql();
    v36 = 0LL;
    if ( CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34);
        *(_QWORD *)(v38 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v38);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v36 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v36 )
        {
          v41 = *(_DWORD *)(v36 + 136);
LABEL_53:
          v45 = (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v21 + 16) + 592LL))(v22, &v125);
          v46 = KeGetCurrentIrql();
          if ( CurrentIrql != (_BYTE)v46 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v42, v43);
            v47[3] = 275LL;
            v47[4] = 16LL;
            v47[5] = v21;
            v47[6] = CurrentIrql;
            v48 = KeGetCurrentIrql();
            v47[7] = v48;
            WdLogEvent5_WdCriticalError(v47);
          }
          if ( v36 && *(_DWORD *)(v36 + 136) != v41 )
          {
            v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v42, v43);
            v49[3] = 275LL;
            v49[4] = 25LL;
            v49[5] = *(int *)(v36 + 136);
            v49[6] = v41;
            v49[7] = 0LL;
            WdLogEvent5_WdCriticalError(v49);
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v42, v43, v44);
          v50[3] = v45;
          v50[4] = v122;
          v50[5] = (unsigned int)v125;
          v51 = v126;
          v50[6] = *v126;
          if ( (_DWORD)v45 )
          {
            v52 = WdLogNewEntry5_WdError(v51);
            *(_QWORD *)(v52 + 24) = v45;
            WdLogEvent5_WdError(v52);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v21 + 16));
          if ( v29 == 2 )
          {
            *(_QWORD *)(v28 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v28, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v53, &EventProfilerExit, a3, 5029);
          goto LABEL_65;
        }
      }
      else
      {
        v36 = 0LL;
      }
    }
    v41 = 0;
    goto LABEL_53;
  }
LABEL_65:
  v54 = v124;
  v55 = 0LL;
  v56 = 1;
  v123 = 0LL;
  v57 = *(_QWORD *)v124;
  if ( !*(_QWORD *)v124 )
  {
LABEL_84:
    v59 = this;
    goto LABEL_85;
  }
  if ( (*(_DWORD *)(v57 + 4) & 1) == 0 )
  {
    v55 = *(_QWORD *)(v57 + 56);
    v123 = v55;
    goto LABEL_84;
  }
  v58 = *(_QWORD *)(v57 + 56);
  v59 = this;
  if ( v58 )
  {
    v60 = *(_QWORD *)(v58 + 144);
    if ( v60 )
    {
      if ( *(DXGDEVICE **)(v60 + 72) == this )
      {
        v61 = (*(_DWORD *)(v60 + 64))-- == 1;
        if ( v61 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX(
            (DXGAUTOMUTEX *)v132,
            (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v124 + 56LL) + 144LL) + 8LL));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v132);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v124 + 56LL) + 144LL) + 72LL) = 0LL;
          if ( v132[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v132);
        }
      }
    }
    v62 = 0;
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v133, (struct DXGFASTMUTEX *const)(*(_QWORD *)v124 + 80LL));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v133);
      for ( j = *(_QWORD *)(*(_QWORD *)v124 + 24LL); j; ++v62 )
        j = *(_QWORD *)(j + 64);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v133);
    }
    else
    {
      for ( k = *(_QWORD *)(*(_QWORD *)v124 + 24LL); k; ++v62 )
        k = *(_QWORD *)(k + 64);
    }
    v57 = *(_QWORD *)(*(_QWORD *)v124 + 56LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 60), 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v57, v121, v62);
    v55 = 0LL;
    *(_QWORD *)(*(_QWORD *)v124 + 56LL) = 0LL;
  }
  v56 = 0;
LABEL_85:
  v65 = *((_QWORD *)v124 + 1);
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v130 = 0LL;
  if ( !v65 )
    goto LABEL_120;
  do
  {
    v61 = (*(_DWORD *)(v65 + 72) & 0x800) == 0;
    v66 = *(_QWORD *)(v65 + 64);
    v131 = v66;
    if ( !v61 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v57);
      *(_QWORD *)(v67 + 24) = 1765LL;
      WdLogEvent5_WdAssertion(v67);
    }
    if ( (*(_DWORD *)(v65 + 72) & 0x7FE) != 0 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v57);
      *(_QWORD *)(v68 + 24) = 1766LL;
      WdLogEvent5_WdAssertion(v68);
    }
    v69 = *(_QWORD *)(v65 + 48);
    if ( v69 )
    {
      if ( v56 )
      {
        v70 = *(_QWORD *)(v69 + 8);
        if ( v70 )
        {
          v71 = *((_QWORD *)this + 70);
          v72 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
          v73 = DXGPROCESS::GetCurrent();
          if ( v73 )
          {
            if ( *((struct _KTHREAD **)v73 + 15) == KeGetCurrentThread() )
            {
              v73 = 0LL;
            }
            else
            {
              KeEnterCriticalRegion();
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v73 + 112, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v76 = *((_DWORD *)v73 + 32);
                  if ( v76 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v74, &EventBlockThread, v75, v76);
                }
                ExAcquirePushLockExclusiveEx((char *)v73 + 112, 0LL);
              }
              *((_QWORD *)v73 + 15) = KeGetCurrentThread();
            }
            v54 = v124;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v72 + 8) + 128LL))(v71, 0LL, v70);
          if ( v73 )
          {
            *((_QWORD *)v73 + 15) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v73 + 112, 0LL);
            KeLeaveCriticalRegion();
          }
          *(_QWORD *)(*(_QWORD *)(v65 + 48) + 8LL) = 0LL;
        }
        v66 = v131;
        v77 = *(void **)(*(_QWORD *)(v65 + 48) + 16LL);
        if ( v77 )
        {
          v121[(unsigned int)v127] = v77;
          LODWORD(v127) = v127 + 1;
          *(_QWORD *)(*(_QWORD *)(v65 + 48) + 16LL) = 0LL;
        }
        goto LABEL_114;
      }
    }
    else if ( v56 )
    {
      goto LABEL_114;
    }
    if ( !*(_QWORD *)v54 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v57);
      *(_QWORD *)(v78 + 24) = 1792LL;
      WdLogEvent5_WdAssertion(v78);
    }
    v79 = *(unsigned int *)(*(_QWORD *)v54 + 4LL);
    if ( (v79 & 1) == 0 )
    {
      v80 = WdLogNewEntry5_WdAssertion(v79);
      *(_QWORD *)(v80 + 24) = 1793LL;
      WdLogEvent5_WdAssertion(v80);
    }
LABEL_114:
    if ( !*(_QWORD *)v54 || (*(_DWORD *)(*(_QWORD *)v54 + 4LL) & 1) == 0 )
    {
      v81 = *(void **)(v65 + 48);
      if ( v81 )
      {
        DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(*(DXGADAPTERALLOCATION **)(v65 + 48));
        operator delete(v81);
      }
    }
    DXGALLOCATION::~DXGALLOCATION((DXGALLOCATION *)v65);
    ExFreePoolWithTag((PVOID)v65, 0);
    v65 = v66;
  }
  while ( v66 );
  v59 = this;
  v55 = v123;
LABEL_120:
  if ( v56 )
  {
    v61 = *(_QWORD *)v54 == 0LL;
    v129 = v55;
    LODWORD(v130) = !v61;
    if ( (_DWORD)v127 )
    {
      v57 = (__int64)v121;
      v128 = v121;
      goto LABEL_125;
    }
    v128 = 0LL;
    if ( v55 )
    {
LABEL_125:
      v82 = *((_QWORD *)v59 + 2);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v57, &EventProfilerEnter, a3, 5005);
      v83 = PsGetCurrentProcess(v57);
      v86 = PsGetProcessDxgProcess(v83, v84);
      v87 = v86 + 88;
      if ( !v86 )
        v87 = 0LL;
      v88 = 0;
      if ( v87 && *(struct _KTHREAD **)(v87 + 8) == KeGetCurrentThread() )
      {
        v89 = WdLogNewEntry5_WdAssertion(v85);
        *(_QWORD *)(v89 + 24) = 1142LL;
        WdLogEvent5_WdAssertion(v89);
      }
      if ( v86 )
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v87, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v92 = *(_DWORD *)(v87 + 16);
            if ( v92 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v90, &EventBlockThread, v91, v92);
          }
          ExAcquirePushLockExclusiveEx(v87, 0LL);
        }
        v88 = 2;
        *(_QWORD *)(v87 + 8) = KeGetCurrentThread();
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v82 + 16), 1);
      v94 = KeGetCurrentIrql();
      v95 = 0LL;
      if ( v94 < 2u )
      {
        v96 = KeGetCurrentThread();
        if ( !v96 )
        {
          v97 = WdLogNewEntry5_WdAssertion(v93);
          *(_QWORD *)(v97 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v97);
        }
        v98 = PsGetCurrentProcessSessionId();
        if ( v98
          && (unsigned int)PsGetThreadSessionId(v96) == v98
          && (v99 = PsGetThreadWin32Thread(v96)) != 0
          && *(_QWORD *)v99 )
        {
          v95 = *(_QWORD *)(*(_QWORD *)v99 + 80LL);
          if ( v95 )
          {
            v100 = *(_DWORD *)(v95 + 136);
            goto LABEL_152;
          }
        }
        else
        {
          v95 = 0LL;
        }
      }
      v100 = 0;
LABEL_152:
      v104 = (*(int (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v82 + 16) + 336LL))(
               *(_QWORD *)(*(_QWORD *)(v82 + 16) + 240LL),
               &v127);
      v105 = KeGetCurrentIrql();
      if ( v94 != (_BYTE)v105 )
      {
        v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v105, v101, v102);
        v106[3] = 275LL;
        v106[4] = 16LL;
        v106[5] = v82;
        v106[6] = v94;
        v107 = KeGetCurrentIrql();
        v106[7] = v107;
        WdLogEvent5_WdCriticalError(v106);
      }
      if ( v95 && *(_DWORD *)(v95 + 136) != v100 )
      {
        v108 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v105, v101, v102);
        v108[3] = 275LL;
        v108[4] = 25LL;
        v108[5] = *(int *)(v95 + 136);
        v108[6] = v100;
        v108[7] = 0LL;
        WdLogEvent5_WdCriticalError(v108);
      }
      v109 = (_QWORD *)WdLogNewEntry5_WdTrace(v105, v101, v102, v103);
      v109[3] = v104;
      v109[4] = (unsigned int)v130;
      v109[5] = v129;
      v109[6] = (unsigned int)v127;
      v110 = v128;
      if ( v128 )
        v110 = (void **)*v128;
      v109[7] = v110;
      if ( (_DWORD)v104 )
      {
        v111 = WdLogNewEntry5_WdError(v110);
        *(_QWORD *)(v111 + 24) = v104;
        WdLogEvent5_WdError(v111);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v82 + 16));
      if ( v88 == 2 )
      {
        *(_QWORD *)(v87 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v87, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v57, &EventProfilerExit, v112, 5005);
    }
  }
  v113 = (char *)this + 112;
  if ( this != (DXGDEVICE *)-112LL && *((struct _KTHREAD **)this + 15) == KeGetCurrentThread() )
  {
    v114 = WdLogNewEntry5_WdAssertion(v57);
    *(_QWORD *)(v114 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v114);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v113, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v117 = *((_DWORD *)this + 32);
      if ( v117 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v115, &EventBlockThread, v116, v117);
    }
    ExAcquirePushLockExclusiveEx(v113, 0LL);
  }
  *((_QWORD *)this + 15) = KeGetCurrentThread();
  if ( --*((_DWORD *)this + 719) < 0 )
  {
    v119 = WdLogNewEntry5_WdAssertion(v115);
    *(_QWORD *)(v119 + 24) = 1120LL;
    WdLogEvent5_WdAssertion(v119);
  }
  if ( !*((_DWORD *)this + 719) )
    KeSetEvent(*((PRKEVENT *)this + 360), 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  ExReleasePushLockExclusiveEx(v113, 0LL);
  KeLeaveCriticalRegion();
}
