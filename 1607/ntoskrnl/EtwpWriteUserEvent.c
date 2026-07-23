/*
 * XREFs of EtwpWriteUserEvent @ 0x1404F38B0
 * Callers:
 *     NtTraceEvent @ 0x1400D3400 (NtTraceEvent.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140074C60 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400A88E8 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCreateEventKey @ 0x1400AB19C (EtwpCreateEventKey.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1400F96A0 (PsGetCurrentProcessSessionId.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     EtwpFailLogging @ 0x140224BC4 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x1402278D8 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140229038 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069FA70 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406A8B8C (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1406A8E48 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        __int64 *a12,
        __int64 a13,
        char a14,
        unsigned __int16 *a15,
        unsigned __int64 *a16)
{
  unsigned int v16; // r14d
  int v17; // ebx
  __int64 v18; // r13
  __int64 v19; // rdi
  __int64 *v20; // r8
  unsigned __int16 v21; // si
  unsigned __int64 v22; // r12
  __int64 v24; // r10
  unsigned __int16 *v25; // rcx
  __int64 v26; // r9
  unsigned __int8 v27; // dl
  bool v28; // zf
  unsigned int v29; // ecx
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // rax
  bool v33; // al
  int v34; // r11d
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // al
  unsigned int v39; // r11d
  int v40; // edi
  unsigned int v41; // r15d
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  bool v45; // al
  char v46; // bl
  void *v47; // rsp
  void *v48; // rsp
  _OWORD *v49; // r13
  unsigned int v50; // edx
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  unsigned int v53; // esi
  unsigned int v54; // r14d
  unsigned int v55; // ebx
  __int64 v56; // rsi
  __int64 v57; // rdi
  char v58; // al
  unsigned int v59; // eax
  int v60; // eax
  unsigned __int16 v61; // si
  unsigned int v62; // eax
  __int64 v63; // rsi
  char v64; // bl
  unsigned int *v65; // r14
  signed int v66; // eax
  unsigned __int64 v67; // rax
  int ReserveTraceBufferStatus; // ebx
  BOOLEAN v69; // al
  signed int v70; // ecx
  BOOL v71; // eax
  BOOL v72; // eax
  unsigned __int8 v73; // cl
  __int64 v74; // r11
  unsigned __int16 *v75; // r14
  _OWORD *v76; // rax
  unsigned int *v77; // r13
  unsigned __int16 *v78; // rsi
  int v79; // ebx
  __int64 v80; // rbx
  unsigned __int16 *v81; // rsi
  unsigned __int16 *v82; // r8
  int v83; // r10d
  unsigned __int16 *v84; // r9
  unsigned __int64 v85; // rax
  unsigned __int16 *v86; // rbx
  unsigned __int16 *v87; // rsi
  unsigned __int16 *v88; // rbx
  unsigned __int16 *v89; // rdi
  void *v90; // rdx
  unsigned __int16 *v91; // r13
  unsigned int v92; // ecx
  unsigned __int16 v93; // si
  unsigned __int16 v94; // si
  __int64 v95; // rbx
  unsigned __int16 *v96; // rbx
  __int64 v97; // rcx
  unsigned __int16 v98; // dx
  unsigned __int16 *v99; // rdi
  unsigned int v100; // esi
  size_t v101; // rdx
  __int64 *v102; // r9
  unsigned __int8 v103; // cl
  int v104; // ecx
  unsigned __int16 *v105; // rbx
  __int64 v106; // rcx
  struct _KTHREAD *v107; // rdx
  signed __int64 *v108; // rbx
  __int64 v109; // rdi
  struct _KTHREAD *v110; // rcx
  __int16 v111; // ax
  char v112; // [rsp+1E0h] [rbp-610h] BYREF
  char v113; // [rsp+610h] [rbp-1E0h] BYREF
  char v114; // [rsp+7F0h] [rbp+0h]
  int v115; // [rsp+7F4h] [rbp+4h]
  signed int v116; // [rsp+7F8h] [rbp+8h]
  unsigned __int8 v117; // [rsp+7FCh] [rbp+Ch]
  int v118; // [rsp+800h] [rbp+10h]
  int v119; // [rsp+804h] [rbp+14h]
  unsigned int v120; // [rsp+808h] [rbp+18h]
  char v121; // [rsp+810h] [rbp+20h]
  unsigned int v122; // [rsp+818h] [rbp+28h]
  __int64 v123; // [rsp+820h] [rbp+30h]
  __int64 v124; // [rsp+828h] [rbp+38h]
  unsigned __int16 v125; // [rsp+830h] [rbp+40h]
  unsigned int v126; // [rsp+834h] [rbp+44h]
  int v127; // [rsp+838h] [rbp+48h]
  __int64 v128; // [rsp+840h] [rbp+50h]
  unsigned __int16 v129; // [rsp+848h] [rbp+58h]
  __int64 v130; // [rsp+850h] [rbp+60h]
  unsigned __int64 v131; // [rsp+858h] [rbp+68h]
  void *StackLookasideListEntry; // [rsp+860h] [rbp+70h] BYREF
  unsigned __int16 *v133; // [rsp+868h] [rbp+78h]
  char PreviousMode; // [rsp+870h] [rbp+80h]
  char v135; // [rsp+871h] [rbp+81h]
  unsigned int v136; // [rsp+874h] [rbp+84h]
  __int64 v137; // [rsp+878h] [rbp+88h]
  __int64 *v138; // [rsp+880h] [rbp+90h]
  __int64 v139; // [rsp+888h] [rbp+98h]
  __int64 v140; // [rsp+890h] [rbp+A0h] BYREF
  unsigned int v141; // [rsp+898h] [rbp+A8h]
  unsigned __int16 *v142; // [rsp+8A0h] [rbp+B0h]
  unsigned __int64 v143; // [rsp+8A8h] [rbp+B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+8B0h] [rbp+C0h]
  unsigned int v145; // [rsp+8B8h] [rbp+C8h]
  unsigned int v146; // [rsp+8BCh] [rbp+CCh]
  void *v147; // [rsp+8C0h] [rbp+D0h]
  char *v148; // [rsp+8C8h] [rbp+D8h]
  __int64 v149; // [rsp+8D0h] [rbp+E0h]
  __int64 v150; // [rsp+8D8h] [rbp+E8h]
  __int64 v151; // [rsp+8E0h] [rbp+F0h]
  __int128 v152; // [rsp+8E8h] [rbp+F8h] BYREF
  __int64 v153; // [rsp+8F8h] [rbp+108h]
  unsigned __int64 HighLimit; // [rsp+900h] [rbp+110h] BYREF
  unsigned __int64 LowLimit; // [rsp+908h] [rbp+118h] BYREF
  unsigned __int64 v156; // [rsp+910h] [rbp+120h] BYREF
  unsigned __int64 v157; // [rsp+918h] [rbp+128h] BYREF
  unsigned __int64 *v158; // [rsp+920h] [rbp+130h]
  void *v159; // [rsp+928h] [rbp+138h]
  unsigned __int64 v160; // [rsp+930h] [rbp+140h]
  _OWORD v161[24]; // [rsp+940h] [rbp+150h] BYREF
  unsigned int v162; // [rsp+AC0h] [rbp+2D0h]
  _WORD Src[40]; // [rsp+AD0h] [rbp+2E0h] BYREF

  v129 = a3;
  v17 = a2;
  v128 = a1;
  v150 = a1;
  v18 = a6;
  v123 = a6;
  v151 = a6;
  v19 = a11;
  v131 = a11;
  v20 = a12;
  v138 = a12;
  v158 = a16;
  v116 = 0;
  StackLookasideListEntry = 0LL;
  v147 = 0LL;
  v21 = 0;
  v125 = 0;
  v143 = 0LL;
  LOBYTE(v16) = 0;
  LODWORD(v22) = 0;
  if ( a11 )
  {
    if ( a10 )
      goto LABEL_6;
    return 3221225485LL;
  }
  if ( a10 )
    return 3221225485LL;
LABEL_6:
  if ( a10 > 0x80 )
    return 3221225485LL;
  v24 = a1;
  if ( a13 )
    v24 = a13;
  v137 = v24;
  Src[0] = 0;
  v114 = 0;
  v162 = 0;
  v130 = *(_QWORD *)(a1 + 376);
  v149 = v130;
  if ( a16 && *a16 )
  {
    v143 = *a16;
    v114 = 16;
  }
  if ( a15 )
  {
    v21 = *a15;
    v125 = *a15;
  }
  v25 = 0LL;
  if ( v21 )
    v25 = a15;
  v159 = v25;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v17) = ~a4 & a2;
  v26 = a9;
  do
  {
    while ( 2 )
    {
      v27 = a8;
      while ( 1 )
      {
        v28 = !_BitScanForward(&v29, (unsigned __int8)v17);
        v136 = v29;
        if ( v28 )
          goto LABEL_225;
        v152 = 0uLL;
        v153 = 0LL;
        v115 = 80;
        v126 = 0;
        v127 = 0;
        v142 = 0LL;
        v148 = 0LL;
        LOBYTE(v16) = 0;
        v119 = v16;
        v117 = 0;
        v139 = 1LL;
        LOBYTE(v17) = (v17 - 1) & v17;
        v118 = v17;
        v121 = v17;
        v30 = v29;
        v31 = v24 + 32LL * v29;
        if ( !v20 || (v32 = *v20, !_bittest64(&v32, *(unsigned __int8 *)(v31 + 118))) )
        {
          v33 = EtwpLevelKeywordEnabled(v31 + 112, v27, v26);
          v20 = v138;
          if ( v33 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) == 0 )
              break;
            if ( (*(_DWORD *)(v31 + 120) & 0x200) == 0 )
              break;
          }
        }
LABEL_224:
        v18 = v123;
      }
      v36 = *(_QWORD *)(v24 + 368);
      v38 = 0;
      if ( v36 )
      {
        v37 = *(_DWORD *)(v36 + 80 * v30);
        if ( (v37 & 0x80000200) == 0x80000200 || (v37 & 0x80000100) == 0x80000100 )
          v38 = 1;
      }
      v16 = v136;
      if ( v38 )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v24, v136, v129, v123, v34, v19) )
          goto LABEL_222;
        v26 = a9;
        v27 = a8;
      }
      if ( a14
        && EtwpIsEventNameFilterEnabled(v128, v16, v27, v26)
        && !EtwpApplyEventNameFilter(v137, v16, v39, v19, 1, 0, a8, v26) )
      {
        goto LABEL_222;
      }
      v40 = 0;
      if ( a7 )
      {
        v41 = 104;
        v115 = 104;
        v40 = 8;
      }
      else
      {
        v41 = v115;
      }
      v42 = *(_DWORD *)(v31 + 120);
      if ( (v42 & 0xFFFFFF9F) != 0 )
      {
        if ( (v42 & 1) != 0 )
        {
          if ( (v114 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem((__int64)Src);
            v114 |= 2u;
          }
          v40 |= 2u;
          v41 += Src[0];
          v115 = v41;
        }
        v43 = *(_DWORD *)(v31 + 120);
        if ( (v43 & 2) != 0 )
        {
          v40 |= 1u;
          v41 += 16;
          v115 = v41;
        }
        if ( (v43 & 0x80u) != 0 )
        {
          v40 |= 0x20u;
          v41 += 16;
          v115 = v41;
        }
        if ( (v43 & 0x100) != 0 )
        {
          v40 |= 0x40u;
          v41 += 16;
          v115 = v41;
        }
        if ( (v43 & 4) != 0 )
        {
          v44 = *(_QWORD *)(v137 + 368);
          v45 = v44 && (*(_DWORD *)(v44 + 80 * v30) & 0x80001000) == 0x80001000;
          if ( !v45 || (unsigned __int8)EtwpApplyStackWalkFilterOnUserEvent(v123, v137, v16, v26) )
          {
            v46 = v114;
            if ( (v114 & 1) == 0 )
            {
              StackLookasideListEntry = EtwpGetStackLookasideListEntry();
              if ( StackLookasideListEntry )
              {
                EtwpGetStackExtendedHeaderItem(
                  (__int64)CurrentThread,
                  0,
                  0x100u,
                  (__int64)&StackLookasideListEntry,
                  0,
                  0LL);
                v114 ^= (v46 ^ (8 * (StackLookasideListEntry != 0LL))) & 8;
              }
              else
              {
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v47 = alloca(1552LL);
                  StackLookasideListEntry = &v112;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v114 |= 1u;
            }
            if ( StackLookasideListEntry )
            {
              v40 |= 4u;
              v41 += *(unsigned __int16 *)StackLookasideListEntry;
              v115 = v41;
            }
          }
        }
        if ( (*(_DWORD *)(v31 + 120) & 8) != 0 )
        {
          if ( (v114 & 4) == 0 )
          {
            IoGetStackLimits(&v157, &v156);
            if ( (unsigned __int64)&v156 - v157 > 0x1E0 )
            {
              v48 = alloca(480LL);
              v147 = &v113;
              EtwpGetPsmKeyExtendedHeaderItem();
            }
            v114 |= 4u;
          }
          LOBYTE(v17) = v118;
          if ( v147 )
          {
            v40 |= 0x10u;
            v41 += *(unsigned __int16 *)v147;
            v115 = v41;
          }
        }
        else
        {
          LOBYTE(v17) = v118;
        }
      }
      v22 = *(unsigned __int16 *)(v31 + 118);
      v122 = *(unsigned __int16 *)(v31 + 118);
      v49 = &v161[3 * v162];
      v50 = a10;
      if ( a10 )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v51 = v131;
        if ( PreviousMode )
        {
          v52 = 16LL * a10;
          if ( v52 )
          {
            if ( (v131 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v131 + v52 > 0x7FFFFFFF0000LL || v131 + v52 < v131 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v53 = 0;
        v145 = 0;
        v41 = v115;
        while ( v53 < v50 )
        {
          v54 = v41;
          v141 = *(_DWORD *)(v51 + 16LL * v53 + 8);
          v55 = v141;
          if ( v141 > 0xFFFF )
            goto LABEL_85;
          if ( a14 )
          {
            v58 = *(_BYTE *)(v51 + 16LL * v53 + 12);
            v55 = v141;
          }
          else
          {
            v58 = 0;
          }
          if ( v58 )
          {
            if ( v58 == 1 )
            {
              v126 += EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails)
                    ? v55
                    : (unsigned __int16)v55;
              ++v127;
              v41 = v115;
              v50 = a10;
              v51 = v131;
            }
            else
            {
              v41 = v115;
            }
          }
          else
          {
            v41 = v55 + v115;
            v115 += v55;
          }
          if ( v41 < v54 )
          {
LABEL_85:
            v116 = -2147483643;
            LOBYTE(v17) = v118;
            LOBYTE(v16) = v119;
            v56 = v130;
            v18 = v123;
            v57 = v128;
            goto LABEL_227;
          }
          v145 = ++v53;
        }
        LOBYTE(v16) = v136;
        LOBYTE(v17) = v118;
      }
      if ( v127 )
      {
        if ( EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
        {
          v59 = (v126 + 15) & 0xFFFFFFF8;
          if ( v59 > 0xFFFF )
            goto LABEL_103;
        }
        else
        {
          v59 = (v126 + 15) & 0xFFFFFFF8;
        }
        v41 += v59;
        v115 = v41;
      }
      v61 = v125;
      if ( v125 )
      {
        if ( EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
        {
          v62 = (v61 + 15) & 0xFFFFFFF8;
          if ( v62 > 0xFFFF )
          {
LABEL_103:
            v60 = v116;
            if ( v116 >= 0 )
              v60 = -1073741675;
            v116 = v60;
            v17 = (unsigned __int8)v17 | (1 << v16);
            LOBYTE(v16) = v119;
            v18 = v123;
            goto LABEL_225;
          }
        }
        else
        {
          v62 = (v61 + 15) & 0xFFFFFFF8;
        }
        v41 += v62;
        v115 = v41;
      }
      *((_DWORD *)v49 + 10) = v41;
      v63 = v130 + 8 * v22;
      if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 400), 1u) )
      {
        if ( (unsigned int)v22 >= 0x40 )
        {
          v139 = 1LL;
        }
        else
        {
          _mm_lfence();
          v139 = *(_QWORD *)(v130 + 8 * v22 + 912);
          v41 = v115;
        }
        v64 = 1;
        v119 = 1;
      }
      else
      {
        v64 = v119;
      }
      v65 = (unsigned int *)v139;
      if ( (v139 & 1) == 0 )
      {
        v67 = EtwpReserveTraceBuffer((unsigned int *)v139, v41, (__int64)&v152, &v140, 0);
        v22 = v67;
        v160 = v67;
        if ( !v67 )
        {
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus((__int64)v65, v41);
          v69 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
          v18 = v123;
          if ( v69 )
            EtwpTraceLostEvent(
              (_QWORD *)(v128 + 24),
              (__int16 *)(v123 + 40),
              (unsigned __int16 *)v65 + 68,
              ReserveTraceBufferStatus);
          v70 = v116;
          if ( v116 >= 0 )
          {
            if ( (v65[3] & 0x8000000) == 0 )
              v70 = ReserveTraceBufferStatus;
            v116 = v70;
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 400), 1u);
          v71 = EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
          v16 = (unsigned __int8)v119;
          if ( v71 )
            v16 = 0;
          v28 = ReserveTraceBufferStatus == -1073741675;
          v17 = v118;
          LODWORD(v22) = v122;
          v19 = v131;
          v24 = v137;
          v20 = v138;
          v26 = a9;
          if ( v28 )
          {
            v116 = -1073741675;
LABEL_225:
            v56 = v130;
            goto LABEL_226;
          }
          continue;
        }
        *(_QWORD *)v49 = v65;
        *((_QWORD *)v49 + 1) = v67;
        v49[1] = v152;
        *((_QWORD *)v49 + 4) = v153;
        ++v162;
        v72 = EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
        v73 = v64;
        if ( v72 )
          v73 = 0;
        v119 = v73;
        v117 = v73;
        LODWORD(v74) = 80;
        v124 = 80LL;
        v120 = 80;
        v75 = 0LL;
        v133 = 0LL;
        v76 = (_OWORD *)v123;
        *(_OWORD *)v22 = *(_OWORD *)v123;
        *(_OWORD *)(v22 + 16) = v76[1];
        *(_OWORD *)(v22 + 32) = v76[2];
        *(_OWORD *)(v22 + 48) = v76[3];
        *(_OWORD *)(v22 + 64) = v76[4];
        *(_OWORD *)(v22 + 24) = *(_OWORD *)(v128 + 24);
        v77 = (unsigned int *)v139;
        *(_DWORD *)v22 = v41 | *(_DWORD *)(v139 + 4LL * v129 + 20);
        if ( v40 )
        {
          if ( (v40 & 8) != 0 )
          {
            v75 = (unsigned __int16 *)(v22 + 80);
            *(_DWORD *)(v22 + 80) = 65560;
            *(_WORD *)(v22 + 86) = 16;
            *(_WORD *)(v22 + 84) &= ~1u;
            *(_WORD *)(v22 + 84) &= 1u;
            *(_OWORD *)(v22 + 88) = *a7;
            *(_WORD *)(v22 + 4) |= 1u;
            LODWORD(v74) = 104;
            v124 = 104LL;
            v120 = 104;
            v133 = (unsigned __int16 *)(v22 + 80);
          }
          if ( (v40 & 2) != 0 )
          {
            v78 = (unsigned __int16 *)(v22 + (unsigned int)v74);
            v79 = Src[0];
            memmove(v78, Src, Src[0]);
            *(_WORD *)(v22 + 4) |= 1u;
            v74 = (unsigned int)(v79 + v124);
            v124 = v74;
            v120 = v74;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v78;
            v133 = v78;
          }
          if ( (v40 & 1) != 0 )
          {
            v80 = (unsigned int)v74;
            v81 = (unsigned __int16 *)((unsigned int)v74 + v22);
            *(_DWORD *)v81 = 196624;
            v81[3] = 4;
            v81[2] &= ~1u;
            v81[2] &= 1u;
            *((_DWORD *)v81 + 2) = PsGetCurrentProcessSessionId();
            *(_WORD *)(v22 + 4) |= 1u;
            LODWORD(v74) = v80 + 16;
            v124 = v80 + 16;
            v120 = v80 + 16;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v81;
            v133 = v81;
          }
          if ( (v40 & 0x20) != 0 )
          {
            v82 = (unsigned __int16 *)((unsigned int)v74 + v22);
            *(_DWORD *)v82 = 851984;
            v82[3] = 8;
            v82[2] &= ~1u;
            v82[2] &= 1u;
            *((_QWORD *)v82 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
            *(_WORD *)(v22 + 4) |= 1u;
            LODWORD(v74) = v74 + 16;
            v124 = (unsigned int)v74;
            v120 = v74;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v82;
            v133 = v82;
            v41 = v115;
          }
          if ( (v40 & 0x40) != 0 )
          {
            v83 = v74;
            v84 = (unsigned __int16 *)((unsigned int)v74 + v22);
            *(_DWORD *)v84 = 655376;
            v84[3] = 8;
            v84[2] &= ~1u;
            v84[2] &= 1u;
            if ( (v114 & 0x10) != 0 || (EtwpCreateEventKey(&v143), v114 |= 0x10u, !v158) )
            {
              v85 = v143;
            }
            else
            {
              v85 = v143;
              *v158 = v143;
            }
            *((_QWORD *)v84 + 1) = v85;
            *(_WORD *)(v22 + 4) |= 1u;
            LODWORD(v74) = v83 + 16;
            v124 = (unsigned int)(v83 + 16);
            v120 = v83 + 16;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v84;
            v133 = v84;
          }
          if ( (v40 & 4) != 0 )
          {
            v86 = (unsigned __int16 *)(v22 + (unsigned int)v74);
            v87 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v86, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            *(_WORD *)(v22 + 4) |= 1u;
            v74 = *v87 + (unsigned int)v124;
            v124 = v74;
            v120 = v74;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v86;
            v133 = v86;
          }
          if ( (v40 & 0x10) != 0 )
          {
            v88 = (unsigned __int16 *)(v22 + (unsigned int)v74);
            v89 = (unsigned __int16 *)v147;
            memmove(v88, v147, *(unsigned __int16 *)v147);
            *(_WORD *)(v22 + 4) |= 1u;
            v74 = *v89 + (unsigned int)v124;
            v124 = v74;
            v120 = v74;
            if ( v75 )
              v75[2] |= 1u;
            v75 = v88;
            v133 = v88;
          }
        }
        v90 = v159;
        if ( v159 )
        {
          v91 = (unsigned __int16 *)(v22 + (unsigned int)v74);
          v92 = v125;
          v93 = (v125 + 15) & 0xFFF8;
          *v91 = v93;
          v91[1] = 12;
          v91[3] = v92;
          v91[2] &= ~1u;
          v91[2] &= 1u;
          v94 = v93 - v92 - 8;
          v95 = v92;
          memmove(v91 + 4, v90, v92);
          memset((char *)v91 + v95 + 8, 0, v94);
          *(_WORD *)(v22 + 4) |= 1u;
          v74 = *v91 + (unsigned int)v124;
          v124 = v74;
          v120 = v74;
          if ( v75 )
            v75[2] |= 1u;
          v75 = v91;
          v133 = v91;
          v77 = (unsigned int *)v139;
        }
        if ( v127 )
        {
          v96 = (unsigned __int16 *)(v22 + (unsigned int)v74);
          v97 = v126;
          v98 = (v126 + 15) & 0xFFF8;
          *v96 = v98;
          v96[1] = 11;
          v96[3] = v97;
          v96[2] &= ~1u;
          v96[2] &= 1u;
          v99 = v96 + 4;
          v142 = v96 + 4;
          v148 = (char *)v96 + v97 + 8;
          memset(v148, 0, (unsigned __int16)(v98 - v97 - 8));
          *(_WORD *)(v22 + 4) |= 1u;
          v74 = *v96 + (unsigned int)v124;
          v124 = v74;
          v120 = v74;
          if ( v75 )
            v75[2] |= 1u;
        }
        else
        {
          v99 = v142;
        }
        v100 = 0;
        v146 = 0;
        while ( v100 < a10 )
        {
          v101 = *(unsigned int *)(v131 + 16LL * v100 + 8);
          v102 = *(__int64 **)(v131 + 16LL * v100);
          if ( a14 )
          {
            v103 = *(_BYTE *)(v131 + 16LL * v100 + 12);
            v41 = v115;
            v99 = v142;
            LODWORD(v74) = v120;
            v124 = v120;
          }
          else
          {
            v103 = 0;
          }
          if ( v103 )
          {
            v104 = v103 - 1;
            if ( v104 )
            {
              if ( v104 == 2 && (_DWORD)v101 == 8 )
              {
                if ( (unsigned __int64)(v102 + 1) > 0x7FFFFFFF0000LL || v102 + 1 < v102 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v140 = *v102;
              }
            }
            else
            {
              if ( !v99 )
                goto LABEL_213;
              v105 = (unsigned __int16 *)((char *)v99 + v101);
              if ( (char *)v99 + v101 > v148 || !v127 )
                goto LABEL_213;
              if ( (_DWORD)v101
                && ((unsigned __int64)v102 + v101 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v102 + v101) < v102) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v99, v102, v101);
              v99 = v105;
              v142 = v105;
              --v127;
              LODWORD(v74) = v124;
            }
          }
          else
          {
            if ( (int)v101 + (int)v74 < (unsigned int)v74 )
            {
              v120 = -1;
LABEL_213:
              v116 = -1073741820;
              *(_DWORD *)v22 = v41 | v77[7];
              *(_QWORD *)(v22 + 16) = v140;
              LOBYTE(v17) = v118;
              LODWORD(v22) = v122;
              LOBYTE(v16) = v119;
              v56 = v130;
              v18 = v123;
              v57 = v128;
              goto LABEL_227;
            }
            v120 = v101 + v74;
            if ( (int)v101 + (int)v74 > v41 )
              goto LABEL_213;
            v135 = KeGetCurrentThread()->PreviousMode;
            if ( v135
              && (_DWORD)v101
              && ((unsigned __int64)v102 + v101 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v102 + v101) < v102) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v22 + (unsigned int)v74), v102, v101);
            v41 = v115;
            v99 = v142;
            LODWORD(v74) = v120;
            v124 = v120;
          }
          v146 = ++v100;
        }
        v20 = v138;
        if ( v138 )
        {
          v106 = *v138;
          _bittestandset64(&v106, v122);
          *v20 = v106;
        }
        *(_QWORD *)(v22 + 16) = v140;
        v107 = CurrentThread;
        *(_DWORD *)(v22 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v22 + 60) = v107->UserTime;
        *(_DWORD *)(v22 + 8) = v107[1].KernelStack;
        *(_DWORD *)(v22 + 12) = v107[1].CurrentRunTime;
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v77[3] & 0x80000) != 0 )
        {
          EtwpSendTraceEvent((__int64)v77, (__int64)&v152);
          v17 = v118;
          LODWORD(v22) = v122;
          v19 = v131;
LABEL_222:
          v20 = v138;
        }
        else
        {
          v17 = v118;
          LODWORD(v22) = v122;
          v19 = v131;
        }
        v16 = v119;
        v24 = v137;
        v26 = a9;
        v27 = a8;
        goto LABEL_224;
      }
      break;
    }
    v16 = v119;
    if ( (_BYTE)v119 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 400), 1u);
      v16 = (unsigned __int8)v16;
      if ( EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
        v16 = 0;
    }
    v17 = v118;
    v19 = v131;
    v24 = v137;
    v18 = v123;
    v20 = v138;
    v26 = a9;
  }
  while ( (_DWORD)v22 != 3 );
  v66 = -1073741058;
  v56 = v130;
  if ( !*(_BYTE *)(v130 + 5025) )
    v66 = -1073741816;
  v116 = v66;
LABEL_226:
  v57 = v128;
LABEL_227:
  if ( EvaluateCurrentState((_DWORD **)&g_Feature_1949821240_61231939_FeatureDescriptorDetails) && (_BYTE)v16 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v56 + 8LL * (unsigned int)v22 + 400), 1u);
  if ( (v114 & 8) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v116 < 0 )
  {
    EtwpFailLogging(a8, a9, v57, (__int64)v161, v17, v116, v18 + 40, 1);
  }
  else if ( v162 )
  {
    v108 = (signed __int64 *)v161;
    v109 = v162;
    do
    {
      EtwpReleaseTraceBuffer(v108 + 2);
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v56 + 8LL * *(unsigned int *)*v108 + 400),
        1u);
      v108 += 6;
      --v109;
    }
    while ( v109 );
  }
  v110 = CurrentThread;
  v111 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v111;
  if ( !v111
    && ($2B8565053CDC740D4E4887693DD8AC9E *)v110->ApcState.ApcListHead[0].Flink != &v110->152
    && !v110->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v110);
  }
  return (unsigned int)v116;
}
