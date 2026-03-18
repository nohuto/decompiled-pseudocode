/*
 * XREFs of RtlpWalkFrameChain @ 0x14001D740
 * Callers:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpUnwindOpSlots @ 0x14001D3DC (RtlpUnwindOpSlots.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001F200 (RtlpLookupFunctionEntryForStackWalks.c)
 *     KeGetNextKernelStackSegment @ 0x140021688 (KeGetNextKernelStackSegment.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     RtlpWalkWowStack @ 0x14012D968 (RtlpWalkWowStack.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpTrivialFunction @ 0x14017E660 (RtlpTrivialFunction.c)
 *     RtlpCaptureContext @ 0x14018B540 (RtlpCaptureContext.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // r15d
  char v5; // r14
  int v7; // r13d
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *Process; // rsi
  _QWORD *i; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  int v17; // ebx
  int v18; // ebx
  int v19; // ett
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // r8
  _KTHREAD *v23; // r10
  int v24; // r9d
  char *v25; // rcx
  char v26; // dl
  unsigned __int64 v27; // rax
  char v28; // r8
  char NextKernelStackSegment; // cl
  __int64 v30; // rax
  _DWORD *v31; // rbx
  unsigned __int64 v32; // r13
  __int64 v33; // r11
  unsigned int *v34; // r9
  __int64 v35; // r14
  __int64 v36; // rsi
  unsigned int v37; // r15d
  int v38; // eax
  unsigned int v39; // edi
  unsigned __int8 v40; // dl
  __int64 v41; // rbx
  unsigned __int16 v42; // cx
  unsigned int v43; // ecx
  int v44; // eax
  char v45; // cl
  int v46; // r12d
  _BYTE *v47; // rcx
  char v48; // r8
  char v49; // dl
  int v50; // eax
  char v51; // dl
  char v52; // dl
  bool v53; // zf
  int v54; // eax
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rcx
  _DWORD *v57; // rax
  _BYTE *v58; // rdx
  char v59; // al
  __int64 v60; // rax
  int v61; // ecx
  int v62; // eax
  char v63; // al
  char v64; // cl
  __int64 v65; // r8
  char *v66; // rcx
  char v67; // r9
  __int64 v68; // r8
  char *v69; // rcx
  unsigned __int16 v70; // ax
  unsigned int v71; // r11d
  int v72; // r10d
  int v73; // edx
  unsigned int m; // r8d
  unsigned __int16 v75; // ax
  int v76; // edx
  int v77; // edx
  unsigned __int64 v78; // r10
  unsigned int v79; // r12d
  unsigned int *v80; // rdx
  __int64 v81; // rdi
  char v82; // r15
  unsigned int v83; // r14d
  __int64 v84; // rsi
  __int64 v85; // r9
  __int64 v86; // rdx
  char *v87; // rcx
  unsigned int v88; // edx
  unsigned int v89; // edx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r8
  unsigned __int64 v97; // rdx
  unsigned int v98; // eax
  __int64 n; // rcx
  _BYTE *v100; // rdx
  unsigned int v101; // eax
  _QWORD *v102; // rdx
  ULONG64 *v103; // rax
  ULONG64 v104; // rax
  bool v105; // zf
  _BYTE v106[32]; // [rsp+0h] [rbp-728h] BYREF
  char v107; // [rsp+40h] [rbp-6E8h] BYREF
  char v108; // [rsp+41h] [rbp-6E7h]
  int v109; // [rsp+44h] [rbp-6E4h]
  unsigned __int8 v110; // [rsp+48h] [rbp-6E0h]
  bool v111; // [rsp+49h] [rbp-6DFh]
  char v112; // [rsp+4Ah] [rbp-6DEh]
  unsigned int v113; // [rsp+4Ch] [rbp-6DCh] BYREF
  char *v114; // [rsp+50h] [rbp-6D8h] BYREF
  char *v115; // [rsp+58h] [rbp-6D0h] BYREF
  unsigned int v116; // [rsp+60h] [rbp-6C8h]
  int v117; // [rsp+64h] [rbp-6C4h]
  char v118; // [rsp+68h] [rbp-6C0h]
  unsigned __int8 CurrentIrql; // [rsp+69h] [rbp-6BFh]
  _BYTE *v120; // [rsp+70h] [rbp-6B8h]
  int v121; // [rsp+78h] [rbp-6B0h]
  int v122; // [rsp+7Ch] [rbp-6ACh]
  int v123; // [rsp+80h] [rbp-6A8h]
  unsigned __int16 v124; // [rsp+84h] [rbp-6A4h]
  unsigned int k; // [rsp+88h] [rbp-6A0h]
  int v126; // [rsp+8Ch] [rbp-69Ch]
  unsigned __int64 v127; // [rsp+90h] [rbp-698h]
  __int64 v128; // [rsp+98h] [rbp-690h]
  unsigned int *v129; // [rsp+A0h] [rbp-688h]
  int v130; // [rsp+A8h] [rbp-680h]
  int v131; // [rsp+ACh] [rbp-67Ch] BYREF
  _QWORD *j; // [rsp+B0h] [rbp-678h]
  struct _KTHREAD *v133; // [rsp+B8h] [rbp-670h]
  void *Teb; // [rsp+C0h] [rbp-668h]
  unsigned int v135; // [rsp+C8h] [rbp-660h]
  int v136; // [rsp+CCh] [rbp-65Ch]
  _QWORD *v137; // [rsp+D0h] [rbp-658h]
  unsigned int v138; // [rsp+D8h] [rbp-650h]
  unsigned __int64 v139; // [rsp+E0h] [rbp-648h]
  ULONG64 v140; // [rsp+E8h] [rbp-640h]
  unsigned __int64 v141; // [rsp+F0h] [rbp-638h]
  int v142; // [rsp+F8h] [rbp-630h]
  int v143; // [rsp+FCh] [rbp-62Ch]
  int v144; // [rsp+100h] [rbp-628h]
  int v145; // [rsp+104h] [rbp-624h]
  unsigned int v146; // [rsp+108h] [rbp-620h]
  __int64 v147; // [rsp+110h] [rbp-618h]
  struct _KPROCESS *v148; // [rsp+118h] [rbp-610h]
  __int64 v149; // [rsp+120h] [rbp-608h]
  _BYTE *v150; // [rsp+128h] [rbp-600h]
  unsigned __int64 v151; // [rsp+130h] [rbp-5F8h] BYREF
  unsigned __int64 v152; // [rsp+138h] [rbp-5F0h]
  __int64 v153; // [rsp+140h] [rbp-5E8h]
  __int64 v154; // [rsp+148h] [rbp-5E0h]
  __int64 v155; // [rsp+150h] [rbp-5D8h]
  unsigned __int64 v156; // [rsp+158h] [rbp-5D0h]
  unsigned __int64 v157; // [rsp+160h] [rbp-5C8h]
  unsigned __int64 v158; // [rsp+168h] [rbp-5C0h] BYREF
  _DWORD *v159; // [rsp+170h] [rbp-5B8h]
  unsigned __int64 v160; // [rsp+178h] [rbp-5B0h]
  _DWORD *v161; // [rsp+188h] [rbp-5A0h]
  unsigned __int64 v162; // [rsp+190h] [rbp-598h] BYREF
  _QWORD *v163; // [rsp+198h] [rbp-590h]
  __int128 v164; // [rsp+1A0h] [rbp-588h] BYREF
  __int64 v165; // [rsp+1B0h] [rbp-578h]
  struct _KTHREAD *v166; // [rsp+1B8h] [rbp-570h]
  char *v167; // [rsp+1C0h] [rbp-568h]
  _QWORD *v168; // [rsp+1D0h] [rbp-558h]
  _BYTE *v169; // [rsp+1E0h] [rbp-548h]
  struct _KTHREAD *v170; // [rsp+1E8h] [rbp-540h]
  unsigned __int64 v171; // [rsp+1F0h] [rbp-538h]
  struct _KTHREAD *v172; // [rsp+1F8h] [rbp-530h]
  _KPROCESS *v173; // [rsp+200h] [rbp-528h]
  _BYTE v174[144]; // [rsp+210h] [rbp-518h] BYREF
  __int64 v175; // [rsp+2A0h] [rbp-488h]
  unsigned __int64 *v176; // [rsp+2A8h] [rbp-480h]
  __int64 v177; // [rsp+2B0h] [rbp-478h]
  __int64 v178; // [rsp+2B8h] [rbp-470h]
  __int64 v179; // [rsp+2C0h] [rbp-468h]
  __int64 v180; // [rsp+2E8h] [rbp-440h]
  __int64 v181; // [rsp+2F0h] [rbp-438h]
  __int64 v182; // [rsp+2F8h] [rbp-430h]
  __int64 v183; // [rsp+300h] [rbp-428h]
  unsigned __int64 v184; // [rsp+308h] [rbp-420h]
  _QWORD v185[102]; // [rsp+3B0h] [rbp-378h] BYREF
  void *retaddr; // [rsp+728h] [rbp+0h]

  v4 = a4;
  v135 = a4;
  v5 = a3;
  v138 = a2;
  v7 = a1;
  v147 = a1;
  v8 = 0;
  v121 = 0;
  j = 0LL;
  v137 = 0LL;
  v149 = 0LL;
  v110 = 1;
  CurrentThread = KeGetCurrentThread();
  v133 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v148 = Process;
  Teb = 0LL;
  v127 = 0LL;
  v122 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v115, (__int64)&v114) )
    return 0LL;
  RtlpCaptureContext(v174);
  v107 = 0;
  v113 = 0;
  v111 = (v5 & 2) != 0;
  if ( (v5 & 1) == 0 )
  {
    if ( (dword_1403D00D8 & 1) == 0 )
      v8 = 0x80000000;
    v121 = v8;
  }
  v141 = 0LL;
  v140 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v172 = KeGetCurrentThread();
    if ( (v172->MiscFlags & 0x400) != 0 || (v170 = KeGetCurrentThread(), v170->ApcStateIndex == 1) )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v13 = (unsigned __int64)(i - 50);
    v127 = v13;
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( *(_BYTE *)(v13 + 43) != 2 && *(_WORD *)(v13 + 368) == 35 )
      {
        ++v113;
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v7,
                                (int)v13 + 360,
                                (_DWORD)Teb,
                                (unsigned int)&v113,
                                a2,
                                v4,
                                *(_DWORD *)(v13 + 344),
                                *(_DWORD *)(v13 + 384)) )
          goto LABEL_398;
      }
    }
    v141 = *(_QWORD *)(v127 + 384);
    v140 = *((_QWORD *)Teb + 1);
    if ( v140 <= v141 )
      return 0LL;
    if ( v140 != v141 && v140 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
      ;
    v137 = (_QWORD *)j[4];
    v110 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v164 = *(_OWORD *)&xmmword_14031EF70;
  v165 = qword_14031EF80;
  v14 = (unsigned __int64)v176;
  while ( 1 )
  {
    if ( v122 != 1 )
    {
      v15 = v184;
      if ( v184 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      {
        v16 = Process[1].ActiveProcessors.Bitmap[2];
        if ( !v16
          || Process == PsInitialSystemProcess
          || (v17 = *(_DWORD *)(v16 + 8), v17 == -1)
          || (v166 = KeGetCurrentThread(), v166->ApcStateIndex == 1)
          && (v173 = CurrentThread->Process, v17 != (unsigned int)MmGetSessionIdEx(v173, 15LL))
          || (CurrentThread->MiscFlags & 0x800) != 0
          || CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
        {
          v126 = 0;
          goto LABEL_398;
        }
        v18 = 1;
        v145 = 1;
        if ( v184 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql < 0xFu )
            __writecr8(0xFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock);
          }
          else
          {
            _m_prefetchw(&PsLoadedModuleSpinLock);
            v19 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
            if ( v19 == _InterlockedCompareExchange(
                          &PsLoadedModuleSpinLock,
                          (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                          PsLoadedModuleSpinLock & 0x7FFFFFFF) )
            {
              v118 = 1;
            }
            else
            {
              v118 = 0;
              ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock);
            }
          }
          v20 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
          while ( v20 )
          {
            v168 = v20;
            v171 = v15;
            if ( v15 <= v20[6] )
              v21 = -(v15 < (v20[5] & 0xFFFFFFFFFFFFFFFCuLL));
            else
              v21 = 1;
            if ( v21 >= 0 )
            {
              if ( v21 <= 0 )
              {
                v163 = v20;
                goto LABEL_60;
              }
              v20 = (_QWORD *)v20[1];
            }
            else
            {
              v20 = (_QWORD *)*v20;
            }
          }
          v163 = 0LL;
          v18 = 0;
          v145 = 0;
LABEL_60:
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
        v126 = v18;
        if ( !v18 )
          goto LABEL_398;
        v14 = (unsigned __int64)v176;
      }
    }
    if ( (v14 & 7) != 0 )
    {
LABEL_397:
      v108 = 0;
      goto LABEL_398;
    }
    if ( v14 < (unsigned __int64)v115 || v14 >= (unsigned __int64)v114 )
    {
      if ( v115 < MmSystemRangeStart )
        goto LABEL_397;
      KeQueryCurrentStackInformation(&v131, &v162, &v158);
      if ( v131 == 5 || !v131 )
        goto LABEL_397;
      v23 = KeGetCurrentThread();
      v24 = v131;
      if ( v131 != 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v23 != KeGetCurrentPrcb()->IdleThread )
        {
          v25 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
          if ( (unsigned __int64)&v25[-(unsigned int)KeKernelStackSize] <= v14 && v14 < (unsigned __int64)v25 )
          {
            v114 = v25;
            v115 = &v25[-(unsigned int)KeKernelStackSize];
            goto LABEL_91;
          }
        }
        v24 = v131;
      }
      v26 = 0;
      v27 = v151;
      if ( !v151 )
      {
        LOBYTE(v22) = 1;
        KeGetNextKernelStackSegment(v23, &v151, v22);
        v26 = v28;
        v27 = v151;
      }
      NextKernelStackSegment = 1;
      if ( v24 != 1 && v24 != 6 || !v26 )
      {
        NextKernelStackSegment = KeGetNextKernelStackSegment(v23, &v151, 0LL);
        v27 = v151;
      }
      if ( !NextKernelStackSegment )
        goto LABEL_397;
      v162 = v152;
      v158 = v27;
      if ( v14 < v152 || v14 >= v27 )
        goto LABEL_397;
      v115 = (char *)v152;
      v114 = (char *)v27;
    }
LABEL_91:
    v108 = 1;
    v30 = RtlpLookupFunctionEntryForStackWalks(v184, &v164);
    v31 = (_DWORD *)v30;
    v161 = (_DWORD *)v30;
    if ( v30 )
      break;
    if ( !*((_QWORD *)&v164 + 1) )
      goto LABEL_398;
    if ( v184 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v176 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v184 = *v176;
    v14 = (unsigned __int64)++v176;
LABEL_355:
    if ( !v184 )
    {
      if ( (v5 & 1) != 0 && Process[1].ActiveProcessors.Bitmap[7] && *(_BYTE *)(v127 + 43) == 2 )
      {
        v155 = *((_QWORD *)Teb + 657) + 4LL;
        if ( (v155 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlpWalkWowStack(
          v147,
          0,
          (_DWORD)Teb,
          (unsigned int)&v113,
          v138,
          v4,
          *(_DWORD *)(v155 + 180),
          *(_DWORD *)(v155 + 196) - 4);
      }
      goto LABEL_398;
    }
    if ( v122 )
    {
      if ( v122 != 1 )
      {
        if ( v122 != 2 )
          goto LABEL_398;
        if ( v184 < (unsigned __int64)MmSystemRangeStart && v184 <= (unsigned __int64)MmHighestUserAddress )
        {
          if ( v184 != *(_QWORD *)(v127 + 360) )
            goto LABEL_398;
          v149 = *(_QWORD *)(v127 + 384);
          if ( (v149 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v122 = 1;
          v14 = *(_QWORD *)(v149 + 72);
          v176 = (unsigned __int64 *)v14;
          v115 = (char *)v141;
          v114 = (char *)v140;
          if ( v137 )
            v127 = v137[26];
        }
        goto LABEL_392;
      }
      if ( v184 > (unsigned __int64)MmHighestUserAddress )
        goto LABEL_398;
      v102 = v137;
      if ( !v137 || v184 != *(_QWORD *)(v127 + 360) )
        goto LABEL_392;
      v122 = 2;
      v184 = v137[39];
      v14 = (unsigned __int64)(v137 + 40);
      v176 = v137 + 40;
      v177 = v137[31];
      v175 = v137[32];
      v179 = v137[33];
      v178 = v137[34];
      v180 = v137[35];
      v181 = v137[36];
      v182 = v137[37];
      v183 = v137[38];
      v167 = (char *)(j + 2);
      v137 = (_QWORD *)j[4];
      v103 = (ULONG64 *)j[5];
      if ( !v103 )
        goto LABEL_398;
      j = (_QWORD *)j[5];
      v115 = (char *)(v102 + 40);
      v104 = *v103;
      goto LABEL_391;
    }
    if ( (v5 & 1) == 0 && v184 < (unsigned __int64)MmSystemRangeStart )
      goto LABEL_398;
    if ( (v5 & 1) != 0 )
    {
      if ( v184 < (unsigned __int64)MmSystemRangeStart )
      {
        if ( v184 > (unsigned __int64)MmHighestUserAddress )
          goto LABEL_398;
        if ( v184 != *(_QWORD *)(v127 + 360) )
          goto LABEL_398;
        v122 = 1;
        if ( v137 )
        {
          v127 = v137[26];
          if ( v127 < (unsigned __int64)MmSystemRangeStart )
            goto LABEL_398;
        }
        v115 = (char *)v141;
        v104 = v140;
LABEL_391:
        v114 = (char *)v104;
        goto LABEL_392;
      }
      v105 = v113 == 0;
    }
    else
    {
      v105 = !v111;
    }
    if ( v105 )
    {
LABEL_392:
      if ( v113 >= v4 )
      {
        *(_QWORD *)(v147 + 8LL * (v113 - v4)) = v184;
        v14 = (unsigned __int64)v176;
      }
      if ( ++v113 >= v138 )
        goto LABEL_398;
    }
  }
  v143 = 0;
  v32 = v184;
  v33 = *((_QWORD *)&v164 + 1);
  v128 = *((_QWORD *)&v164 + 1);
  v34 = (unsigned int *)v30;
  v129 = (unsigned int *)v30;
  v159 = (_DWORD *)v30;
  v35 = 0LL;
  v136 = 0;
  v36 = *((_QWORD *)&v164 + 1) + *(unsigned int *)(v30 + 8);
  if ( v184 <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (v36 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v31 = v161;
  }
  v37 = *(_BYTE *)v36 & 7;
  if ( v107 )
  {
    if ( v8 < 0 && v37 < 2 )
    {
      if ( !(unsigned int)RtlpTrivialFunction(v31, *((_QWORD *)&v164 + 1), v184, v36) )
      {
        v38 = -1073741784;
        v14 = (unsigned __int64)v176;
        goto LABEL_346;
      }
      v35 = 1LL;
      v136 = 1;
      v34 = v129;
      v33 = v128;
    }
  }
  else
  {
    v35 = 1LL;
    v136 = 1;
  }
  v144 = v8 & 0x7FFFFFFF;
  v39 = v32 - *v31 - v33;
  v40 = *(_BYTE *)(v36 + 3);
  if ( (v40 & 0xF) == 0 )
  {
    v14 = (unsigned __int64)v176;
    goto LABEL_105;
  }
  if ( v39 >= *(unsigned __int8 *)(v36 + 1) || (*(_BYTE *)v36 & 0x20) != 0 )
  {
    v45 = *(_BYTE *)(v36 + 3);
    v44 = v40;
    v14 = (unsigned __int64)v176;
LABEL_115:
    v139 = *(_QWORD *)&v174[8 * (v45 & 0xF) + 120] - (int)(v44 & 0xFFFFFFF0);
  }
  else
  {
    v41 = 0LL;
    for ( k = 0; (unsigned int)v41 < *(unsigned __int8 *)(v36 + 2); k = v41 )
    {
      v42 = *(_WORD *)(v36 + 2 * v41 + 4);
      v124 = v42;
      if ( (HIBYTE(v42) & 0xF) == 3 )
        break;
      v41 = (unsigned int)RtlpUnwindOpSlots(v42) + (unsigned int)v41;
    }
    v43 = *(unsigned __int8 *)(v36 + 2 * v41 + 4);
    v14 = (unsigned __int64)v176;
    v34 = v129;
    v33 = v128;
    if ( v39 >= v43 )
    {
      v44 = *(unsigned __int8 *)(v36 + 3);
      v45 = *(_BYTE *)(v36 + 3);
      goto LABEL_115;
    }
LABEL_105:
    v139 = v14;
  }
  if ( (_DWORD)v35 )
    goto LABEL_228;
  v46 = 0;
  v117 = 0;
  if ( v37 >= 2 )
  {
    if ( *(_BYTE *)(v36 + 2) )
    {
      v70 = *(_WORD *)(v36 + 4);
      v124 = v70;
      if ( (HIBYTE(v70) & 0xF) == 6 )
      {
        v71 = (unsigned __int8)v70;
        v72 = v32 - v128;
        if ( (v70 & 0x1000) != 0 )
        {
          v73 = v34[1] - (unsigned __int8)v70;
          v130 = v73;
          if ( v72 - v73 < (unsigned int)(unsigned __int8)v70 )
          {
            v117 = 1;
LABEL_224:
            RtlpUnwindEpilogue(v128, v32, v72 - v73, v34, (__int64)v174, 0LL, (unsigned __int64 *)&v115, &v114);
            if ( v106 != (_BYTE *)-64LL )
              v107 = 0;
            v14 = (unsigned __int64)v176;
            goto LABEL_344;
          }
        }
        else
        {
          v130 = 0;
        }
        for ( m = 1; ; ++m )
        {
          k = m;
          if ( m >= *(unsigned __int8 *)(v36 + 2) )
            break;
          v75 = *(_WORD *)(v36 + 2LL * m + 4);
          v124 = v75;
          if ( (HIBYTE(v75) & 0xF) != 6 )
            break;
          v76 = HIBYTE(v75) >> 4 << 8;
          v53 = (unsigned __int8)v75 + v76 == 0;
          v77 = (unsigned __int8)v75 + v76;
          v130 = v77;
          if ( v53 )
            break;
          v34 = v129;
          v73 = v129[1] - v77;
          v130 = v73;
          if ( v72 - v73 < v71 )
          {
            v117 = 1;
            goto LABEL_224;
          }
        }
        v33 = v128;
      }
      v14 = (unsigned __int64)v176;
    }
    goto LABEL_228;
  }
  v47 = (_BYTE *)v32;
  v120 = (_BYTE *)v32;
  v142 = 0;
  v48 = *(_BYTE *)v32;
  if ( *(_BYTE *)v32 == 72 )
  {
    if ( *(_BYTE *)(v32 + 1) == 0x83 && *(_BYTE *)(v32 + 2) == 0xC4 )
    {
      v47 = (_BYTE *)(v32 + 4);
LABEL_132:
      v120 = v47;
      goto LABEL_133;
    }
    if ( *(_BYTE *)(v32 + 1) == 0x81 && *(_BYTE *)(v32 + 2) == 0xC4 )
    {
LABEL_131:
      v47 = (_BYTE *)(v32 + 7);
      goto LABEL_132;
    }
  }
  if ( (v48 & 0xFE) == 0x48 && *(_BYTE *)(v32 + 1) == 0x8D )
  {
    v49 = *(_BYTE *)(v32 + 2);
    v50 = v49 & 7;
    v35 = v50 | (8 * (v48 & 1u));
    v142 = v50 | (8 * (v48 & 1));
    if ( v142 )
    {
      if ( (_DWORD)v35 == (*(_BYTE *)(v36 + 3) & 0xF) )
      {
        v51 = v49 & 0xF8;
        if ( v51 == 96 )
        {
          v47 = (_BYTE *)(v32 + 4);
          goto LABEL_132;
        }
        if ( v51 != -96 )
          goto LABEL_133;
        goto LABEL_131;
      }
    }
  }
LABEL_133:
  while ( 2 )
  {
    if ( (*v47 & 0xF8) == 0x58 )
    {
      ++v47;
LABEL_138:
      v120 = v47;
      continue;
    }
    break;
  }
  if ( (*v47 & 0xF0) == 0x40 && (v47[1] & 0xF8) == 0x58 )
  {
    v47 += 2;
    goto LABEL_138;
  }
  if ( *v47 == 0xF2 )
    v120 = ++v47;
  v52 = *v47;
  if ( (unsigned __int8)(*v47 + 62) <= 1u || v52 == -13 && v47[1] == 0xC3 )
    goto LABEL_165;
  if ( ((v52 + 23) & 0xFD) != 0 )
  {
    if ( v52 != -1 || v47[1] != 37 )
    {
      if ( (v52 & 0xF8) == 0x48 && v47[1] == 0xFF )
      {
        v53 = (v47[2] & 0x38) == 32;
LABEL_150:
        if ( v53 )
        {
          v46 = 1;
          v117 = 1;
        }
      }
      goto LABEL_162;
    }
LABEL_165:
    v117 = 1;
    goto LABEL_166;
  }
  v150 = &v47[-v33];
  if ( v52 == -21 )
    v54 = (char)v47[1] + 2;
  else
    v54 = *(_DWORD *)(v47 + 1) + 5;
  v55 = (unsigned __int64)&v47[v54 - v33];
  v150 = (_BYTE *)v55;
  v56 = *v34;
  if ( v55 < v56 || v55 >= v34[1] )
  {
    v57 = (_DWORD *)RtlpSameFunction(v34, v33, v55 + v33);
    if ( v57 && v55 != *v57 )
    {
      v14 = (unsigned __int64)v176;
      v33 = v128;
      goto LABEL_162;
    }
    v14 = (unsigned __int64)v176;
    goto LABEL_165;
  }
  if ( v55 == v56 )
  {
    v53 = (*(_BYTE *)v36 & 0x20) == 0;
    goto LABEL_150;
  }
LABEL_162:
  if ( !v46 )
  {
LABEL_228:
    v78 = v139;
    v157 = v139;
    v79 = 0;
    v146 = 0;
    v80 = v129;
    while ( 1 )
    {
      v81 = 0LL;
      v109 = 0;
      v82 = 0;
      v112 = 0;
      v83 = v32 - v33 - *v80;
      v84 = v33 + v80[2];
      if ( v32 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v84 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int64)v176;
      }
      while ( (unsigned int)v81 < *(unsigned __int8 *)(v84 + 2) )
      {
        v85 = *(unsigned __int8 *)(v84 + 2 * v81 + 5) >> 4;
        v86 = v84 + 2 * v81;
        if ( v83 < *(unsigned __int8 *)(v86 + 4) )
        {
          v81 = (unsigned int)RtlpUnwindOpSlots(*(_WORD *)(v86 + 4)) + (unsigned int)v81;
          v14 = (unsigned __int64)v176;
          v78 = v157;
        }
        else
        {
          switch ( *(_BYTE *)(v84 + 2 * v81 + 5) & 0xF )
          {
            case 0:
              v87 = (char *)v14;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v14 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v87 < v115 || v87 > v114 - 8) )
                goto LABEL_186;
              *(_QWORD *)&v174[8 * v85 + 120] = *(_QWORD *)v87;
              v14 = (unsigned __int64)(v176 + 1);
              goto LABEL_302;
            case 1:
              v81 = (unsigned int)(v81 + 1);
              v109 = v81;
              v88 = *(unsigned __int16 *)(v84 + 2 * v81 + 4);
              v116 = v88;
              if ( (_DWORD)v85 )
              {
                v81 = (unsigned int)(v81 + 1);
                v109 = v81;
                v89 = (*(unsigned __int16 *)(v84 + 2 * v81 + 4) << 16) + v88;
              }
              else
              {
                v89 = 8 * v88;
              }
              v116 = v89;
              v14 += v89;
              goto LABEL_302;
            case 2:
              v14 += (unsigned int)(8 * v85 + 8);
              goto LABEL_302;
            case 3:
              v176 = *(unsigned __int64 **)&v174[8 * (*(_BYTE *)(v84 + 3) & 0xF) + 120];
              v14 = (unsigned __int64)v176 - (*(_BYTE *)(v84 + 3) & 0xF0);
              goto LABEL_302;
            case 4:
              v81 = (unsigned int)(v81 + 1);
              v109 = v81;
              v116 = 8 * *(unsigned __int16 *)(v84 + 2 * v81 + 4);
              v90 = v78 + v116;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v90 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v90 < (unsigned __int64)v115 || v90 > (unsigned __int64)(v114 - 8)) )
                goto LABEL_186;
              *(_QWORD *)&v174[8 * v85 + 120] = *(_QWORD *)v90;
              v14 = (unsigned __int64)v176;
              break;
            case 5:
              v81 = (unsigned int)(v81 + 2);
              v109 = v81;
              v116 = *(unsigned __int16 *)(v84 + 2LL * (unsigned int)(v81 - 1) + 4);
              v116 += *(unsigned __int16 *)(v84 + 2 * v81 + 4) << 16;
              v91 = v78 + v116;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v91 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v91 < (unsigned __int64)v115 || v91 > (unsigned __int64)(v114 - 8)) )
                goto LABEL_186;
              *(_QWORD *)&v174[8 * v85 + 120] = *(_QWORD *)v91;
              v14 = (unsigned __int64)v176;
              break;
            case 6:
              LODWORD(v81) = v81 + 1;
              v109 = v81;
              break;
            case 7:
              LODWORD(v81) = v81 + 2;
              v109 = v81;
              break;
            case 8:
              v81 = (unsigned int)(v81 + 1);
              v109 = v81;
              v116 = 16 * *(unsigned __int16 *)(v84 + 2 * v81 + 4);
              v92 = v78 + v116;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v92 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v92 < (unsigned __int64)v115 || v92 > (unsigned __int64)(v114 - 16)) )
                goto LABEL_186;
              v93 = 2LL * (unsigned int)v85;
              v185[2 * (unsigned int)v85] = *(_QWORD *)v92;
              v94 = *(_QWORD *)(v92 + 8);
              goto LABEL_276;
            case 9:
              v81 = (unsigned int)(v81 + 2);
              v109 = v81;
              v116 = *(unsigned __int16 *)(v84 + 2LL * (unsigned int)(v81 - 1) + 4);
              v116 += *(unsigned __int16 *)(v84 + 2 * v81 + 4) << 16;
              v95 = v78 + v116;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v95 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v95 < (unsigned __int64)v115 || v95 > (unsigned __int64)(v114 - 16)) )
                goto LABEL_186;
              v93 = 2LL * (unsigned int)v85;
              v185[2 * (unsigned int)v85] = *(_QWORD *)v95;
              v94 = *(_QWORD *)(v95 + 8);
LABEL_276:
              v185[v93 + 1] = v94;
              v14 = (unsigned __int64)v176;
              break;
            case 0xA:
              v82 = 1;
              v112 = 1;
              v96 = v14;
              v160 = v14;
              v97 = v14 + 24;
              v156 = v14 + 24;
              if ( (_DWORD)v85 )
              {
                v96 = v14 + 8;
                v160 = v14 + 8;
                v97 = v14 + 32;
                v156 = v14 + 32;
              }
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v96 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( v106 != (_BYTE *)-88LL && (v96 < (unsigned __int64)v115 || v96 > (unsigned __int64)(v114 - 8)) )
                goto LABEL_186;
              if ( v32 <= (unsigned __int64)MmHighestUserAddress )
              {
                if ( (v97 & 3) != 0 )
                  ExRaiseDatatypeMisalignment();
                v14 = (unsigned __int64)v176;
              }
              if ( &v115 && (v97 < (unsigned __int64)v115 || v97 > (unsigned __int64)(v114 - 8)) )
                goto LABEL_186;
              v184 = *(_QWORD *)v96;
              v14 = *(_QWORD *)v97;
LABEL_302:
              v176 = (unsigned __int64 *)v14;
              break;
            default:
              RtlRaiseStatus(-1073741569);
          }
          v81 = (unsigned int)(v81 + 1);
        }
        v109 = v81;
      }
      if ( (*(_BYTE *)v84 & 0x20) == 0 )
        break;
      v98 = *(unsigned __int8 *)(v84 + 2);
      v109 = v98;
      if ( (v98 & 1) != 0 )
        v109 = ++v98;
      v80 = (unsigned int *)(v84 + 2 * (v98 + 2LL));
      v129 = v80;
      if ( v32 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( ((unsigned __int8)v80 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int64)v176;
      }
      v146 = ++v79;
      v33 = v128;
      if ( v79 > 0x20 )
        RtlRaiseStatus(-1073741569);
    }
    if ( v82 )
    {
      if ( v106 == (_BYTE *)-64LL )
      {
LABEL_334:
        v159 = v129;
        if ( v144 )
        {
          v100 = (_BYTE *)(v128 + v129[2]);
          if ( v32 <= (unsigned __int64)MmHighestUserAddress )
          {
            if ( ((unsigned __int8)v100 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v14 = (unsigned __int64)v176;
          }
          if ( (_DWORD)v32 - (_DWORD)v128 - *v129 >= (unsigned __int8)v100[1]
            && ((*v100 >> 3) & (unsigned __int8)v144) != 0 )
          {
            v101 = (unsigned __int8)v100[2];
            k = v101;
            if ( (v101 & 1) != 0 )
              k = ++v101;
            v169 = &v100[2 * v101 + 8];
          }
        }
        goto LABEL_344;
      }
      for ( n = 0LL; ; n = (unsigned int)(n + 1) )
      {
        v109 = n;
        if ( (unsigned int)n >= 3 )
          goto LABEL_332;
        if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v84 == *(&RtlpSafeMachineFrameEntries
                                                                                        + n) )
          break;
      }
      v82 = 0;
      v112 = 0;
    }
    else
    {
      if ( v32 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int64)v176;
      }
      if ( v106 != (_BYTE *)-88LL )
      {
        if ( v14 < (unsigned __int64)v115 )
          goto LABEL_186;
        if ( v14 > (unsigned __int64)(v114 - 8) )
        {
          v38 = -1073741784;
          goto LABEL_345;
        }
      }
      v184 = *(_QWORD *)v14;
      v14 += 8LL;
      v176 = (unsigned __int64 *)v14;
    }
LABEL_332:
    if ( &v107 )
      v107 = v82;
    goto LABEL_334;
  }
LABEL_166:
  v58 = (_BYTE *)v32;
  v120 = (_BYTE *)v32;
  if ( (*(_BYTE *)v32 & 0xF8) != 0x48 )
    goto LABEL_178;
  v59 = *(_BYTE *)(v32 + 1);
  if ( v59 == -125 )
  {
    v60 = *(char *)(v32 + 3);
    v58 = (_BYTE *)(v32 + 4);
    goto LABEL_177;
  }
  if ( v59 == -127 )
  {
    v61 = *(unsigned __int8 *)(v32 + 4) | (*(unsigned __int16 *)(v32 + 5) << 8);
    v62 = *(unsigned __int8 *)(v32 + 3);
    goto LABEL_176;
  }
  if ( v59 != -115 )
    goto LABEL_178;
  v63 = *(_BYTE *)(v32 + 2) & 0xF8;
  if ( v63 == 96 )
  {
    v14 = *(_QWORD *)&v174[8 * v35 + 120];
    v176 = (unsigned __int64 *)v14;
    v60 = *(char *)(v32 + 3);
    v58 = (_BYTE *)(v32 + 4);
  }
  else
  {
    if ( v63 != -96 )
      goto LABEL_178;
    v61 = *(unsigned __int8 *)(v32 + 4) | (*(unsigned __int16 *)(v32 + 5) << 8);
    v62 = *(unsigned __int8 *)(v32 + 3);
    v14 = *(_QWORD *)&v174[8 * v35 + 120];
    v176 = (unsigned __int64 *)v14;
LABEL_176:
    v58 = (_BYTE *)(v32 + 7);
    v60 = v62 | (v61 << 8);
  }
LABEL_177:
  v14 += v60;
  v120 = v58;
  v176 = (unsigned __int64 *)v14;
LABEL_178:
  while ( 2 )
  {
    v64 = *v58;
    if ( (*v58 & 0xF8) == 0x58 )
    {
      v65 = v64 & 7;
      v66 = (char *)v14;
      if ( v32 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int64)v176;
      }
      if ( v106 != (_BYTE *)-88LL && (v66 < v115 || v66 > v114 - 8) )
        goto LABEL_186;
      *(_QWORD *)&v174[8 * v65 + 120] = *(_QWORD *)v66;
      v14 = (unsigned __int64)(v176 + 1);
      ++v58;
LABEL_199:
      v120 = v58;
      v176 = (unsigned __int64 *)v14;
      continue;
    }
    break;
  }
  if ( (v64 & 0xF0) == 0x40 )
  {
    v67 = v58[1];
    if ( (v67 & 0xF8) == 0x58 )
    {
      v68 = v67 & 7 | (8 * (v64 & 1u));
      v69 = (char *)v14;
      if ( v32 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v14 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (unsigned __int64)v176;
      }
      if ( v106 != (_BYTE *)-88LL )
      {
        if ( v69 < v115 )
          goto LABEL_186;
        if ( v69 > v114 - 8 )
        {
          v38 = -1073741784;
          goto LABEL_345;
        }
      }
      *(_QWORD *)&v174[8 * v68 + 120] = *(_QWORD *)v69;
      v14 = (unsigned __int64)(v176 + 1);
      v58 += 2;
      goto LABEL_199;
    }
  }
  if ( v32 <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (v14 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (unsigned __int64)v176;
  }
  if ( v106 == (_BYTE *)-88LL )
    goto LABEL_208;
  if ( v14 < (unsigned __int64)v115 )
  {
LABEL_186:
    v38 = -1073741784;
    goto LABEL_345;
  }
  if ( v14 > (unsigned __int64)(v114 - 8) )
  {
    v38 = -1073741784;
    goto LABEL_345;
  }
LABEL_208:
  v184 = *(_QWORD *)v14;
  v14 += 8LL;
  v176 = (unsigned __int64 *)v14;
  if ( v106 != (_BYTE *)-64LL )
    v107 = 0;
LABEL_344:
  v38 = 0;
LABEL_345:
  CurrentThread = v133;
  v8 = v121;
LABEL_346:
  v123 = v38;
  v143 = v38;
  if ( v38 >= 0 )
  {
    Process = v148;
    v4 = v135;
    if ( v107 )
      v111 = 0;
    v5 = a3;
    goto LABEL_355;
  }
LABEL_398:
  if ( (a3 & 1) != 0 && !v110 )
    v133->MiscFlags &= ~0x20u;
  return v113;
}
