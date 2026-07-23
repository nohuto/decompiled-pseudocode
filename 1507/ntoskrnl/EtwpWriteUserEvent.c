/*
 * XREFs of EtwpWriteUserEvent @ 0x140437B50
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsGetCurrentProcessSessionId @ 0x1400D09F0 (PsGetCurrentProcessSessionId.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpCreateEventKey @ 0x14011F864 (EtwpCreateEventKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     EtwpFailLogging @ 0x14025C558 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14025C7C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14025EF08 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140438A58 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1406E24E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406E9CF4 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1406E9FB4 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpWriteUserEvent(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        __int64 a6,
        _OWORD *a7,
        unsigned __int8 a8,
        __int64 a9,
        unsigned int a10,
        unsigned __int64 a11,
        _QWORD *a12,
        __int64 a13,
        char a14,
        unsigned __int16 *a15,
        unsigned __int64 *a16)
{
  unsigned __int64 v17; // r10
  unsigned int v18; // r12d
  unsigned __int16 v19; // dx
  unsigned int v20; // r8d
  __int64 v21; // rsi
  unsigned __int16 *v22; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v24; // r14
  char v25; // r11
  bool v26; // zf
  unsigned int v27; // ecx
  char v28; // r13
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int8 v33; // al
  int v34; // edx
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  bool v37; // al
  unsigned int v38; // esi
  int v39; // ebx
  ULONG v40; // r14d
  int v41; // eax
  unsigned int v42; // edx
  _OWORD *v43; // r15
  __int64 v44; // rax
  unsigned int v45; // edx
  ULONG v46; // r9d
  unsigned int v47; // r8d
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *v52; // rsi
  __int64 v53; // r9
  unsigned int v54; // eax
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // r11
  ULONG v58; // r13d
  unsigned __int16 *v59; // r15
  _OWORD *v60; // rax
  unsigned __int16 *v61; // rsi
  int v62; // edi
  unsigned __int16 *v63; // r8
  ULONG v64; // r10d
  unsigned __int16 *v65; // r9
  unsigned __int64 v66; // rax
  void *v67; // rdx
  char *v68; // rsi
  unsigned int v69; // ebx
  __int64 v70; // r15
  __int64 v71; // rdx
  __int64 *v72; // r9
  unsigned __int8 v73; // cl
  size_t v74; // rdx
  char *v75; // r9
  void *v76; // r10
  _QWORD *v77; // rdx
  __int64 v78; // rcx
  int v79; // ecx
  size_t v80; // r8
  char *v81; // rdi
  unsigned __int16 *v82; // r12
  unsigned int v83; // ecx
  unsigned __int16 v84; // si
  unsigned __int16 v85; // si
  __int64 v86; // rbx
  unsigned __int16 *v87; // rbx
  __int64 v88; // rcx
  unsigned __int16 v89; // dx
  ULONG v90; // edi
  unsigned __int16 *v91; // rsi
  unsigned __int16 *v92; // rdi
  unsigned __int16 *v93; // rsi
  unsigned __int16 *v94; // rbx
  unsigned __int16 *v95; // rdi
  __int64 v96; // r9
  signed __int64 *v97; // rdx
  signed __int64 v98; // rax
  signed __int64 v99; // rtt
  __int16 v100; // ax
  int v102; // eax
  char v103; // al
  __int64 v104; // rcx
  char v105; // al
  char v106; // al
  PSLIST_ENTRY v107; // rax
  _SLIST_ENTRY *v108; // rax
  __int64 v109; // rcx
  void *v110; // rsp
  __int64 v111; // rcx
  void *v112; // rsp
  unsigned __int16 *v113; // rsi
  signed int v114; // eax
  int v115; // ebx
  signed int v116; // ecx
  char v117; // [rsp+20h] [rbp-610h] BYREF
  _BYTE v118[416]; // [rsp+450h] [rbp-1E0h] BYREF
  char v119; // [rsp+630h] [rbp+0h]
  unsigned __int8 v120; // [rsp+638h] [rbp+8h]
  int v121; // [rsp+640h] [rbp+10h]
  signed int v122; // [rsp+644h] [rbp+14h]
  ULONG pulResult; // [rsp+648h] [rbp+18h] BYREF
  unsigned __int16 v124; // [rsp+64Ch] [rbp+1Ch]
  unsigned __int16 v125; // [rsp+650h] [rbp+20h]
  int v126; // [rsp+654h] [rbp+24h]
  struct _KTHREAD *v127; // [rsp+658h] [rbp+28h]
  __int64 v128; // [rsp+660h] [rbp+30h]
  __int64 v129; // [rsp+668h] [rbp+38h]
  __int64 v130; // [rsp+670h] [rbp+40h]
  unsigned int v131; // [rsp+678h] [rbp+48h]
  unsigned __int16 v132; // [rsp+67Ch] [rbp+4Ch]
  unsigned int v133; // [rsp+680h] [rbp+50h]
  unsigned __int16 *v134; // [rsp+688h] [rbp+58h]
  void *v135; // [rsp+690h] [rbp+60h] BYREF
  unsigned __int64 v136; // [rsp+698h] [rbp+68h]
  char PreviousMode; // [rsp+6A0h] [rbp+70h]
  __int64 v138; // [rsp+6A8h] [rbp+78h]
  __int64 v139; // [rsp+6B0h] [rbp+80h]
  void *v141; // [rsp+6C0h] [rbp+90h]
  unsigned int v142; // [rsp+6C8h] [rbp+98h]
  __int64 v143; // [rsp+6D0h] [rbp+A0h] BYREF
  void *v144; // [rsp+6D8h] [rbp+A8h]
  unsigned __int64 v145; // [rsp+6E0h] [rbp+B0h] BYREF
  unsigned int v146; // [rsp+6E8h] [rbp+B8h]
  unsigned int v147; // [rsp+6ECh] [rbp+BCh]
  char *v148; // [rsp+6F0h] [rbp+C0h]
  __int64 v149; // [rsp+6F8h] [rbp+C8h]
  __int64 v150; // [rsp+700h] [rbp+D0h] BYREF
  _QWORD *v151; // [rsp+708h] [rbp+D8h]
  __int64 v152; // [rsp+710h] [rbp+E0h] BYREF
  __int64 v153; // [rsp+718h] [rbp+E8h] BYREF
  __int64 v154; // [rsp+720h] [rbp+F0h] BYREF
  __int128 v155; // [rsp+728h] [rbp+F8h] BYREF
  __int64 v156; // [rsp+738h] [rbp+108h]
  __int64 v157; // [rsp+740h] [rbp+110h] BYREF
  unsigned __int64 *v158; // [rsp+748h] [rbp+118h]
  void *v159; // [rsp+750h] [rbp+120h]
  _OWORD v160[24]; // [rsp+760h] [rbp+130h] BYREF
  unsigned int v161; // [rsp+8E0h] [rbp+2B0h]
  _WORD Src[40]; // [rsp+8F0h] [rbp+2C0h] BYREF

  v132 = a3;
  v129 = a1;
  v149 = a1;
  v128 = a6;
  v17 = a11;
  v130 = a11;
  v151 = a12;
  v158 = a16;
  v18 = 0;
  v122 = 0;
  v135 = 0LL;
  v144 = 0LL;
  v19 = 0;
  v125 = 0;
  v145 = 0LL;
  v20 = a10;
  if ( a11 )
  {
    if ( !a10 )
      return 3221225485LL;
  }
  else if ( a10 )
  {
    return 3221225485LL;
  }
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = a1;
  if ( a13 )
    v21 = a13;
  v138 = v21;
  Src[0] = 0;
  v119 = 0;
  v161 = 0;
  if ( a16 && *a16 )
  {
    v145 = *a16;
    v119 = 16;
  }
  if ( a15 )
  {
    v19 = *a15;
    v125 = *a15;
  }
  v22 = 0LL;
  if ( v19 )
    v22 = a15;
  v159 = v22;
  CurrentThread = KeGetCurrentThread();
  v127 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v24 = ~a4 & a2;
  v25 = a14;
  while ( 1 )
  {
    v26 = !_BitScanForward(&v27, v24);
    v133 = v27;
    if ( v26 )
      break;
    v139 = 1LL;
    v155 = 0uLL;
    v156 = 0LL;
    v121 = 80;
    v28 = 0;
    v124 = 0;
    v126 = 0;
    v141 = 0LL;
    v148 = 0LL;
    v24 &= v24 - 1;
    v120 = v24;
    v29 = v27;
    v30 = v21 + 32LL * v27;
    if ( v151 )
    {
      v31 = *v151;
      if ( _bittest64(&v31, *(unsigned __int8 *)(v30 + 118)) )
        continue;
    }
    v32 = 1LL;
    if ( !*(_DWORD *)(v30 + 112) )
      continue;
    v33 = *(_BYTE *)(v30 + 116);
    if ( a8 > v33 )
    {
      if ( v33 )
        continue;
    }
    v34 = *(_DWORD *)(v30 + 120);
    if ( (v34 & 0x40) == 0 || a9 )
    {
      v32 = 1LL;
      if ( (*(_QWORD *)(v30 + 128) & a9) == 0 || (a9 & *(_QWORD *)(v30 + 136)) != *(_QWORD *)(v30 + 136) )
        continue;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (a5 & 2) != 0 || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x400) != 0 )
    {
      v32 = 1LL;
      if ( (v34 & 0x200) != 0 )
        continue;
    }
    v36 = *(_QWORD *)(v21 + 368);
    v37 = v36
       && ((*(_DWORD *)(v36 + 72 * v29) & 0x80000200) == 0x80000200
        || (*(_DWORD *)(v36 + 72 * v29) & 0x80000100) == 0x80000100);
    v38 = v133;
    if ( v37 )
    {
      v103 = EtwpApplyEventIdPayloadFilterOnUserEvent(v138, v133, v132, v128, v20, v17);
      v20 = a10;
      v17 = v130;
      v25 = a14;
      if ( !v103 )
        goto LABEL_145;
    }
    v39 = 0;
    if ( a7 )
    {
      v40 = 104;
      v121 = 104;
      v39 = 8;
    }
    else
    {
      v40 = v121;
    }
    v41 = *(_DWORD *)(v30 + 120);
    if ( (v41 & 0xFFFFFF9F) != 0 )
    {
      if ( (v41 & 1) != 0 )
      {
        if ( (v119 & 2) == 0 )
        {
          EtwpGetSidExtendedHeaderItem(Src);
          v119 |= 2u;
          v20 = a10;
          v17 = v130;
          v25 = a14;
        }
        v39 |= 2u;
        v40 += Src[0];
        v121 = v40;
      }
      v102 = *(_DWORD *)(v30 + 120);
      if ( (v102 & 2) != 0 )
      {
        v39 |= 1u;
        v40 += 16;
        v121 = v40;
      }
      if ( (v102 & 0x80u) != 0 )
      {
        v39 |= 0x20u;
        v40 += 16;
        v121 = v40;
      }
      if ( (v102 & 0x100) != 0 )
      {
        v39 |= 0x40u;
        v40 += 16;
        v121 = v40;
      }
      if ( (v102 & 4) != 0 )
      {
        v104 = *(_QWORD *)(v138 + 368);
        if ( !v104 || (v105 = 1, (*(_DWORD *)(v104 + 72 * v29) & 0x80001000) != 0x80001000) )
          v105 = 0;
        if ( !v105
          || (v106 = EtwpApplyStackWalkFilterOnUserEvent(v128, v138, v38, v32), v20 = a10, v17 = v130, v25 = a14, v106) )
        {
          if ( (v119 & 1) == 0 )
          {
            v107 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
            if ( v107 )
            {
              v108 = v107 + 1;
            }
            else
            {
              v108 = 0LL;
              v40 = v121;
            }
            v135 = v108;
            if ( v108 )
            {
              EtwpGetStackExtendedHeaderItem((__int64)v127, 0, 0x100u, (__int64)&v135, 0, 0LL);
              v119 ^= (v119 ^ (8 * (v135 != 0LL))) & 8;
            }
            else
            {
              if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v150, (__int64)&v153) )
              {
                v109 = v150;
              }
              else
              {
                v109 = 0LL;
                v150 = 0LL;
                v153 = 0LL;
              }
              if ( (unsigned __int64)&v153 - v109 > 0x1440 )
              {
                v110 = alloca(1552LL);
                v135 = &v117;
                EtwpGetStackExtendedHeaderItem((__int64)v127, 0, 0xC0u, (__int64)&v135, 0, 0LL);
              }
            }
            v119 |= 1u;
            v20 = a10;
            v17 = v130;
            v25 = a14;
          }
          if ( v135 )
          {
            v39 |= 4u;
            v40 += *(unsigned __int16 *)v135;
            v121 = v40;
          }
        }
      }
      if ( (*(_DWORD *)(v30 + 120) & 8) != 0 )
      {
        if ( (v119 & 4) != 0 )
        {
          v113 = (unsigned __int16 *)v144;
        }
        else
        {
          if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v154, (__int64)&v152) )
          {
            v111 = v154;
          }
          else
          {
            v111 = 0LL;
            v154 = 0LL;
            v152 = 0LL;
          }
          if ( (unsigned __int64)&v152 - v111 <= 0x1E0 )
          {
            v113 = (unsigned __int16 *)v144;
          }
          else
          {
            v112 = alloca(480LL);
            v113 = (unsigned __int16 *)v118;
            v144 = v118;
            EtwpGetPsmKeyExtendedHeaderItem(v118);
          }
          v119 |= 4u;
          v20 = a10;
          v17 = v130;
          v25 = a14;
        }
        if ( v113 )
        {
          v39 |= 0x10u;
          v40 += *v113;
          v121 = v40;
        }
      }
    }
    v42 = *(unsigned __int16 *)(v30 + 118);
    v131 = v42;
    v43 = &v160[3 * v161];
    if ( v20 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
      {
        v44 = 16LL * v20;
        if ( v44 )
        {
          if ( (v17 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v17 + v44 > MmUserProbeAddress || v17 + v44 < v17 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v45 = 0;
      v40 = v121;
      while ( 1 )
      {
        v147 = v45;
        if ( v45 >= v20 )
          break;
        v46 = v40;
        v142 = *(_DWORD *)(v17 + 16LL * v45 + 8);
        v47 = v142;
        if ( v142 > 0xFFFF )
        {
          v122 = -2147483643;
          CurrentThread = v127;
          v24 = v120;
          v49 = v129;
          v50 = v128;
          goto LABEL_148;
        }
        if ( v25 )
        {
          v48 = *(_BYTE *)(v17 + 16LL * v45 + 12);
          v47 = v142;
        }
        else
        {
          v48 = 0;
        }
        if ( v48 )
        {
          if ( v48 == 1 )
          {
            v124 += v47;
            ++v126;
          }
          v40 = v121;
        }
        else
        {
          v40 = v47 + v121;
          v121 += v47;
        }
        if ( v40 < v46 )
        {
          v122 = -2147483643;
          CurrentThread = v127;
          v24 = v120;
          v49 = v129;
          v50 = v128;
          goto LABEL_148;
        }
        ++v45;
        v20 = a10;
      }
      v42 = v131;
    }
    if ( v126 )
    {
      v40 += (v124 + 15) & 0xFFFFFFF8;
      v121 = v40;
    }
    if ( v125 )
    {
      v40 += (v125 + 15) & 0xFFFFFFF8;
      v121 = v40;
    }
    *((_DWORD *)v43 + 10) = v40;
    v51 = v42;
    v52 = (PEX_RUNDOWN_REF_CACHE_AWARE *)&EtwpLoggerRundown[v51];
    v26 = ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v51], 1u) == 0;
    v54 = v131;
    if ( v26 )
    {
      v55 = v139;
    }
    else
    {
      if ( v131 >= 0x40 )
      {
        v55 = 1LL;
      }
      else
      {
        _mm_lfence();
        v55 = WmipLoggerContext[v51];
        v40 = v121;
      }
      v139 = v55;
      v28 = 1;
    }
    if ( (v55 & 1) != 0 )
    {
      if ( v28 )
      {
        ExReleaseRundownProtectionCacheAwareEx(*v52, 1u);
        v54 = v131;
      }
      v20 = a10;
      v17 = v130;
      v25 = a14;
      CurrentThread = v127;
      v24 = v120;
      v21 = v138;
      if ( v54 != 3 )
        continue;
      PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v157, v53);
      v114 = -1073741058;
      if ( !*(_BYTE *)(v157 + 425) )
        v114 = -1073741816;
      v122 = v114;
      PsDereferenceMonitorContextServerSilo(v157);
      goto LABEL_244;
    }
    if ( !PsEqualCurrentServerSilo(*(_QWORD *)(v55 + 912)) )
    {
      ExReleaseRundownProtectionCacheAwareEx(*v52, 1u);
      v122 = -1073741816;
      CurrentThread = v127;
LABEL_244:
      v24 = v120;
      break;
    }
    v56 = EtwpReserveTraceBuffer((unsigned int *)v55, v40, (__int64)&v155, &v143, 0);
    v57 = v56;
    v136 = v56;
    if ( !v56 )
    {
      if ( v40 <= 0xFFF8 )
      {
        v115 = -1073741801;
        if ( v40 > *(_DWORD *)(v55 + 8) )
          v115 = -2147483643;
      }
      else
      {
        v115 = -1073741675;
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent((_QWORD *)(v129 + 24), (__int16 *)(v128 + 40), (unsigned __int16 *)(v55 + 152), v115);
      v116 = v122;
      if ( v122 >= 0 )
      {
        if ( (*(_DWORD *)(v55 + 12) & 0x8000000) == 0 )
          v116 = v115;
        v122 = v116;
      }
      ExReleaseRundownProtectionCacheAwareEx(*v52, 1u);
      v26 = v115 == -1073741675;
      v20 = a10;
      v17 = v130;
      v25 = a14;
      CurrentThread = v127;
      v24 = v120;
      v21 = v138;
      if ( !v26 )
        continue;
      v122 = -1073741675;
      goto LABEL_244;
    }
    *(_QWORD *)v43 = v55;
    *((_QWORD *)v43 + 1) = v56;
    v43[1] = v155;
    *((_QWORD *)v43 + 4) = v156;
    ++v161;
    v58 = 80;
    pulResult = 80;
    v59 = 0LL;
    v134 = 0LL;
    v60 = (_OWORD *)v128;
    *(_OWORD *)v57 = *(_OWORD *)v128;
    *(_OWORD *)(v57 + 16) = v60[1];
    *(_OWORD *)(v57 + 32) = v60[2];
    *(_OWORD *)(v57 + 48) = v60[3];
    *(_OWORD *)(v57 + 64) = v60[4];
    *(_OWORD *)(v57 + 24) = *(_OWORD *)(v129 + 24);
    *(_DWORD *)v57 = v40 | *(_DWORD *)(v55 + 4LL * v132 + 20);
    if ( v39 )
    {
      if ( (v39 & 8) != 0 )
      {
        v59 = (unsigned __int16 *)(v57 + 80);
        *(_DWORD *)(v57 + 80) = 65560;
        *(_WORD *)(v57 + 86) = 16;
        *(_WORD *)(v57 + 84) &= ~1u;
        *(_WORD *)(v57 + 84) &= 1u;
        *(_OWORD *)(v57 + 88) = *a7;
        *(_WORD *)(v57 + 4) |= 1u;
        v58 = 104;
        pulResult = 104;
        v134 = (unsigned __int16 *)(v57 + 80);
      }
      if ( (v39 & 2) != 0 )
      {
        v61 = (unsigned __int16 *)(v57 + v58);
        v62 = Src[0];
        memmove(v61, Src, Src[0]);
        v57 = v136;
        *(_WORD *)(v136 + 4) |= 1u;
        v58 += v62;
        pulResult = v58;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v61;
        v134 = v61;
      }
      if ( (v39 & 1) != 0 )
      {
        v90 = v58;
        v91 = (unsigned __int16 *)(v58 + v57);
        *(_DWORD *)v91 = 196624;
        v91[3] = 4;
        v91[2] &= ~1u;
        v91[2] &= 1u;
        *((_DWORD *)v91 + 2) = PsGetCurrentProcessSessionId();
        v57 = v136;
        *(_WORD *)(v136 + 4) |= 1u;
        v58 += 16;
        pulResult = v90 + 16;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v91;
        v134 = v91;
      }
      if ( (v39 & 0x20) != 0 )
      {
        v63 = (unsigned __int16 *)(v58 + v57);
        *(_DWORD *)v63 = 851984;
        v63[3] = 8;
        v63[2] &= ~1u;
        v63[2] &= 1u;
        *((_QWORD *)v63 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
        *(_WORD *)(v57 + 4) |= 1u;
        v58 += 16;
        pulResult = v58;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v63;
        v134 = v63;
        v40 = v121;
      }
      if ( (v39 & 0x40) != 0 )
      {
        v64 = v58;
        v65 = (unsigned __int16 *)(v58 + v57);
        *(_DWORD *)v65 = 655376;
        v65[3] = 8;
        v65[2] &= ~1u;
        v65[2] &= 1u;
        if ( (v119 & 0x10) != 0 || (EtwpCreateEventKey(&v145), v119 |= 0x10u, !v158) )
        {
          v66 = v145;
        }
        else
        {
          v66 = v145;
          *v158 = v145;
        }
        *((_QWORD *)v65 + 1) = v66;
        *(_WORD *)(v57 + 4) |= 1u;
        v58 = v64 + 16;
        pulResult = v64 + 16;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v65;
        v134 = v65;
      }
      if ( (v39 & 4) != 0 )
      {
        v92 = (unsigned __int16 *)(v57 + v58);
        v93 = (unsigned __int16 *)v135;
        memmove(v92, v135, *(unsigned __int16 *)v135);
        v57 = v136;
        *(_WORD *)(v136 + 4) |= 1u;
        v58 += *v93;
        pulResult = v58;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v92;
        v134 = v92;
      }
      if ( (v39 & 0x10) != 0 )
      {
        v94 = (unsigned __int16 *)(v57 + v58);
        v95 = (unsigned __int16 *)v144;
        memmove(v94, v144, *(unsigned __int16 *)v144);
        v57 = v136;
        *(_WORD *)(v136 + 4) |= 1u;
        v58 += *v95;
        pulResult = v58;
        if ( v59 )
          v59[2] |= 1u;
        v59 = v94;
        v134 = v94;
      }
    }
    v67 = v159;
    if ( v159 )
    {
      v82 = (unsigned __int16 *)(v57 + v58);
      v83 = v125;
      v84 = (v125 + 15) & 0xFFF8;
      *v82 = v84;
      v82[1] = 12;
      v82[3] = v83;
      v82[2] &= ~1u;
      v82[2] &= 1u;
      v85 = v84 - v83 - 8;
      v86 = v83;
      memmove(v82 + 4, v67, v83);
      memset((char *)v82 + v86 + 8, 0, v85);
      v57 = v136;
      *(_WORD *)(v136 + 4) |= 1u;
      v58 += *v82;
      pulResult = v58;
      if ( v59 )
        v59[2] |= 1u;
      v59 = v82;
      v134 = v82;
      v18 = 0;
    }
    if ( v126 )
    {
      v87 = (unsigned __int16 *)(v57 + v58);
      v88 = v124;
      v89 = (v124 + 15) & 0xFFF8;
      *v87 = v89;
      v87[1] = 11;
      v87[3] = v88;
      v87[2] &= ~1u;
      v87[2] &= 1u;
      v68 = (char *)(v87 + 4);
      v141 = v87 + 4;
      v148 = (char *)v87 + v88 + 8;
      memset(v148, 0, (unsigned __int16)(v89 - v88 - 8));
      v57 = v136;
      *(_WORD *)(v136 + 4) |= 1u;
      v58 += *v87;
      pulResult = v58;
      if ( v59 )
        v59[2] |= 1u;
    }
    else
    {
      v68 = (char *)v141;
    }
    v69 = 0;
    v20 = a10;
    v70 = v130;
    while ( 1 )
    {
      v146 = v69;
      if ( v69 >= v20 )
        break;
      v71 = *(unsigned int *)(v70 + 16LL * v69 + 8);
      v72 = *(__int64 **)(v70 + 16LL * v69);
      if ( a14 )
      {
        v73 = *(_BYTE *)(v70 + 16LL * v69 + 12);
        v40 = v121;
        v68 = (char *)v141;
        v58 = pulResult;
      }
      else
      {
        v73 = 0;
      }
      if ( !v73 )
      {
        if ( RtlULongAdd(v58, v71, &pulResult) || pulResult > v40 )
          goto LABEL_141;
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        if ( PreviousMode && (_DWORD)v74 && ((unsigned __int64)&v75[v74] > MmUserProbeAddress || &v75[v74] < v75) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v76, v75, v74);
        v40 = v121;
        v68 = (char *)v141;
        v58 = pulResult;
LABEL_102:
        v20 = a10;
        goto LABEL_103;
      }
      v79 = v73 - 1;
      if ( !v79 )
      {
        if ( !v68 || (v80 = *(unsigned int *)(v70 + 16LL * v69 + 8), v81 = &v68[v71], &v68[v71] > v148) || !v126 )
        {
LABEL_141:
          v122 = -1073741820;
          *(_DWORD *)v57 = v40 | *(_DWORD *)(v139 + 28);
          *(_QWORD *)(v57 + 16) = v143;
          CurrentThread = v127;
          v24 = v120;
          v49 = v129;
          v50 = v128;
          goto LABEL_148;
        }
        if ( (_DWORD)v71 && ((unsigned __int64)v72 + v71 > MmUserProbeAddress || (__int64 *)((char *)v72 + v71) < v72) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v68, v72, v80);
        v68 = v81;
        v141 = v81;
        --v126;
        goto LABEL_102;
      }
      if ( v79 == 2 && (_DWORD)v71 == 8 )
      {
        if ( (unsigned __int64)(v72 + 1) > MmUserProbeAddress || v72 + 1 < v72 )
          *(_BYTE *)MmUserProbeAddress = 0;
        v143 = *v72;
      }
LABEL_103:
      ++v69;
      v57 = v136;
    }
    v77 = v151;
    if ( v151 )
    {
      v78 = *v151;
      _bittestandset64(&v78, v131);
      *v77 = v78;
    }
    *(_QWORD *)(v57 + 16) = v143;
    CurrentThread = v127;
    *(_DWORD *)(v57 + 56) = v127->SchedulerApc.SpareLong0;
    *(_DWORD *)(v57 + 60) = CurrentThread->UserTime;
    *(_DWORD *)(v57 + 8) = CurrentThread[1].KernelStack;
    *(_DWORD *)(v57 + 12) = CurrentThread[1].CurrentRunTime;
    if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
      && (*(_DWORD *)(v139 + 12) & 0x80000) != 0 )
    {
      EtwpSendTraceEvent(v139, (__int64)&v155);
      v20 = a10;
    }
    v17 = v130;
    v25 = a14;
    v24 = v120;
LABEL_145:
    v21 = v138;
  }
  v50 = v128;
  v49 = v129;
LABEL_148:
  if ( (v119 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)v135 - 1);
    v49 = v129;
    v50 = v128;
  }
  if ( v122 < 0 )
  {
    EtwpFailLogging(a8, a9, v49, (__int64)v160, v24, v122, v50 + 40, 1);
  }
  else
  {
    while ( 1 )
    {
      v133 = v18;
      if ( v18 >= v161 )
        break;
      v96 = *(_QWORD *)&v160[3 * v18 + 1];
      v97 = (signed __int64 *)*((_QWORD *)&v160[3 * v18 + 1] + 1);
      _m_prefetchw(v97);
      v98 = *v97;
      if ( (v96 ^ (unsigned __int64)*v97) >= 0xF )
      {
LABEL_175:
        _InterlockedDecrement((volatile signed __int32 *)(v96 + 12));
      }
      else
      {
        while ( 1 )
        {
          v99 = v98;
          v98 = _InterlockedCompareExchange64(v97, v98 + 1, v98);
          if ( v99 == v98 )
            break;
          if ( (v96 ^ (unsigned __int64)v98) >= 0xF )
            goto LABEL_175;
        }
      }
      ExReleaseRundownProtectionCacheAwareEx(
        (PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[**(unsigned int **)&v160[3 * v18]],
        1u);
      v18 = v133 + 1;
    }
    CurrentThread = v127;
  }
  v100 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v100;
  if ( !v100
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v122;
}
