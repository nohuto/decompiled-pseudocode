/*
 * XREFs of RtlpWalkFrameChain @ 0x140026220
 * Callers:
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140027FB0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
 *     PspGetBaseTrapFrame @ 0x140028498 (PspGetBaseTrapFrame.c)
 *     KeGetNextKernelStackSegment @ 0x14002BFA4 (KeGetNextKernelStackSegment.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlpWalkWowStack @ 0x1400F0200 (RtlpWalkWowStack.c)
 *     RtlpUnwindEpilogue @ 0x1400F34A4 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400F3634 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpTrivialFunction @ 0x14014FEB8 (RtlpTrivialFunction.c)
 *     RtlpCaptureContext @ 0x14015BA60 (RtlpCaptureContext.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // r15d
  char v5; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *Process; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  _DWORD *v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // r11
  unsigned int *v15; // r9
  int v16; // esi
  __int64 v17; // rdi
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned __int8 v20; // dl
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // rbx
  unsigned int v25; // esi
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rcx
  char v31; // r10
  int v32; // eax
  bool v33; // zf
  __int64 BaseTrapFrame; // r9
  ULONG64 v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rax
  int v39; // ebx
  int v40; // ebx
  int v41; // ett
  _QWORD *v42; // rcx
  int v43; // eax
  unsigned int v44; // edx
  unsigned int v45; // edx
  int v46; // ebx
  __int16 v47; // ax
  unsigned int v48; // r11d
  int v49; // r10d
  int v50; // edx
  unsigned int k; // r8d
  __int16 v52; // ax
  int v53; // edx
  int v54; // edx
  unsigned int v55; // eax
  unsigned int v56; // eax
  char v57; // cl
  int v58; // eax
  unsigned __int64 *v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _BYTE *v64; // rcx
  __int64 v65; // r14
  char v66; // dl
  char v67; // dl
  _QWORD *v68; // rdx
  char *v69; // rax
  char **v70; // rax
  int v71; // eax
  __int64 v72; // r8
  _KTHREAD *v73; // r10
  int v74; // r9d
  char v75; // dl
  unsigned __int64 v76; // rax
  char v77; // r8
  char NextKernelStackSegment; // cl
  char *v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rcx
  int v83; // eax
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // rcx
  _DWORD *v86; // rax
  _BYTE *v87; // rdx
  char v88; // al
  __int64 v89; // rax
  int v90; // ecx
  int v91; // eax
  char v92; // al
  char v93; // cl
  _QWORD *v94; // rcx
  char v95; // r9
  _QWORD *v96; // rcx
  _BYTE v97[32]; // [rsp+0h] [rbp-718h] BYREF
  char v98; // [rsp+40h] [rbp-6D8h] BYREF
  char v99; // [rsp+41h] [rbp-6D7h]
  char v100; // [rsp+42h] [rbp-6D6h]
  bool v101; // [rsp+43h] [rbp-6D5h]
  int v102; // [rsp+44h] [rbp-6D4h]
  unsigned __int8 v103; // [rsp+48h] [rbp-6D0h]
  unsigned int v104; // [rsp+4Ch] [rbp-6CCh] BYREF
  char *v105; // [rsp+50h] [rbp-6C8h] BYREF
  unsigned int v106; // [rsp+58h] [rbp-6C0h]
  unsigned __int64 v107; // [rsp+60h] [rbp-6B8h] BYREF
  int v108; // [rsp+68h] [rbp-6B0h]
  char v109; // [rsp+6Ch] [rbp-6ACh]
  unsigned __int8 CurrentIrql; // [rsp+6Dh] [rbp-6ABh]
  _BYTE *v111; // [rsp+70h] [rbp-6A8h]
  int v112; // [rsp+78h] [rbp-6A0h]
  int v113; // [rsp+7Ch] [rbp-69Ch]
  __int16 v114; // [rsp+80h] [rbp-698h]
  unsigned int j; // [rsp+84h] [rbp-694h]
  unsigned __int64 v116; // [rsp+88h] [rbp-690h]
  int v117; // [rsp+90h] [rbp-688h]
  unsigned int *v118; // [rsp+98h] [rbp-680h]
  __int64 v119; // [rsp+A0h] [rbp-678h]
  int v120; // [rsp+A8h] [rbp-670h]
  int v121; // [rsp+ACh] [rbp-66Ch]
  _QWORD *i; // [rsp+B0h] [rbp-668h]
  int v123; // [rsp+B8h] [rbp-660h] BYREF
  void *Teb; // [rsp+C0h] [rbp-658h]
  int v125; // [rsp+C8h] [rbp-650h]
  int v126; // [rsp+CCh] [rbp-64Ch]
  unsigned int v127; // [rsp+D0h] [rbp-648h]
  _QWORD *v128; // [rsp+D8h] [rbp-640h]
  struct _KTHREAD *v129; // [rsp+E0h] [rbp-638h]
  ULONG64 v130; // [rsp+E8h] [rbp-630h]
  unsigned __int64 v131; // [rsp+F0h] [rbp-628h]
  ULONG64 v132; // [rsp+F8h] [rbp-620h]
  int v133; // [rsp+100h] [rbp-618h]
  int v134; // [rsp+104h] [rbp-614h]
  int v135; // [rsp+108h] [rbp-610h]
  int v136; // [rsp+10Ch] [rbp-60Ch]
  unsigned int v137; // [rsp+110h] [rbp-608h]
  _BYTE *v138; // [rsp+118h] [rbp-600h]
  struct _KPROCESS *v139; // [rsp+120h] [rbp-5F8h]
  __int64 v140; // [rsp+128h] [rbp-5F0h]
  __int64 v141; // [rsp+130h] [rbp-5E8h]
  __int64 v142; // [rsp+138h] [rbp-5E0h]
  unsigned __int64 v143; // [rsp+140h] [rbp-5D8h]
  unsigned __int64 v144; // [rsp+148h] [rbp-5D0h]
  __int64 v145; // [rsp+150h] [rbp-5C8h] BYREF
  _DWORD *v146; // [rsp+158h] [rbp-5C0h]
  _DWORD *v147; // [rsp+160h] [rbp-5B8h]
  unsigned __int64 v148; // [rsp+170h] [rbp-5A8h] BYREF
  _QWORD *v149; // [rsp+178h] [rbp-5A0h]
  _QWORD v150[4]; // [rsp+180h] [rbp-598h] BYREF
  __int128 v151; // [rsp+1A0h] [rbp-578h] BYREF
  __int64 v152; // [rsp+1B0h] [rbp-568h]
  struct _KTHREAD *v153; // [rsp+1B8h] [rbp-560h]
  _QWORD *v154; // [rsp+1C8h] [rbp-550h]
  unsigned __int64 v155; // [rsp+1D8h] [rbp-540h]
  struct _KTHREAD *v156; // [rsp+1E0h] [rbp-538h]
  unsigned __int64 v157; // [rsp+1E8h] [rbp-530h]
  _KPROCESS *v158; // [rsp+1F0h] [rbp-528h]
  char *v159; // [rsp+1F8h] [rbp-520h]
  _BYTE v160[120]; // [rsp+200h] [rbp-518h] BYREF
  _QWORD v161[4]; // [rsp+278h] [rbp-4A0h] BYREF
  unsigned __int64 *m; // [rsp+298h] [rbp-480h]
  __int64 v163; // [rsp+2A0h] [rbp-478h]
  __int64 v164; // [rsp+2A8h] [rbp-470h]
  __int64 v165; // [rsp+2B0h] [rbp-468h]
  __int64 v166; // [rsp+2D8h] [rbp-440h]
  __int64 v167; // [rsp+2E0h] [rbp-438h]
  __int64 v168; // [rsp+2E8h] [rbp-430h]
  __int64 v169; // [rsp+2F0h] [rbp-428h]
  unsigned __int64 v170; // [rsp+2F8h] [rbp-420h]
  _QWORD v171[102]; // [rsp+3A0h] [rbp-378h] BYREF
  void *retaddr; // [rsp+718h] [rbp+0h]

  v4 = a4;
  v126 = a4;
  v5 = a3;
  v127 = a2;
  v7 = a1;
  v140 = a1;
  v120 = 0;
  i = 0LL;
  v128 = 0LL;
  v141 = 0LL;
  v103 = 1;
  CurrentThread = KeGetCurrentThread();
  v129 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v139 = Process;
  Teb = 0LL;
  v116 = 0LL;
  v112 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v107, &v105) )
    return 0LL;
  RtlpCaptureContext(v160);
  v98 = 0;
  v104 = 0;
  v101 = (v5 & 2) != 0;
  if ( (v5 & 1) == 0 && (dword_1403810E8 & 1) == 0 )
    v120 = 0x80000000;
  v130 = 0LL;
  v132 = 0LL;
  if ( (v5 & 1) != 0 )
  {
    v156 = KeGetCurrentThread();
    if ( (v156->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
      Teb = 0LL;
    else
      Teb = KeGetCurrentThread()->Teb;
    BaseTrapFrame = PspGetBaseTrapFrame(CurrentThread);
    v116 = BaseTrapFrame;
    if ( !Teb || (*((_WORD *)Teb + 3063) & 0x100) != 0 )
      return 0LL;
    if ( Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( *(_BYTE *)(BaseTrapFrame + 43) != 2 && *(_WORD *)(BaseTrapFrame + 368) == 35 )
      {
        v104 = 1;
        if ( (unsigned __int8)RtlpWalkWowStack(
                                v7,
                                (int)BaseTrapFrame + 360,
                                (_DWORD)Teb,
                                (unsigned int)&v104,
                                a2,
                                v4,
                                *(_DWORD *)(BaseTrapFrame + 344),
                                *(_DWORD *)(BaseTrapFrame + 384)) )
          goto LABEL_416;
      }
    }
    v130 = *(_QWORD *)(v116 + 384);
    v35 = *((_QWORD *)Teb + 1);
    v132 = v35;
    if ( v35 <= v130 )
      return 0LL;
    if ( v35 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    v128 = (_QWORD *)i[4];
    v103 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
  }
  memset(v150, 0, sizeof(v150));
  v151 = *(_OWORD *)&xmmword_1402CFDD0;
  v152 = qword_1402CFDE0;
  v21 = (unsigned __int64)m;
  while ( 1 )
  {
    v36 = 0x7FFFFFFFFFLL;
    if ( v112 != 1 )
    {
      v37 = v170;
      if ( v170 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
      {
        v38 = Process[1].ActiveProcessors.Bitmap[2];
        if ( !v38
          || Process == PsInitialSystemProcess
          || (v39 = *(_DWORD *)(v38 + 8), v39 == -1)
          || (v153 = KeGetCurrentThread(), v153->ApcStateIndex == 1)
          && (v158 = CurrentThread->Process, v39 != (unsigned int)MmGetSessionIdEx(v158))
          || (CurrentThread->MiscFlags & 0x800) != 0
          || CurrentThread->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
        {
          v117 = 0;
          goto LABEL_416;
        }
        v40 = 1;
        v136 = 1;
        if ( v170 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql < 0xFu )
            __writecr8(0xFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v36) = -1;
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, v36, v11);
          }
          else
          {
            _m_prefetchw(&PsLoadedModuleSpinLock);
            v41 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
            if ( v41 == _InterlockedCompareExchange(
                          &PsLoadedModuleSpinLock,
                          (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                          PsLoadedModuleSpinLock & 0x7FFFFFFF) )
            {
              v109 = 1;
            }
            else
            {
              v109 = 0;
              LOBYTE(v36) = -1;
              ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, v36, v11);
            }
          }
          v42 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 104);
          while ( v42 )
          {
            v154 = v42;
            v157 = v37;
            if ( v37 > v42[6] )
              v43 = 1;
            else
              v43 = -(v37 < (v42[5] & 0xFFFFFFFFFFFFFFFCuLL));
            if ( v43 < 0 )
            {
              v42 = (_QWORD *)*v42;
            }
            else
            {
              if ( v43 <= 0 )
              {
                v149 = v42;
                goto LABEL_99;
              }
              v42 = (_QWORD *)v42[1];
            }
          }
          v149 = 0LL;
          v40 = 0;
          v136 = 0;
LABEL_99:
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
        v117 = v40;
        if ( !v40 )
          goto LABEL_416;
        v21 = (unsigned __int64)m;
      }
    }
    if ( (v21 & 7) != 0 )
    {
LABEL_415:
      v99 = 0;
      goto LABEL_416;
    }
    if ( v21 >= (unsigned __int64)v105 || v21 < v107 )
    {
      if ( v107 < (unsigned __int64)MmSystemRangeStart )
        goto LABEL_415;
      KeQueryCurrentStackInformation(&v123, &v145, &v148);
      if ( v123 == 5 || !v123 )
        goto LABEL_415;
      v73 = KeGetCurrentThread();
      v74 = v123;
      if ( v123 != 1 )
      {
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && v73 != KeGetCurrentPrcb()->IdleThread )
        {
          v80 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
          if ( (unsigned __int64)&v80[-(unsigned int)KeKernelStackSize] <= v21 && v21 < (unsigned __int64)v80 )
          {
            v105 = v80;
            v107 = (unsigned __int64)&v80[-(unsigned int)KeKernelStackSize];
            goto LABEL_10;
          }
        }
        v74 = v123;
      }
      v75 = 0;
      v76 = v150[0];
      if ( !v150[0] )
      {
        LOBYTE(v72) = 1;
        KeGetNextKernelStackSegment(v73, v150, v72);
        v75 = v77;
        v76 = v150[0];
      }
      NextKernelStackSegment = 1;
      if ( v74 != 1 && v74 != 6 || !v75 )
      {
        NextKernelStackSegment = KeGetNextKernelStackSegment(v73, v150, 0LL);
        v76 = v150[0];
      }
      if ( !NextKernelStackSegment )
        goto LABEL_415;
      v145 = v150[1];
      v148 = v76;
      if ( v21 < v150[1] || v21 >= v76 )
        goto LABEL_415;
      v107 = v150[1];
      v105 = (char *)v76;
    }
LABEL_10:
    v99 = 1;
    v10 = RtlpLookupFunctionEntryForStackWalks(v170, &v151);
    v12 = (_DWORD *)v10;
    v147 = (_DWORD *)v10;
    if ( v10 )
      break;
    if ( !*((_QWORD *)&v151 + 1) )
      goto LABEL_416;
    if ( v170 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)m & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v170 = *m;
    v21 = (unsigned __int64)++m;
LABEL_54:
    if ( !v170 )
    {
      if ( (v5 & 1) != 0 && Process[1].ActiveProcessors.Bitmap[7] && *(_BYTE *)(v116 + 43) == 2 )
      {
        v142 = *((_QWORD *)Teb + 657) + 4LL;
        if ( (v142 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        RtlpWalkWowStack(
          v140,
          0,
          (_DWORD)Teb,
          (unsigned int)&v104,
          v127,
          v4,
          *(_DWORD *)(v142 + 180),
          *(_DWORD *)(v142 + 196) - 4);
      }
      goto LABEL_416;
    }
    if ( v112 )
    {
      if ( v112 != 1 )
      {
        if ( v112 != 2 )
          goto LABEL_416;
        if ( v170 < (unsigned __int64)MmSystemRangeStart && v170 <= (unsigned __int64)MmHighestUserAddress )
        {
          if ( v170 != *(_QWORD *)(v116 + 360) )
            goto LABEL_416;
          v141 = *(_QWORD *)(v116 + 384);
          if ( (v141 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v112 = 1;
          v21 = *(_QWORD *)(v141 + 72);
          m = (unsigned __int64 *)v21;
          v107 = v130;
          v105 = (char *)v132;
          if ( v128 )
            v116 = v128[26];
        }
        goto LABEL_61;
      }
      if ( v170 > (unsigned __int64)MmHighestUserAddress )
        goto LABEL_416;
      v68 = v128;
      if ( v128 && v170 == *(_QWORD *)(v116 + 360) )
      {
        v112 = 2;
        v170 = v128[39];
        v21 = (unsigned __int64)(v128 + 40);
        m = v128 + 40;
        v163 = v128[31];
        v161[3] = v128[32];
        v165 = v128[33];
        v164 = v128[34];
        v166 = v128[35];
        v167 = v128[36];
        v168 = v128[37];
        v169 = v128[38];
        v159 = (char *)(i + 2);
        v128 = (_QWORD *)i[4];
        v70 = (char **)i[5];
        if ( !v70 )
          goto LABEL_416;
        i = (_QWORD *)i[5];
        v107 = (unsigned __int64)(v68 + 40);
        v69 = *v70;
LABEL_223:
        v105 = v69;
      }
LABEL_61:
      if ( v104 >= v4 )
      {
        *(_QWORD *)(v140 + 8LL * (v104 - v4)) = v170;
        v21 = (unsigned __int64)m;
      }
      if ( ++v104 >= v127 )
        goto LABEL_416;
    }
    else
    {
      if ( (v5 & 1) == 0 && v170 < (unsigned __int64)MmSystemRangeStart )
        goto LABEL_416;
      if ( (v5 & 1) != 0 )
      {
        if ( v170 < (unsigned __int64)MmSystemRangeStart )
        {
          if ( v170 > (unsigned __int64)MmHighestUserAddress )
            goto LABEL_416;
          if ( v170 != *(_QWORD *)(v116 + 360) )
            goto LABEL_416;
          v112 = 1;
          if ( v128 )
          {
            v116 = v128[26];
            if ( v116 < (unsigned __int64)MmSystemRangeStart )
              goto LABEL_416;
          }
          v107 = v130;
          v69 = (char *)v132;
          goto LABEL_223;
        }
        v33 = v104 == 0;
      }
      else
      {
        v33 = !v101;
      }
      if ( v33 )
        goto LABEL_61;
    }
  }
  v135 = 0;
  v13 = v170;
  v14 = *((_QWORD *)&v151 + 1);
  v119 = *((_QWORD *)&v151 + 1);
  v15 = (unsigned int *)v10;
  v118 = (unsigned int *)v10;
  v146 = (_DWORD *)v10;
  v16 = 0;
  v125 = 0;
  v17 = *((_QWORD *)&v151 + 1) + *(unsigned int *)(v10 + 8);
  if ( v170 <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (v17 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v147;
  }
  v18 = *(_BYTE *)v17 & 7;
  if ( v98 )
  {
    if ( v120 < 0 && v18 < 2 )
    {
      if ( !(unsigned int)RtlpTrivialFunction(v12, *((_QWORD *)&v151 + 1), v170, v17) )
      {
        v32 = -1073741784;
        v21 = (unsigned __int64)m;
        goto LABEL_51;
      }
      v16 = 1;
      v125 = 1;
      v15 = v118;
      v14 = v119;
    }
  }
  else
  {
    v16 = 1;
    v125 = 1;
  }
  v11 = (unsigned int)v120;
  LODWORD(v11) = v120 & 0x7FFFFFFF;
  v134 = v120 & 0x7FFFFFFF;
  v19 = v13 - *v12 - v14;
  v20 = *(_BYTE *)(v17 + 3);
  if ( (v20 & 0xF) == 0 )
  {
    v21 = (unsigned __int64)m;
    goto LABEL_16;
  }
  if ( v19 >= *(unsigned __int8 *)(v17 + 1) || (*(_BYTE *)v17 & 0x20) != 0 )
  {
    v57 = *(_BYTE *)(v17 + 3);
    v58 = v20;
    v21 = (unsigned __int64)m;
    goto LABEL_135;
  }
  v81 = 0LL;
  for ( j = 0; (unsigned int)v81 < *(unsigned __int8 *)(v17 + 2); j = v81 )
  {
    v82 = *(unsigned __int16 *)(v17 + 2 * v81 + 4);
    v114 = v82;
    if ( (BYTE1(v82) & 0xF) == 3 )
      break;
    v81 = (unsigned int)RtlpUnwindOpSlots(v82) + (unsigned int)v81;
  }
  v21 = (unsigned __int64)m;
  v15 = v118;
  v14 = v119;
  if ( v19 < *(unsigned __int8 *)(v17 + 2 * v81 + 4) )
  {
LABEL_16:
    v131 = v21;
  }
  else
  {
    v58 = *(unsigned __int8 *)(v17 + 3);
    v57 = *(_BYTE *)(v17 + 3);
LABEL_135:
    v131 = v161[v57 & 0xF] - (int)(v58 & 0xFFFFFFF0);
  }
  if ( v16 )
    goto LABEL_18;
  v46 = 0;
  v108 = 0;
  if ( v18 >= 2 )
  {
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_18;
    v47 = *(_WORD *)(v17 + 4);
    v114 = v47;
    if ( (HIBYTE(v47) & 0xF) != 6 )
    {
LABEL_119:
      v21 = (unsigned __int64)m;
      goto LABEL_18;
    }
    v48 = (unsigned __int8)v47;
    v49 = v13 - v119;
    if ( (v47 & 0x1000) != 0 )
    {
      v50 = v15[1] - (unsigned __int8)v47;
      v121 = v50;
      if ( v49 - v50 < (unsigned int)(unsigned __int8)v47 )
      {
        v108 = 1;
      }
      else
      {
LABEL_114:
        for ( k = 1; ; ++k )
        {
          j = k;
          if ( k >= *(unsigned __int8 *)(v17 + 2) )
            goto LABEL_118;
          v52 = *(_WORD *)(v17 + 2LL * k + 4);
          v114 = v52;
          if ( (HIBYTE(v52) & 0xF) != 6 )
          {
            v15 = v118;
LABEL_118:
            v14 = v119;
            goto LABEL_119;
          }
          v53 = HIBYTE(v52) >> 4 << 8;
          v33 = (unsigned __int8)v52 + v53 == 0;
          v54 = (unsigned __int8)v52 + v53;
          v121 = v54;
          v15 = v118;
          if ( v33 )
            goto LABEL_118;
          v50 = v118[1] - v54;
          v121 = v50;
          if ( v49 - v50 < v48 )
            break;
        }
        v108 = 1;
      }
      RtlpUnwindEpilogue(v119, v13, v49 - v50, (_DWORD)v15, (__int64)v160, 0LL, (__int64)&v107, (__int64)&v105);
      if ( v97 != (_BYTE *)-64LL )
        v98 = 0;
      v21 = (unsigned __int64)m;
      goto LABEL_49;
    }
    v121 = 0;
    goto LABEL_114;
  }
  v64 = (_BYTE *)v13;
  v111 = (_BYTE *)v13;
  v65 = 0LL;
  v133 = 0;
  v66 = *(_BYTE *)v13;
  if ( *(_BYTE *)v13 == 72 )
  {
    if ( *(_BYTE *)(v13 + 1) == 0x83 && *(_BYTE *)(v13 + 2) == 0xC4 )
    {
      v64 = (_BYTE *)(v13 + 4);
LABEL_302:
      v111 = v64;
      goto LABEL_172;
    }
    if ( *(_BYTE *)(v13 + 1) == 0x81 && *(_BYTE *)(v13 + 2) == 0xC4 )
    {
LABEL_301:
      v64 = (_BYTE *)(v13 + 7);
      goto LABEL_302;
    }
  }
  if ( (v66 & 0xFE) == 0x48 && *(_BYTE *)(v13 + 1) == 0x8D )
  {
    v11 = *(unsigned __int8 *)(v13 + 2);
    v71 = *(_BYTE *)(v13 + 2) & 7;
    v65 = v71 | (8 * (v66 & 1u));
    v133 = v71 | (8 * (v66 & 1));
    if ( v133 )
    {
      if ( (_DWORD)v65 == (*(_BYTE *)(v17 + 3) & 0xF) )
      {
        LOBYTE(v11) = v11 & 0xF8;
        if ( (_BYTE)v11 == 96 )
        {
          v64 = (_BYTE *)(v13 + 4);
          goto LABEL_302;
        }
        if ( (_BYTE)v11 != 0xA0 )
          goto LABEL_172;
        goto LABEL_301;
      }
    }
  }
LABEL_172:
  while ( 2 )
  {
    if ( (*v64 & 0xF8) == 0x58 )
    {
      ++v64;
LABEL_305:
      v111 = v64;
      continue;
    }
    break;
  }
  if ( (*v64 & 0xF0) == 0x40 && (v64[1] & 0xF8) == 0x58 )
  {
    v64 += 2;
    goto LABEL_305;
  }
  if ( *v64 == 0xF2 )
    v111 = ++v64;
  v67 = *v64;
  if ( (unsigned __int8)(*v64 + 62) <= 1u || v67 == -13 && v64[1] == 0xC3 )
  {
LABEL_322:
    v108 = 1;
    goto LABEL_323;
  }
  if ( ((v67 + 23) & 0xFD) != 0 )
  {
    if ( v67 == -1 && v64[1] == 37 )
      goto LABEL_322;
    if ( (v67 & 0xF8) == 0x48 && v64[1] == 0xFF && (v64[2] & 0x38) == 0x20 )
    {
      v46 = 1;
      v108 = 1;
    }
  }
  else
  {
    v138 = &v64[-v14];
    if ( v67 == -21 )
      v83 = (char)v64[1] + 2;
    else
      v83 = *(_DWORD *)(v64 + 1) + 5;
    v84 = (unsigned __int64)&v64[v83 - v14];
    v138 = (_BYTE *)v84;
    v85 = *v15;
    if ( v84 < v85 || v84 >= v15[1] )
    {
      v86 = (_DWORD *)RtlpSameFunction(v15, v14, v84 + v14);
      if ( !v86 || v84 == *v86 )
      {
        v21 = (unsigned __int64)m;
        goto LABEL_322;
      }
      v21 = (unsigned __int64)m;
      v15 = v118;
      v14 = v119;
    }
    else if ( v84 == v85 && (*(_BYTE *)v17 & 0x20) == 0 )
    {
      v46 = 1;
      v108 = 1;
    }
  }
  if ( v46 )
  {
LABEL_323:
    v87 = (_BYTE *)v13;
    v111 = (_BYTE *)v13;
    if ( (*(_BYTE *)v13 & 0xF8) != 0x48 )
      goto LABEL_335;
    v88 = *(_BYTE *)(v13 + 1);
    if ( v88 == -125 )
    {
      v89 = *(char *)(v13 + 3);
      v87 = (_BYTE *)(v13 + 4);
LABEL_334:
      v21 += v89;
      v111 = v87;
      for ( m = (unsigned __int64 *)v21; ; m = (unsigned __int64 *)v21 )
      {
LABEL_335:
        v93 = *v87;
        if ( (*v87 & 0xF8) == 0x58 )
        {
          v11 = v93 & 7;
          v94 = (_QWORD *)v21;
          if ( v13 <= (unsigned __int64)MmHighestUserAddress )
          {
            if ( (v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = (unsigned __int64)m;
          }
          if ( &v107 && ((unsigned __int64)v94 < v107 || v94 > (_QWORD *)v105 - 1) )
            goto LABEL_343;
          v161[v11] = *v94;
          v21 = (unsigned __int64)(m + 1);
          ++v87;
        }
        else
        {
          if ( (v93 & 0xF0) != 0x40 || (v95 = v87[1], (v95 & 0xF8) != 0x58) )
          {
            if ( v13 <= (unsigned __int64)MmHighestUserAddress )
            {
              if ( (v21 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v21 = (unsigned __int64)m;
            }
            if ( !&v107 )
              goto LABEL_365;
            if ( v21 >= v107 )
            {
              if ( v21 > (unsigned __int64)(v105 - 8) )
              {
                v32 = -1073741784;
                goto LABEL_50;
              }
LABEL_365:
              v170 = *(_QWORD *)v21;
              v21 += 8LL;
              m = (unsigned __int64 *)v21;
              if ( v97 != (_BYTE *)-64LL )
                v98 = 0;
LABEL_49:
              v32 = 0;
              goto LABEL_50;
            }
LABEL_343:
            v32 = -1073741784;
            goto LABEL_50;
          }
          v11 = v95 & 7 | (8 * (v93 & 1u));
          v96 = (_QWORD *)v21;
          if ( v13 <= (unsigned __int64)MmHighestUserAddress )
          {
            if ( (v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = (unsigned __int64)m;
          }
          if ( &v107 )
          {
            if ( (unsigned __int64)v96 < v107 )
              goto LABEL_343;
            if ( v96 > (_QWORD *)v105 - 1 )
            {
              v32 = -1073741784;
              goto LABEL_50;
            }
          }
          v161[v11] = *v96;
          v21 = (unsigned __int64)(m + 1);
          v87 += 2;
        }
        v111 = v87;
      }
    }
    if ( v88 == -127 )
    {
      v90 = *(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8);
      v91 = *(unsigned __int8 *)(v13 + 3);
    }
    else
    {
      if ( v88 != -115 )
        goto LABEL_335;
      v92 = *(_BYTE *)(v13 + 2) & 0xF8;
      if ( v92 == 96 )
      {
        v21 = v161[v65];
        m = (unsigned __int64 *)v21;
        v89 = *(char *)(v13 + 3);
        v87 = (_BYTE *)(v13 + 4);
        goto LABEL_334;
      }
      if ( v92 != -96 )
        goto LABEL_335;
      v90 = *(unsigned __int8 *)(v13 + 4) | (*(unsigned __int16 *)(v13 + 5) << 8);
      v91 = *(unsigned __int8 *)(v13 + 3);
      v21 = v161[v65];
      m = (unsigned __int64 *)v21;
    }
    v87 = (_BYTE *)(v13 + 7);
    v89 = v91 | (v90 << 8);
    goto LABEL_334;
  }
LABEL_18:
  v22 = v131;
  v23 = 0;
  v137 = 0;
  v11 = (unsigned __int64)v161;
  while ( 1 )
  {
    v24 = 0LL;
    v102 = 0;
    v100 = 0;
    v25 = v13 - v14 - *v15;
    v26 = v14 + v15[2];
    if ( v13 <= (unsigned __int64)MmHighestUserAddress )
    {
      if ( (v26 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (unsigned __int64)m;
    }
    while ( (unsigned int)v24 < *(unsigned __int8 *)(v26 + 2) )
    {
      v27 = *(unsigned __int8 *)(v26 + 2 * v24 + 5) >> 4;
      v28 = v26 + 2 * v24;
      if ( v25 < *(unsigned __int8 *)(v28 + 4) )
      {
        v24 = (unsigned int)RtlpUnwindOpSlots(*(unsigned __int16 *)(v28 + 4)) + (unsigned int)v24;
        v21 = (unsigned __int64)m;
      }
      else
      {
        if ( (*(_BYTE *)(v26 + 2 * v24 + 5) & 0xF) != 0 )
        {
          if ( (*(_BYTE *)(v26 + 2 * v24 + 5) & 0xF) != 4 )
          {
            switch ( *(_BYTE *)(v26 + 2 * v24 + 5) & 0xF )
            {
              case 1:
                v24 = (unsigned int)(v24 + 1);
                v102 = v24;
                v44 = *(unsigned __int16 *)(v26 + 2 * v24 + 4);
                v106 = v44;
                if ( (_DWORD)v27 )
                {
                  v24 = (unsigned int)(v24 + 1);
                  v102 = v24;
                  v45 = (*(unsigned __int16 *)(v26 + 2 * v24 + 4) << 16) + v44;
                }
                else
                {
                  v45 = 8 * v44;
                }
                v106 = v45;
                v21 += v45;
                goto LABEL_31;
              case 2:
                v21 += (unsigned int)(8 * v27 + 8);
                goto LABEL_31;
              case 3:
                m = (unsigned __int64 *)v161[*(_BYTE *)(v26 + 3) & 0xF];
                v21 = (unsigned __int64)m - (*(_BYTE *)(v26 + 3) & 0xF0);
                goto LABEL_31;
              case 5:
                v24 = (unsigned int)(v24 + 2);
                v102 = v24;
                v106 = *(unsigned __int16 *)(v26 + 2LL * (unsigned int)(v24 - 1) + 4);
                v106 += *(unsigned __int16 *)(v26 + 2 * v24 + 4) << 16;
                v11 = v22 + v106;
                if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( (v11 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v21 = (unsigned __int64)m;
                }
                if ( v97 != (_BYTE *)-96LL && (v11 < v107 || v11 > (unsigned __int64)(v105 - 8)) )
                  goto LABEL_343;
                v161[v27] = *(_QWORD *)v11;
                v21 = (unsigned __int64)m;
                goto LABEL_32;
              case 6:
                LODWORD(v24) = v24 + 1;
                v102 = v24;
                goto LABEL_32;
              case 7:
                LODWORD(v24) = v24 + 2;
                v102 = v24;
                goto LABEL_32;
              case 8:
                v24 = (unsigned int)(v24 + 1);
                v102 = v24;
                v106 = 16 * *(unsigned __int16 *)(v26 + 2 * v24 + 4);
                v61 = v22 + v106;
                if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( (v61 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v21 = (unsigned __int64)m;
                }
                if ( &v107 && (v61 < v107 || v61 > (unsigned __int64)(v105 - 16)) )
                  goto LABEL_343;
                v62 = 2LL * (unsigned int)v27;
                v171[2 * (unsigned int)v27] = *(_QWORD *)v61;
                v63 = *(_QWORD *)(v61 + 8);
                goto LABEL_156;
              case 9:
                v24 = (unsigned int)(v24 + 2);
                v102 = v24;
                v106 = *(unsigned __int16 *)(v26 + 2LL * (unsigned int)(v24 - 1) + 4);
                v106 += *(unsigned __int16 *)(v26 + 2 * v24 + 4) << 16;
                v11 = v22 + v106;
                if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( (v11 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v21 = (unsigned __int64)m;
                }
                if ( v97 != (_BYTE *)-96LL && (v11 < v107 || v11 > (unsigned __int64)(v105 - 16)) )
                  goto LABEL_343;
                v62 = 2LL * (unsigned int)v27;
                v171[2 * (unsigned int)v27] = *(_QWORD *)v11;
                v63 = *(_QWORD *)(v11 + 8);
LABEL_156:
                v171[v62 + 1] = v63;
                v21 = (unsigned __int64)m;
                goto LABEL_32;
              case 0xA:
                v100 = 1;
                v11 = v21;
                v143 = v21;
                v59 = (unsigned __int64 *)(v21 + 24);
                v144 = v21 + 24;
                if ( (_DWORD)v27 )
                {
                  v11 = v21 + 8;
                  v143 = v21 + 8;
                  v59 = (unsigned __int64 *)(v21 + 32);
                  v144 = v21 + 32;
                }
                if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( (v11 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v21 = (unsigned __int64)m;
                }
                if ( v97 != (_BYTE *)-96LL && (v11 < v107 || v11 > (unsigned __int64)(v105 - 8)) )
                  goto LABEL_343;
                if ( v13 <= (unsigned __int64)MmHighestUserAddress )
                {
                  if ( ((unsigned __int8)v59 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v21 = (unsigned __int64)m;
                }
                if ( &v107 && ((unsigned __int64)v59 < v107 || v59 > (unsigned __int64 *)v105 - 1) )
                  goto LABEL_343;
                v170 = *(_QWORD *)v11;
                v21 = *v59;
                goto LABEL_31;
              default:
                RtlRaiseStatus(-1073741569);
            }
          }
          v24 = (unsigned int)(v24 + 1);
          v102 = v24;
          v106 = 8 * *(unsigned __int16 *)(v26 + 2 * v24 + 4);
          v30 = v22 + v106;
          if ( v13 <= (unsigned __int64)MmHighestUserAddress )
          {
            if ( (v30 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = (unsigned __int64)m;
          }
          if ( v97 != (_BYTE *)-96LL && (v30 < v107 || v30 > (unsigned __int64)(v105 - 8)) )
            goto LABEL_343;
          v161[v27] = *(_QWORD *)v30;
          v21 = (unsigned __int64)m;
        }
        else
        {
          v29 = (_QWORD *)v21;
          if ( v13 <= (unsigned __int64)MmHighestUserAddress )
          {
            if ( (v21 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v21 = (unsigned __int64)m;
          }
          if ( v97 != (_BYTE *)-96LL && ((unsigned __int64)v29 < v107 || v29 > (_QWORD *)v105 - 1) )
            goto LABEL_343;
          v161[v27] = *v29;
          v21 = (unsigned __int64)(m + 1);
LABEL_31:
          m = (unsigned __int64 *)v21;
        }
LABEL_32:
        v24 = (unsigned int)(v24 + 1);
      }
      v102 = v24;
      v11 = (unsigned __int64)v161;
    }
    if ( (*(_BYTE *)v26 & 0x20) == 0 )
      break;
    v56 = *(unsigned __int8 *)(v26 + 2);
    v102 = v56;
    if ( (v56 & 1) != 0 )
      v102 = ++v56;
    v15 = (unsigned int *)(v26 + 2 * (v56 + 2LL));
    v118 = v15;
    if ( v13 <= (unsigned __int64)MmHighestUserAddress )
    {
      if ( ((unsigned __int8)v15 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (unsigned __int64)m;
    }
    v137 = ++v23;
    v14 = v119;
    if ( v23 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  v31 = v100;
  if ( v100 )
  {
    if ( v97 != (_BYTE *)-64LL )
    {
      v60 = 0LL;
      v11 = 0x140000000uLL;
      while ( 1 )
      {
        v102 = v60;
        if ( (unsigned int)v60 >= 3 )
          break;
        if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))v26 == *(&RtlpSafeMachineFrameEntries
                                                                                        + v60) )
        {
          v31 = 0;
          v100 = 0;
          break;
        }
        v60 = (unsigned int)(v60 + 1);
      }
LABEL_46:
      if ( &v98 )
        v98 = v31;
    }
    v146 = v118;
    if ( v134 )
    {
      v11 = v119 + v118[2];
      if ( v13 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( (v11 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = (unsigned __int64)m;
      }
      if ( (_DWORD)v13 - (_DWORD)v119 - *v118 >= *(unsigned __int8 *)(v11 + 1)
        && ((*(_BYTE *)v11 >> 3) & (unsigned __int8)v134) != 0 )
      {
        v55 = *(unsigned __int8 *)(v11 + 2);
        j = v55;
        if ( (v55 & 1) != 0 )
          j = ++v55;
        v155 = v11 + 2 * (v55 + 2 + 2LL);
      }
    }
    goto LABEL_49;
  }
  if ( v13 <= (unsigned __int64)MmHighestUserAddress )
  {
    if ( (v21 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (unsigned __int64)m;
  }
  if ( v97 == (_BYTE *)-96LL )
    goto LABEL_45;
  if ( v21 < v107 )
    goto LABEL_343;
  if ( v21 <= (unsigned __int64)(v105 - 8) )
  {
LABEL_45:
    v170 = *(_QWORD *)v21;
    v21 += 8LL;
    m = (unsigned __int64 *)v21;
    goto LABEL_46;
  }
  v32 = -1073741784;
LABEL_50:
  v5 = a3;
LABEL_51:
  v113 = v32;
  v135 = v32;
  if ( v32 >= 0 )
  {
    CurrentThread = v129;
    Process = v139;
    v4 = v126;
    if ( v98 )
      v101 = 0;
    goto LABEL_54;
  }
  CurrentThread = v129;
LABEL_416:
  if ( (v5 & 1) != 0 && !v103 )
    CurrentThread->MiscFlags &= ~0x20u;
  return v104;
}
