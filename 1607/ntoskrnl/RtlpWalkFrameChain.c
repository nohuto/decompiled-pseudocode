/*
 * XREFs of RtlpWalkFrameChain @ 0x14004F0A0
 * Callers:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlpUnwindEpilogue @ 0x1400B1AE0 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400B1C9C (RtlpUnwindOpSlots.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     KeGetNextKernelStackSegment @ 0x1400EEA2C (KeGetNextKernelStackSegment.c)
 *     PspGetBaseTrapFrame @ 0x1400F1130 (PspGetBaseTrapFrame.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpWalkWowStack @ 0x14010EBD8 (RtlpWalkWowStack.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x1401599F0 (RtlpTrivialFunction.c)
 *     RtlpCaptureContext @ 0x140167470 (RtlpCaptureContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  char v5; // si
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *Process; // r15
  unsigned __int64 v10; // rax
  int v11; // ebx
  int v12; // ebx
  int v13; // ett
  _QWORD *v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  _DWORD *v18; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // r8
  unsigned int *v21; // r9
  int v22; // edi
  __int64 v23; // rsi
  unsigned int v24; // r15d
  unsigned int v25; // r14d
  __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __int64 v28; // rbx
  char v29; // r15
  unsigned int v30; // esi
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned __int64 *v34; // rcx
  unsigned __int64 v35; // rcx
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rdx
  unsigned __int64 v39; // r13
  unsigned int v40; // edx
  unsigned int v41; // edx
  int v42; // edi
  __int16 v43; // ax
  unsigned int v44; // r11d
  int v45; // r10d
  int v46; // edx
  unsigned int m; // r8d
  __int16 v48; // ax
  int v49; // edx
  int v50; // edx
  _BYTE *v51; // rdx
  unsigned int v52; // eax
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  char v56; // cl
  int v57; // eax
  __int64 k; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 *v60; // rcx
  _BYTE *v61; // rdx
  __int64 v62; // r14
  char v63; // cl
  char v64; // cl
  unsigned int v65; // eax
  _QWORD *v66; // rdx
  unsigned __int64 *v67; // rax
  unsigned __int64 **v68; // rax
  char v69; // r8
  int v70; // eax
  __int64 v71; // r8
  _KTHREAD *v72; // r10
  int v73; // r9d
  char v74; // dl
  unsigned __int64 v75; // rax
  char v76; // r8
  char NextKernelStackSegment; // cl
  __int64 BaseTrapFrame; // r9
  unsigned __int64 v79; // rdx
  char *v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rcx
  char v84; // r8
  int v85; // eax
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rcx
  _DWORD *v88; // rax
  _BYTE *v89; // rdx
  char v90; // al
  __int64 v91; // rax
  int v92; // ecx
  int v93; // eax
  char v94; // al
  char v95; // cl
  __int64 v96; // r8
  unsigned __int64 *v97; // rcx
  char v98; // r9
  __int64 v99; // r8
  unsigned __int64 *v100; // rcx
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // r8
  _BYTE v103[32]; // [rsp+0h] [rbp-718h] BYREF
  char v104; // [rsp+40h] [rbp-6D8h] BYREF
  char v105; // [rsp+41h] [rbp-6D7h]
  bool v106; // [rsp+42h] [rbp-6D6h]
  int v107; // [rsp+44h] [rbp-6D4h]
  char v108; // [rsp+48h] [rbp-6D0h]
  unsigned __int8 v109; // [rsp+49h] [rbp-6CFh]
  unsigned int v110; // [rsp+4Ch] [rbp-6CCh] BYREF
  unsigned __int64 *v111; // [rsp+50h] [rbp-6C8h] BYREF
  unsigned int v112; // [rsp+58h] [rbp-6C0h]
  unsigned __int64 v113; // [rsp+60h] [rbp-6B8h] BYREF
  char v114; // [rsp+68h] [rbp-6B0h]
  unsigned __int8 CurrentIrql; // [rsp+69h] [rbp-6AFh]
  int v116; // [rsp+6Ch] [rbp-6ACh]
  __int64 v117; // [rsp+70h] [rbp-6A8h]
  _BYTE *v118; // [rsp+78h] [rbp-6A0h]
  __int16 v119; // [rsp+80h] [rbp-698h]
  unsigned int j; // [rsp+84h] [rbp-694h]
  int v121; // [rsp+88h] [rbp-690h]
  int v122; // [rsp+8Ch] [rbp-68Ch]
  int v123; // [rsp+90h] [rbp-688h]
  unsigned int *v124; // [rsp+98h] [rbp-680h]
  unsigned __int64 v125; // [rsp+A0h] [rbp-678h]
  int v126; // [rsp+A8h] [rbp-670h] BYREF
  int v127; // [rsp+ACh] [rbp-66Ch]
  int v128; // [rsp+B0h] [rbp-668h]
  _QWORD *i; // [rsp+B8h] [rbp-660h]
  void *Teb; // [rsp+C0h] [rbp-658h]
  int v131; // [rsp+C8h] [rbp-650h]
  unsigned int v132; // [rsp+CCh] [rbp-64Ch]
  unsigned int v133; // [rsp+D0h] [rbp-648h]
  unsigned int v134; // [rsp+D4h] [rbp-644h]
  _QWORD *v135; // [rsp+D8h] [rbp-640h]
  struct _KTHREAD *v136; // [rsp+E0h] [rbp-638h]
  unsigned __int64 v137; // [rsp+E8h] [rbp-630h]
  unsigned __int64 v138; // [rsp+F0h] [rbp-628h]
  unsigned __int64 v139; // [rsp+F8h] [rbp-620h]
  int v140; // [rsp+100h] [rbp-618h]
  int v141; // [rsp+104h] [rbp-614h]
  int v142; // [rsp+108h] [rbp-610h]
  int v143; // [rsp+10Ch] [rbp-60Ch]
  _BYTE *v144; // [rsp+110h] [rbp-608h]
  struct _KPROCESS *v145; // [rsp+118h] [rbp-600h]
  __int64 v146; // [rsp+120h] [rbp-5F8h]
  __int64 v147; // [rsp+128h] [rbp-5F0h]
  _QWORD *v148; // [rsp+138h] [rbp-5E0h]
  unsigned __int64 v149; // [rsp+140h] [rbp-5D8h] BYREF
  unsigned __int64 v150; // [rsp+148h] [rbp-5D0h] BYREF
  _DWORD *v151; // [rsp+150h] [rbp-5C8h]
  unsigned __int64 v152; // [rsp+158h] [rbp-5C0h]
  unsigned __int64 v153; // [rsp+160h] [rbp-5B8h]
  _DWORD *v154; // [rsp+168h] [rbp-5B0h]
  __int64 v155; // [rsp+170h] [rbp-5A8h]
  _QWORD v156[4]; // [rsp+178h] [rbp-5A0h] BYREF
  __int128 v157; // [rsp+198h] [rbp-580h] BYREF
  __int64 v158; // [rsp+1A8h] [rbp-570h]
  struct _KTHREAD *v159; // [rsp+1B0h] [rbp-568h]
  struct _KTHREAD *v160; // [rsp+1B8h] [rbp-560h]
  struct _KPROCESS *v161; // [rsp+1C0h] [rbp-558h]
  _QWORD *v162; // [rsp+1C8h] [rbp-550h]
  unsigned __int64 v163; // [rsp+1D0h] [rbp-548h]
  _BYTE *v164; // [rsp+1D8h] [rbp-540h]
  char *v165; // [rsp+1E0h] [rbp-538h]
  _BYTE v166[144]; // [rsp+200h] [rbp-518h] BYREF
  __int64 v167; // [rsp+290h] [rbp-488h]
  unsigned __int64 *v168; // [rsp+298h] [rbp-480h]
  __int64 v169; // [rsp+2A0h] [rbp-478h]
  __int64 v170; // [rsp+2A8h] [rbp-470h]
  __int64 v171; // [rsp+2B0h] [rbp-468h]
  __int64 v172; // [rsp+2D8h] [rbp-440h]
  __int64 v173; // [rsp+2E0h] [rbp-438h]
  __int64 v174; // [rsp+2E8h] [rbp-430h]
  __int64 v175; // [rsp+2F0h] [rbp-428h]
  unsigned __int64 v176; // [rsp+2F8h] [rbp-420h]
  _QWORD v177[102]; // [rsp+3A0h] [rbp-378h] BYREF
  void *retaddr; // [rsp+718h] [rbp+0h]

  v133 = a4;
  v5 = a3;
  v134 = a2;
  v7 = a1;
  v147 = a1;
  v127 = 0;
  i = 0LL;
  v135 = 0LL;
  v146 = 0LL;
  v109 = 1;
  CurrentThread = KeGetCurrentThread();
  v136 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v145 = Process;
  Teb = 0LL;
  v125 = 0LL;
  v122 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v113, (__int64)&v111) )
    return 0LL;
  RtlpCaptureContext(v166);
  v104 = 0;
  v110 = 0;
  v106 = (v5 & 2) != 0;
  if ( (v5 & 1) == 0 && (dword_1403A9134 & 1) == 0 )
    v127 = 0x80000000;
  v138 = 0LL;
  v139 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v159 = KeGetCurrentThread();
    if ( (v159->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread);
    v125 = BaseTrapFrame;
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( *(_BYTE *)(BaseTrapFrame + 43) != 2 && *(_WORD *)(BaseTrapFrame + 368) == 35 )
      {
        v110 = 1;
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v7,
                                (int)BaseTrapFrame + 360,
                                (_DWORD)Teb,
                                (unsigned int)&v110,
                                a2,
                                a4,
                                *(_DWORD *)(BaseTrapFrame + 344),
                                *(_DWORD *)(BaseTrapFrame + 384)) )
          goto LABEL_419;
      }
    }
    v138 = *(_QWORD *)(v125 + 384);
    v79 = *((_QWORD *)Teb + 1);
    v139 = v79;
    if ( v79 <= v138 )
      return 0LL;
    if ( v79 > 0x7FFFFFFF0000LL && v79 != v138 )
      MEMORY[0x7FFFFFFF0000] = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v135 = (_QWORD *)i[4];
    v109 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  memset(v156, 0, sizeof(v156));
  v157 = *(_OWORD *)&xmmword_1402F6FB0;
  v158 = qword_1402F6FC0;
  v16 = (unsigned __int64)v168;
  while ( 1 )
  {
    v38 = 0x8000000000LL;
    if ( v122 != 1 )
    {
      v39 = v176;
      if ( v176 >= qword_140326950 && v176 < qword_140326950 + 0x8000000000LL )
      {
        v10 = Process[1].ActiveProcessors.Bitmap[2];
        if ( !v10
          || Process == PsInitialSystemProcess
          || (v11 = *(_DWORD *)(v10 + 8), v11 == -1)
          || (v160 = KeGetCurrentThread(), v160->ApcStateIndex == 1)
          && (v161 = CurrentThread->Process, v11 != (unsigned int)MmGetSessionIdEx(v161))
          || (CurrentThread->MiscFlags & 0x800) != 0
          || CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
        {
          v123 = 0;
          goto LABEL_419;
        }
        v12 = 1;
        v140 = 1;
        if ( v176 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql < 0xFu )
            __writecr8(0xFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v38) = -1;
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, v38);
          }
          else
          {
            _m_prefetchw(&PsLoadedModuleSpinLock);
            v13 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
            if ( v13 == _InterlockedCompareExchange(
                          &PsLoadedModuleSpinLock,
                          (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                          PsLoadedModuleSpinLock & 0x7FFFFFFF) )
            {
              v114 = 1;
            }
            else
            {
              v114 = 0;
              LOBYTE(v38) = -1;
              ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, v38);
            }
          }
          v14 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
          while ( v14 )
          {
            v162 = v14;
            v163 = v39;
            if ( v39 > v14[6] )
              v15 = 1;
            else
              v15 = -(v39 < (v14[5] & 0xFFFFFFFFFFFFFFFCuLL));
            if ( v15 < 0 )
            {
              v14 = (_QWORD *)*v14;
            }
            else
            {
              if ( v15 <= 0 )
              {
                v148 = v14;
                goto LABEL_26;
              }
              v14 = (_QWORD *)v14[1];
            }
          }
          v148 = 0LL;
          v12 = 0;
          v140 = 0;
LABEL_26:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
          }
          else
          {
            _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
            _InterlockedDecrement(&PsLoadedModuleSpinLock);
          }
          __writecr8(CurrentIrql);
        }
        v123 = v12;
        if ( !v12 )
          goto LABEL_419;
        v16 = (unsigned __int64)v168;
      }
    }
    if ( (v16 & 7) != 0 )
    {
LABEL_418:
      v105 = 0;
      goto LABEL_419;
    }
    if ( v16 >= (unsigned __int64)v111 || v16 < v113 )
    {
      if ( v113 < 0xFFFF800000000000uLL )
        goto LABEL_418;
      KeQueryCurrentStackInformation(&v126, &v149, &v150);
      if ( v126 == 5 || !v126 )
        goto LABEL_418;
      v72 = KeGetCurrentThread();
      v73 = v126;
      if ( v126 != 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v72 != KeGetCurrentPrcb()->IdleThread )
        {
          v81 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
          if ( (unsigned __int64)&v81[-(unsigned int)KeKernelStackSize] <= v16 && v16 < (unsigned __int64)v81 )
          {
            v111 = (unsigned __int64 *)v81;
            v113 = (unsigned __int64)&v81[-(unsigned int)KeKernelStackSize];
            goto LABEL_34;
          }
        }
        v73 = v126;
      }
      v74 = 0;
      v75 = v156[0];
      if ( !v156[0] )
      {
        LOBYTE(v71) = 1;
        KeGetNextKernelStackSegment(v72, v156, v71);
        v74 = v76;
        v75 = v156[0];
      }
      NextKernelStackSegment = 1;
      if ( v73 != 1 && v73 != 6 || !v74 )
      {
        NextKernelStackSegment = KeGetNextKernelStackSegment(v72, v156, 0LL);
        v75 = v156[0];
      }
      if ( !NextKernelStackSegment )
        goto LABEL_418;
      v149 = v156[1];
      v150 = v75;
      if ( v16 < v156[1] || v16 >= v75 )
        goto LABEL_418;
      v113 = v156[1];
      v111 = (unsigned __int64 *)v75;
    }
LABEL_34:
    v105 = 1;
    v17 = RtlpLookupFunctionEntryForStackWalks(v176, &v157);
    v18 = (_DWORD *)v17;
    v151 = (_DWORD *)v17;
    if ( v17 )
      break;
    if ( !*((_QWORD *)&v157 + 1) )
      goto LABEL_419;
    if ( v176 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v168 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v176 = *v168;
    v16 = (unsigned __int64)++v168;
LABEL_78:
    if ( !v176 )
    {
      if ( (v5 & 1) != 0 && Process[1].ActiveProcessors.Bitmap[7] && *(_BYTE *)(v125 + 43) == 2 )
      {
        v155 = *((_QWORD *)Teb + 657) + 4LL;
        if ( (v155 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlpWalkWowStack(
          v147,
          0,
          (_DWORD)Teb,
          (unsigned int)&v110,
          v134,
          v133,
          *(_DWORD *)(v155 + 180),
          *(_DWORD *)(v155 + 196) - 4);
      }
      goto LABEL_419;
    }
    if ( v122 )
    {
      if ( v122 != 1 )
      {
        if ( v122 != 2 )
          goto LABEL_419;
        if ( v176 <= 0x7FFFFFFEFFFFLL )
        {
          if ( v176 != *(_QWORD *)(v125 + 360) )
            goto LABEL_419;
          v146 = *(_QWORD *)(v125 + 384);
          if ( (v146 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v122 = 1;
          v16 = *(_QWORD *)(v146 + 72);
          v168 = (unsigned __int64 *)v16;
          v113 = v138;
          v111 = (unsigned __int64 *)v139;
          if ( v135 )
            v125 = v135[26];
        }
        goto LABEL_85;
      }
      if ( v176 > 0x7FFFFFFEFFFFLL )
        goto LABEL_419;
      v66 = v135;
      if ( v135 && v176 == *(_QWORD *)(v125 + 360) )
      {
        v122 = 2;
        v176 = v135[39];
        v16 = (unsigned __int64)(v135 + 40);
        v168 = v135 + 40;
        v169 = v135[31];
        v167 = v135[32];
        v171 = v135[33];
        v170 = v135[34];
        v172 = v135[35];
        v173 = v135[36];
        v174 = v135[37];
        v175 = v135[38];
        v165 = (char *)(i + 2);
        v135 = (_QWORD *)i[4];
        v68 = (unsigned __int64 **)i[5];
        if ( !v68 )
          goto LABEL_419;
        i = (_QWORD *)i[5];
        v113 = (unsigned __int64)(v66 + 40);
        v67 = *v68;
LABEL_213:
        v111 = v67;
      }
LABEL_85:
      if ( v110 >= v133 )
      {
        *(_QWORD *)(v147 + 8LL * (v110 - v133)) = v176;
        v16 = (unsigned __int64)v168;
      }
      if ( ++v110 >= v134 )
        goto LABEL_419;
    }
    else
    {
      if ( (v5 & 1) == 0 && v176 < 0xFFFF800000000000uLL )
        goto LABEL_419;
      if ( (v5 & 1) != 0 )
      {
        if ( v176 < 0xFFFF800000000000uLL )
        {
          if ( v176 > 0x7FFFFFFEFFFFLL )
            goto LABEL_419;
          if ( v176 != *(_QWORD *)(v125 + 360) )
            goto LABEL_419;
          v122 = 1;
          if ( v135 )
          {
            v125 = v135[26];
            if ( v125 < 0xFFFF800000000000uLL )
              goto LABEL_419;
          }
          v113 = v138;
          v67 = (unsigned __int64 *)v139;
          goto LABEL_213;
        }
        v37 = v110 == 0;
      }
      else
      {
        v37 = !v106;
      }
      if ( v37 )
        goto LABEL_85;
    }
  }
  v141 = 0;
  v19 = v176;
  v20 = *((_QWORD *)&v157 + 1);
  v117 = *((_QWORD *)&v157 + 1);
  v21 = (unsigned int *)v17;
  v124 = (unsigned int *)v17;
  v154 = (_DWORD *)v17;
  v22 = 0;
  v131 = 0;
  v23 = *((_QWORD *)&v157 + 1) + *(unsigned int *)(v17 + 8);
  if ( v176 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v23 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v151;
  }
  v24 = *(_BYTE *)v23 & 7;
  if ( v104 )
  {
    if ( v127 < 0 && v24 < 2 )
    {
      if ( !(unsigned int)RtlpTrivialFunction(v18, v117, v176, v23) )
      {
        v36 = -1073741784;
        v16 = (unsigned __int64)v168;
        goto LABEL_74;
      }
      v22 = 1;
      v131 = 1;
      v21 = v124;
      v20 = v117;
    }
  }
  else
  {
    v22 = 1;
    v131 = 1;
  }
  v142 = v127 & 0x7FFFFFFF;
  v25 = v19 - *v18 - v20;
  v26 = *(unsigned __int8 *)(v23 + 3);
  if ( (v26 & 0xF) == 0 )
  {
    v16 = (unsigned __int64)v168;
    goto LABEL_40;
  }
  if ( v25 >= *(unsigned __int8 *)(v23 + 1) || (*(_BYTE *)v23 & 0x20) != 0 )
  {
    v56 = *(_BYTE *)(v23 + 3);
    v57 = (unsigned __int8)v26;
    v16 = (unsigned __int64)v168;
    goto LABEL_122;
  }
  v82 = 0LL;
  for ( j = 0; (unsigned int)v82 < *(unsigned __int8 *)(v23 + 2); j = v82 )
  {
    v83 = *(unsigned __int16 *)(v23 + 2 * v82 + 4);
    v119 = v83;
    if ( (BYTE1(v83) & 0xF) == 3 )
      break;
    v82 = (unsigned int)RtlpUnwindOpSlots(v83, v26, v20, v21) + (unsigned int)v82;
  }
  v16 = (unsigned __int64)v168;
  v21 = v124;
  v20 = v117;
  if ( v25 < *(unsigned __int8 *)(v23 + 2 * v82 + 4) )
  {
LABEL_40:
    v137 = v16;
  }
  else
  {
    v57 = *(unsigned __int8 *)(v23 + 3);
    v56 = *(_BYTE *)(v23 + 3);
LABEL_122:
    v137 = *(_QWORD *)&v166[8 * (v56 & 0xF) + 120] - (int)(v57 & 0xFFFFFFF0);
  }
  if ( v22 )
  {
LABEL_42:
    v27 = v137;
    v132 = 0;
    while ( 1 )
    {
      v28 = 0LL;
      v107 = 0;
      v29 = 0;
      v108 = 0;
      v30 = v19 - *v21 - v20;
      v31 = v20 + v21[2];
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v31 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      while ( (unsigned int)v28 < *(unsigned __int8 *)(v31 + 2) )
      {
        v32 = *(unsigned __int8 *)(v31 + 2 * v28 + 5) >> 4;
        v33 = v31 + 2 * v28;
        if ( v30 < *(unsigned __int8 *)(v33 + 4) )
        {
          v28 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v33 + 4), v33, 0x7FFFFFFEFFFFLL, v32)
              + (unsigned int)v28;
          v16 = (unsigned __int64)v168;
        }
        else
        {
          if ( (*(_BYTE *)(v31 + 2 * v28 + 5) & 0xF) != 0 )
          {
            if ( (*(_BYTE *)(v31 + 2 * v28 + 5) & 0xF) != 4 )
            {
              switch ( *(_BYTE *)(v31 + 2 * v28 + 5) & 0xF )
              {
                case 1:
                  v28 = (unsigned int)(v28 + 1);
                  v107 = v28;
                  v40 = *(unsigned __int16 *)(v31 + 2 * v28 + 4);
                  v112 = v40;
                  if ( (_DWORD)v32 )
                  {
                    v28 = (unsigned int)(v28 + 1);
                    v107 = v28;
                    v41 = (*(unsigned __int16 *)(v31 + 2 * v28 + 4) << 16) + v40;
                  }
                  else
                  {
                    v41 = 8 * v40;
                  }
                  v112 = v41;
                  v16 += v41;
                  goto LABEL_55;
                case 2:
                  v16 += (unsigned int)(8 * v32 + 8);
                  goto LABEL_55;
                case 3:
                  v168 = *(unsigned __int64 **)&v166[8 * (*(_BYTE *)(v31 + 3) & 0xF) + 120];
                  v16 = (unsigned __int64)v168 - (*(_BYTE *)(v31 + 3) & 0xF0);
                  goto LABEL_55;
                case 5:
                  v28 = (unsigned int)(v28 + 2);
                  v107 = v28;
                  v112 = *(unsigned __int16 *)(v31 + 2LL * (unsigned int)(v28 - 1) + 4);
                  v112 += *(unsigned __int16 *)(v31 + 2 * v28 + 4) << 16;
                  v101 = v27 + v112;
                  if ( v19 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v101 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v16 = (unsigned __int64)v168;
                  }
                  if ( &v113 && (v101 < v113 || v101 > (unsigned __int64)(v111 - 1)) )
                    goto LABEL_399;
                  *(_QWORD *)&v166[8 * v32 + 120] = *(_QWORD *)v101;
                  v16 = (unsigned __int64)v168;
                  goto LABEL_56;
                case 6:
                  LODWORD(v28) = v28 + 1;
                  v107 = v28;
                  goto LABEL_56;
                case 7:
                  LODWORD(v28) = v28 + 2;
                  v107 = v28;
                  goto LABEL_56;
                case 8:
                  v28 = (unsigned int)(v28 + 1);
                  v107 = v28;
                  v112 = 16 * *(unsigned __int16 *)(v31 + 2 * v28 + 4);
                  v53 = v27 + v112;
                  if ( v19 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v53 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v16 = (unsigned __int64)v168;
                  }
                  if ( &v113 && (v53 < v113 || v53 > (unsigned __int64)(v111 - 2)) )
                    goto LABEL_399;
                  v54 = 2LL * (unsigned int)v32;
                  v177[2 * (unsigned int)v32] = *(_QWORD *)v53;
                  v55 = *(_QWORD *)(v53 + 8);
                  goto LABEL_119;
                case 9:
                  v28 = (unsigned int)(v28 + 2);
                  v107 = v28;
                  v112 = *(unsigned __int16 *)(v31 + 2LL * (unsigned int)(v28 - 1) + 4);
                  v112 += *(unsigned __int16 *)(v31 + 2 * v28 + 4) << 16;
                  v102 = v27 + v112;
                  if ( v19 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v102 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v16 = (unsigned __int64)v168;
                  }
                  if ( &v113 && (v102 < v113 || v102 > (unsigned __int64)(v111 - 2)) )
                    goto LABEL_399;
                  v54 = 2LL * (unsigned int)v32;
                  v177[2 * (unsigned int)v32] = *(_QWORD *)v102;
                  v55 = *(_QWORD *)(v102 + 8);
LABEL_119:
                  v177[v54 + 1] = v55;
                  v16 = (unsigned __int64)v168;
                  goto LABEL_56;
                case 0xA:
                  v29 = 1;
                  v108 = 1;
                  v59 = v16;
                  v152 = v16;
                  v60 = (unsigned __int64 *)(v16 + 24);
                  v153 = v16 + 24;
                  if ( (_DWORD)v32 )
                  {
                    v59 = v16 + 8;
                    v152 = v16 + 8;
                    v60 = (unsigned __int64 *)(v16 + 32);
                    v153 = v16 + 32;
                  }
                  if ( v19 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( (v59 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v16 = (unsigned __int64)v168;
                  }
                  if ( &v113 && (v59 < v113 || v59 > (unsigned __int64)(v111 - 1)) )
                    goto LABEL_399;
                  if ( v19 <= 0x7FFFFFFEFFFFLL )
                  {
                    if ( ((unsigned __int8)v60 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    v16 = (unsigned __int64)v168;
                  }
                  if ( &v113 && ((unsigned __int64)v60 < v113 || v60 > v111 - 1) )
                    goto LABEL_399;
                  v176 = *(_QWORD *)v59;
                  v16 = *v60;
                  goto LABEL_55;
                default:
                  RtlRaiseStatus(-1073741569);
              }
            }
            v28 = (unsigned int)(v28 + 1);
            v107 = v28;
            v112 = 8 * *(unsigned __int16 *)(v31 + 2 * v28 + 4);
            v35 = v27 + v112;
            if ( v19 <= 0x7FFFFFFEFFFFLL )
            {
              if ( (v35 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v16 = (unsigned __int64)v168;
            }
            if ( &v113 && (v35 < v113 || v35 > (unsigned __int64)(v111 - 1)) )
              goto LABEL_399;
            *(_QWORD *)&v166[8 * v32 + 120] = *(_QWORD *)v35;
            v16 = (unsigned __int64)v168;
          }
          else
          {
            v34 = (unsigned __int64 *)v16;
            if ( v19 <= 0x7FFFFFFEFFFFLL )
            {
              if ( (v16 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v16 = (unsigned __int64)v168;
            }
            if ( &v113 && ((unsigned __int64)v34 < v113 || v34 > v111 - 1) )
              goto LABEL_399;
            *(_QWORD *)&v166[8 * v32 + 120] = *v34;
            v16 = (unsigned __int64)(v168 + 1);
LABEL_55:
            v168 = (unsigned __int64 *)v16;
          }
LABEL_56:
          v28 = (unsigned int)(v28 + 1);
        }
        v107 = v28;
      }
      if ( (*(_BYTE *)v31 & 0x20) == 0 )
        break;
      v65 = *(unsigned __int8 *)(v31 + 2);
      v107 = v65;
      if ( (v65 & 1) != 0 )
        v107 = ++v65;
      v21 = (unsigned int *)(v31 + 2 * (v65 + 2LL));
      v124 = v21;
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      ++v132;
      v20 = v117;
      if ( v132 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v29 )
    {
      if ( v103 != (_BYTE *)-64LL )
      {
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          v107 = k;
          if ( (unsigned int)k >= 3 )
            break;
          if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v31 == *(&RtlpSafeMachineFrameEntries
                                                                                          + k) )
          {
            v29 = 0;
            v108 = 0;
            goto LABEL_70;
          }
        }
        goto LABEL_70;
      }
    }
    else
    {
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v16 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      if ( &v113 && (v16 < v113 || v16 > (unsigned __int64)(v111 - 1)) )
      {
LABEL_399:
        v36 = -1073741784;
        goto LABEL_74;
      }
      v176 = *(_QWORD *)v16;
      v16 += 8LL;
      v168 = (unsigned __int64 *)v16;
LABEL_70:
      if ( &v104 )
        v104 = v29;
    }
    v154 = v124;
    if ( v142 )
    {
      v51 = (_BYTE *)(v117 + v124[2]);
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( ((unsigned __int8)v51 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      if ( (unsigned int)v19 - *v124 - (unsigned int)v117 >= (unsigned __int8)v51[1]
        && ((*v51 >> 3) & (unsigned __int8)v142) != 0 )
      {
        v52 = (unsigned __int8)v51[2];
        j = v52;
        if ( (v52 & 1) != 0 )
          j = ++v52;
        v164 = &v51[2 * v52 + 8];
      }
    }
LABEL_73:
    v36 = 0;
    goto LABEL_74;
  }
  v42 = 0;
  v116 = 0;
  if ( v24 >= 2 )
  {
    if ( !*(_BYTE *)(v23 + 2) )
      goto LABEL_42;
    v43 = *(_WORD *)(v23 + 4);
    v119 = v43;
    if ( (HIBYTE(v43) & 0xF) != 6 )
    {
LABEL_108:
      v16 = (unsigned __int64)v168;
      goto LABEL_42;
    }
    v44 = (unsigned __int8)v43;
    v45 = v19 - v20;
    if ( (v43 & 0x1000) != 0 )
    {
      v46 = v21[1] - (unsigned __int8)v43;
      v128 = v46;
      if ( v45 - v46 < (unsigned int)(unsigned __int8)v43 )
      {
        v116 = 1;
      }
      else
      {
LABEL_103:
        for ( m = 1; ; ++m )
        {
          j = m;
          if ( m >= *(unsigned __int8 *)(v23 + 2) )
            goto LABEL_107;
          v48 = *(_WORD *)(v23 + 2LL * m + 4);
          v119 = v48;
          if ( (HIBYTE(v48) & 0xF) != 6 )
          {
            v21 = v124;
LABEL_107:
            v20 = v117;
            goto LABEL_108;
          }
          v49 = HIBYTE(v48) >> 4 << 8;
          v37 = (unsigned __int8)v48 + v49 == 0;
          v50 = (unsigned __int8)v48 + v49;
          v128 = v50;
          v21 = v124;
          if ( v37 )
            goto LABEL_107;
          v46 = v124[1] - v50;
          v128 = v46;
          if ( v45 - v46 < v44 )
            break;
        }
        v116 = 1;
      }
      RtlpUnwindEpilogue(v117, v19, v45 - v46, (_DWORD)v21, (__int64)v166, 0LL, (__int64)&v113, (__int64)&v111);
      if ( v103 != (_BYTE *)-64LL )
        v104 = 0;
      v16 = (unsigned __int64)v168;
      goto LABEL_73;
    }
    v128 = 0;
    goto LABEL_103;
  }
  v61 = (_BYTE *)v19;
  v118 = (_BYTE *)v19;
  v62 = 0LL;
  v143 = 0;
  v63 = *(_BYTE *)v19;
  if ( *(_BYTE *)v19 == 72 )
  {
    if ( *(_BYTE *)(v19 + 1) == 0x83 && *(_BYTE *)(v19 + 2) == 0xC4 )
    {
      v61 = (_BYTE *)(v19 + 4);
      v118 = (_BYTE *)(v19 + 4);
      goto LABEL_150;
    }
    if ( *(_BYTE *)(v19 + 1) == 0x81 && *(_BYTE *)(v19 + 2) == 0xC4 )
    {
      v61 = (_BYTE *)(v19 + 7);
      v118 = (_BYTE *)(v19 + 7);
      goto LABEL_150;
    }
  }
  if ( (v63 & 0xFE) == 0x48 && *(_BYTE *)(v19 + 1) == 0x8D )
  {
    v69 = *(_BYTE *)(v19 + 2);
    v70 = v69 & 7;
    v62 = v70 | (8 * (v63 & 1u));
    v143 = v70 | (8 * (v63 & 1));
    if ( v143 && (_DWORD)v62 == (*(_BYTE *)(v23 + 3) & 0xF) )
    {
      v84 = v69 & 0xF8;
      if ( v84 != 96 )
      {
        v37 = v84 == -96;
        v20 = v117;
        if ( v37 )
        {
          v61 = (_BYTE *)(v19 + 7);
          v118 = (_BYTE *)(v19 + 7);
        }
        goto LABEL_150;
      }
      v61 = (_BYTE *)(v19 + 4);
      v118 = (_BYTE *)(v19 + 4);
    }
    v20 = v117;
  }
LABEL_150:
  while ( 2 )
  {
    if ( (*v61 & 0xF8) == 0x58 )
    {
      ++v61;
LABEL_309:
      v118 = v61;
      continue;
    }
    break;
  }
  if ( (*v61 & 0xF0) == 0x40 && (v61[1] & 0xF8) == 0x58 )
  {
    v61 += 2;
    goto LABEL_309;
  }
  if ( *v61 == 0xF2 )
    v118 = ++v61;
  v64 = *v61;
  if ( (unsigned __int8)(*v61 + 62) <= 1u || v64 == -13 && v61[1] == 0xC3 )
  {
LABEL_326:
    v116 = 1;
    goto LABEL_327;
  }
  if ( ((v64 + 23) & 0xFD) != 0 )
  {
    if ( v64 == -1 && v61[1] == 37 )
      goto LABEL_326;
    if ( (v64 & 0xF8) == 0x48 && v61[1] == 0xFF && (v61[2] & 0x38) == 0x20 )
    {
      v42 = 1;
      v116 = 1;
    }
  }
  else
  {
    v144 = &v61[-v20];
    if ( v64 == -21 )
      v85 = (char)v61[1] + 2;
    else
      v85 = *(_DWORD *)(v61 + 1) + 5;
    v86 = (unsigned __int64)&v61[v85 - v20];
    v144 = (_BYTE *)v86;
    v87 = *v21;
    if ( v86 < v87 || v86 >= v21[1] )
    {
      v88 = (_DWORD *)RtlpSameFunction(v21, v117, &v61[v85]);
      if ( !v88 || v86 == *v88 )
      {
        v16 = (unsigned __int64)v168;
        goto LABEL_326;
      }
      v16 = (unsigned __int64)v168;
      v21 = v124;
      v20 = v117;
    }
    else if ( v86 == v87 && (*(_BYTE *)v23 & 0x20) == 0 )
    {
      v42 = 1;
      v116 = 1;
    }
  }
  if ( !v42 )
    goto LABEL_42;
LABEL_327:
  v89 = (_BYTE *)v19;
  v118 = (_BYTE *)v19;
  if ( (*(_BYTE *)v19 & 0xF8) != 0x48 )
    goto LABEL_339;
  v90 = *(_BYTE *)(v19 + 1);
  if ( v90 == -125 )
  {
    v91 = *(char *)(v19 + 3);
    v89 = (_BYTE *)(v19 + 4);
    goto LABEL_338;
  }
  if ( v90 == -127 )
  {
    v92 = *(unsigned __int8 *)(v19 + 4) | (*(unsigned __int16 *)(v19 + 5) << 8);
    v93 = *(unsigned __int8 *)(v19 + 3);
    goto LABEL_337;
  }
  if ( v90 != -115 )
    goto LABEL_339;
  v94 = *(_BYTE *)(v19 + 2) & 0xF8;
  if ( v94 == 96 )
  {
    v16 = *(_QWORD *)&v166[8 * v62 + 120];
    v168 = (unsigned __int64 *)v16;
    v91 = *(char *)(v19 + 3);
    v89 = (_BYTE *)(v19 + 4);
  }
  else
  {
    if ( v94 != -96 )
      goto LABEL_339;
    v92 = *(unsigned __int8 *)(v19 + 4) | (*(unsigned __int16 *)(v19 + 5) << 8);
    v93 = *(unsigned __int8 *)(v19 + 3);
    v16 = *(_QWORD *)&v166[8 * v62 + 120];
    v168 = (unsigned __int64 *)v16;
LABEL_337:
    v89 = (_BYTE *)(v19 + 7);
    v91 = v93 | (v92 << 8);
  }
LABEL_338:
  v16 += v91;
  v118 = v89;
  v168 = (unsigned __int64 *)v16;
LABEL_339:
  while ( 2 )
  {
    v95 = *v89;
    if ( (*v89 & 0xF8) == 0x58 )
    {
      v96 = v95 & 7;
      v97 = (unsigned __int64 *)v16;
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v16 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      if ( &v113 && ((unsigned __int64)v97 < v113 || v97 > v111 - 1) )
      {
LABEL_347:
        v36 = -1073741784;
        goto LABEL_74;
      }
      *(_QWORD *)&v166[8 * v96 + 120] = *v97;
      v16 = (unsigned __int64)(v168 + 1);
      ++v89;
LABEL_360:
      v118 = v89;
      v168 = (unsigned __int64 *)v16;
      continue;
    }
    break;
  }
  if ( (v95 & 0xF0) == 0x40 )
  {
    v98 = v89[1];
    if ( (v98 & 0xF8) == 0x58 )
    {
      v99 = v98 & 7 | (8 * (v95 & 1u));
      v100 = (unsigned __int64 *)v16;
      if ( v19 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (v16 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int64)v168;
      }
      if ( &v113 )
      {
        if ( (unsigned __int64)v100 < v113 )
          goto LABEL_347;
        if ( v100 > v111 - 1 )
        {
          v36 = -1073741784;
          goto LABEL_74;
        }
      }
      *(_QWORD *)&v166[8 * v99 + 120] = *v100;
      v16 = (unsigned __int64)(v168 + 1);
      v89 += 2;
      goto LABEL_360;
    }
  }
  if ( v19 <= 0x7FFFFFFEFFFFLL )
  {
    if ( (v16 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (unsigned __int64)v168;
  }
  if ( !&v113 || v16 >= v113 && v16 <= (unsigned __int64)(v111 - 1) )
  {
    v176 = *(_QWORD *)v16;
    v16 += 8LL;
    v168 = (unsigned __int64 *)v16;
    if ( v103 != (_BYTE *)-64LL )
      v104 = 0;
    goto LABEL_73;
  }
  v36 = -1073741784;
LABEL_74:
  v121 = v36;
  v141 = v36;
  if ( v36 >= 0 )
  {
    CurrentThread = v136;
    Process = v145;
    if ( v104 )
      v106 = 0;
    v5 = a3;
    goto LABEL_78;
  }
  CurrentThread = v136;
  v5 = a3;
LABEL_419:
  if ( (v5 & 1) != 0 && !v109 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v110;
}
