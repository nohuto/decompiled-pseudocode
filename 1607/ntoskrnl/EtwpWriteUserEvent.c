/*
 * XREFs of EtwpWriteUserEvent @ 0x140510920
 * Callers:
 *     NtTraceEvent @ 0x1400D5560 (NtTraceEvent.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoGetStackLimits @ 0x14004F360 (IoGetStackLimits.c)
 *     EtwpReleaseTraceBuffer @ 0x1400749B0 (EtwpReleaseTraceBuffer.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140074BE0 (EtwpIsEventNameFilterEnabled.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400AA368 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCreateEventKey @ 0x1400ACC34 (EtwpCreateEventKey.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400D68F0 (EtwpReserveTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D81F0 (EtwpLevelKeywordEnabled.c)
 *     PsGetCurrentProcessSessionId @ 0x1400FB920 (PsGetCurrentProcessSessionId.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x140227AAC (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140227E34 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x14022920C (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventNameFilter @ 0x1402299E4 (EtwpApplyEventNameFilter.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FFB14 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069F938 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x1406A8A54 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1406A8D10 (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
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
        __int16 *a15,
        unsigned __int64 *a16)
{
  __int64 v16; // r10
  __int64 v17; // rdi
  unsigned int v18; // esi
  __int16 v19; // cx
  __int64 v20; // r15
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v22; // dl
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // rax
  bool v28; // al
  __int64 v29; // r9
  unsigned int v30; // r11d
  _KPROCESS *Process; // rcx
  __int64 v32; // rcx
  bool v33; // al
  unsigned int v34; // ebx
  unsigned __int8 v35; // r8
  int v36; // edi
  unsigned int v37; // r15d
  int v38; // eax
  unsigned int v39; // edx
  _OWORD *v40; // r14
  __int64 v41; // rax
  unsigned int v42; // edx
  unsigned int v43; // r9d
  unsigned int v44; // r8d
  unsigned __int8 v45; // al
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rcx
  char v50; // al
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r11
  __int64 v53; // rcx
  unsigned int v54; // r12d
  _WORD *v55; // r14
  _OWORD *v56; // rax
  int v57; // ebx
  _WORD *v58; // r8
  unsigned int v59; // r10d
  _WORD *v60; // r9
  unsigned __int64 v61; // rax
  void *v62; // r9
  unsigned __int16 *v63; // rcx
  unsigned int v64; // edx
  unsigned __int16 v65; // r14
  unsigned __int16 v66; // r14
  _WORD *v67; // rdi
  __int64 v68; // rbx
  char *v69; // rdi
  unsigned int i; // ebx
  size_t v71; // rdx
  __int64 *v72; // r10
  _QWORD *v73; // rbx
  __int64 v74; // rcx
  unsigned __int16 *v75; // rbx
  __int64 v76; // rcx
  unsigned __int16 v77; // dx
  size_t v78; // r8
  char *v79; // r14
  __int64 v80; // rbx
  unsigned __int64 v81; // r12
  unsigned __int16 *v82; // rbx
  void *v83; // rbx
  unsigned __int16 *v84; // rdi
  __int16 v85; // ax
  unsigned int **v87; // r11
  int v88; // eax
  __int64 v89; // rcx
  char v90; // al
  char v91; // al
  char v92; // bl
  void *v93; // rsp
  void *v94; // rsp
  unsigned __int16 *v95; // rbx
  signed int v96; // eax
  __int64 v97; // r14
  int ReserveTraceBufferStatus; // edi
  signed int v99; // ecx
  char v100; // [rsp+20h] [rbp-610h] BYREF
  _BYTE v101[416]; // [rsp+450h] [rbp-1E0h] BYREF
  unsigned __int8 v102; // [rsp+630h] [rbp+0h]
  char v103; // [rsp+631h] [rbp+1h]
  int v104; // [rsp+634h] [rbp+4h]
  int v105; // [rsp+638h] [rbp+8h]
  signed int v106; // [rsp+63Ch] [rbp+Ch]
  unsigned __int8 v107; // [rsp+640h] [rbp+10h]
  unsigned __int16 v108; // [rsp+648h] [rbp+18h]
  __int64 v109; // [rsp+650h] [rbp+20h]
  char v110; // [rsp+658h] [rbp+28h]
  unsigned __int16 v111; // [rsp+65Ah] [rbp+2Ah]
  int v112; // [rsp+65Ch] [rbp+2Ch]
  __int64 v113; // [rsp+660h] [rbp+30h]
  void *v114; // [rsp+668h] [rbp+38h]
  unsigned __int16 v115; // [rsp+670h] [rbp+40h]
  __int64 v116; // [rsp+678h] [rbp+48h]
  unsigned int v117; // [rsp+680h] [rbp+50h]
  unsigned __int64 v118; // [rsp+688h] [rbp+58h]
  void *StackLookasideListEntry; // [rsp+690h] [rbp+60h] BYREF
  void *v120; // [rsp+698h] [rbp+68h]
  unsigned __int64 v121; // [rsp+6A0h] [rbp+70h]
  char PreviousMode; // [rsp+6A9h] [rbp+79h]
  unsigned int v124; // [rsp+6ACh] [rbp+7Ch]
  __int64 v125; // [rsp+6B0h] [rbp+80h]
  unsigned int v126; // [rsp+6B8h] [rbp+88h]
  void *v127; // [rsp+6C0h] [rbp+90h]
  __int64 v128; // [rsp+6C8h] [rbp+98h]
  __int64 v129; // [rsp+6D0h] [rbp+A0h] BYREF
  unsigned __int64 v130; // [rsp+6D8h] [rbp+A8h] BYREF
  void *v131; // [rsp+6E0h] [rbp+B0h]
  unsigned int v132; // [rsp+6E8h] [rbp+B8h]
  unsigned int v133; // [rsp+6ECh] [rbp+BCh]
  void *v134; // [rsp+6F0h] [rbp+C0h]
  char *v135; // [rsp+6F8h] [rbp+C8h]
  _QWORD *v136; // [rsp+700h] [rbp+D0h]
  __int64 v137; // [rsp+708h] [rbp+D8h]
  struct _KTHREAD *v138; // [rsp+710h] [rbp+E0h]
  __int64 v139; // [rsp+718h] [rbp+E8h]
  __int128 v140; // [rsp+720h] [rbp+F0h] BYREF
  __int64 v141; // [rsp+730h] [rbp+100h]
  unsigned __int64 HighLimit; // [rsp+738h] [rbp+108h] BYREF
  unsigned __int64 LowLimit; // [rsp+740h] [rbp+110h] BYREF
  unsigned __int64 v144; // [rsp+748h] [rbp+118h] BYREF
  unsigned __int64 v145; // [rsp+750h] [rbp+120h] BYREF
  unsigned __int64 *v146; // [rsp+758h] [rbp+128h]
  unsigned __int16 *v147; // [rsp+760h] [rbp+130h]
  _OWORD v148[24]; // [rsp+770h] [rbp+140h] BYREF
  unsigned int v149; // [rsp+8F0h] [rbp+2C0h]
  _WORD Src[40]; // [rsp+900h] [rbp+2D0h] BYREF

  v115 = a3;
  v16 = a1;
  v109 = a1;
  v139 = a1;
  v113 = a6;
  v17 = a11;
  v121 = a11;
  v136 = a12;
  v134 = a15;
  v146 = a16;
  v18 = 0;
  v106 = 0;
  StackLookasideListEntry = 0LL;
  v131 = 0LL;
  v19 = 0;
  v111 = 0;
  v130 = 0LL;
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
  v20 = v16;
  if ( a13 )
    v20 = a13;
  v128 = v20;
  Src[0] = 0;
  v103 = 0;
  v149 = 0;
  v125 = *(_QWORD *)(v16 + 376);
  v137 = v125;
  if ( a16 && *a16 )
  {
    v130 = *a16;
    v103 = 16;
  }
  if ( a15 )
  {
    v19 = *a15;
    v111 = *a15;
  }
  if ( !v19 )
    v134 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v138 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v22 = ~a4 & a2;
  v102 = v22;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = !_BitScanForward((unsigned int *)&v24, v22);
          v124 = v24;
          if ( v23 )
          {
            v46 = v125;
            goto LABEL_144;
          }
          v116 = 1LL;
          v140 = 0uLL;
          v141 = 0LL;
          v104 = 80;
          v110 = 0;
          v108 = 0;
          v112 = 0;
          v127 = 0LL;
          v135 = 0LL;
          v22 &= v22 - 1;
          v102 = v22;
          v107 = v22;
          v25 = (unsigned int)v24;
          v26 = v20 + 32LL * (unsigned int)v24;
          if ( v136 )
          {
            v27 = *v136;
            if ( _bittest64(&v27, *(unsigned __int8 *)(v26 + 118)) )
              continue;
          }
          v28 = EtwpLevelKeywordEnabled(v26 + 112, a8, a9);
          v22 = v102;
          if ( v28 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) == 0 )
              break;
            v22 = v102;
            if ( (*(_DWORD *)(v26 + 120) & 0x200) == 0 )
              break;
          }
        }
        v32 = *(_QWORD *)(v20 + 368);
        v33 = v32
           && ((*(_DWORD *)(v32 + 80 * v25) & 0x80000200) == 0x80000200
            || (*(_DWORD *)(v32 + 80 * v25) & 0x80000100) == 0x80000100);
        v34 = v124;
        if ( v33 )
        {
          if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilterOnUserEvent(v20, v124, v115, v113, v30, v17) )
            goto LABEL_183;
          v30 = a10;
          v16 = v109;
          v29 = a9;
        }
        if ( !a14 || !EtwpIsEventNameFilterEnabled(v16, v34, a8, v29) )
          goto LABEL_25;
        if ( EtwpApplyEventNameFilter(v20, v34, v30, v17, 1, 0, v35, v29) )
          break;
LABEL_183:
        v22 = v102;
        v16 = v109;
      }
      v30 = a10;
LABEL_25:
      v36 = 0;
      if ( a7 )
      {
        v37 = 104;
        v104 = 104;
        v36 = 8;
      }
      else
      {
        v37 = v104;
      }
      v38 = *(_DWORD *)(v26 + 120);
      if ( (v38 & 0xFFFFFF9F) != 0 )
      {
        if ( (v38 & 1) != 0 )
        {
          if ( (v103 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem((__int64)Src);
            v103 |= 2u;
            v30 = a10;
          }
          v36 |= 2u;
          v37 += Src[0];
          v104 = v37;
        }
        v88 = *(_DWORD *)(v26 + 120);
        if ( (v88 & 2) != 0 )
        {
          v36 |= 1u;
          v37 += 16;
          v104 = v37;
        }
        if ( (v88 & 0x80u) != 0 )
        {
          v36 |= 0x20u;
          v37 += 16;
          v104 = v37;
        }
        if ( (v88 & 0x100) != 0 )
        {
          v36 |= 0x40u;
          v37 += 16;
          v104 = v37;
        }
        if ( (v88 & 4) != 0 )
        {
          v89 = *(_QWORD *)(v128 + 368);
          if ( !v89 || (v90 = 1, (*(_DWORD *)(v89 + 80 * v25) & 0x80001000) != 0x80001000) )
            v90 = 0;
          if ( !v90 || (v91 = EtwpApplyStackWalkFilterOnUserEvent(v113, v128, v124, v29), v30 = a10, v91) )
          {
            v92 = v103;
            if ( (v103 & 1) == 0 )
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
                v103 ^= (v92 ^ (8 * (StackLookasideListEntry != 0LL))) & 8;
              }
              else
              {
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v93 = alloca(1552LL);
                  StackLookasideListEntry = &v100;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v103 |= 1u;
              v30 = a10;
            }
            if ( StackLookasideListEntry )
            {
              v36 |= 4u;
              v37 += *(unsigned __int16 *)StackLookasideListEntry;
              v104 = v37;
            }
          }
        }
        if ( (*(_DWORD *)(v26 + 120) & 8) != 0 )
        {
          if ( (v103 & 4) != 0 )
          {
            v95 = (unsigned __int16 *)v131;
          }
          else
          {
            IoGetStackLimits(&v145, &v144);
            if ( (unsigned __int64)&v144 - v145 <= 0x1E0 )
            {
              v95 = (unsigned __int16 *)v131;
            }
            else
            {
              v94 = alloca(480LL);
              v95 = (unsigned __int16 *)v101;
              v131 = v101;
              EtwpGetPsmKeyExtendedHeaderItem(v101);
            }
            v103 |= 4u;
            v30 = a10;
          }
          if ( v95 )
          {
            v36 |= 0x10u;
            v37 += *v95;
            v104 = v37;
          }
        }
      }
      v39 = *(unsigned __int16 *)(v26 + 118);
      v117 = v39;
      v40 = &v148[3 * v149];
      if ( v30 )
      {
        if ( KeGetCurrentThread()->PreviousMode )
        {
          v41 = 16LL * v30;
          if ( v41 )
          {
            if ( (v121 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v121 + v41 > 0x7FFFFFFF0000LL || v121 + v41 < v121 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
        }
        v42 = 0;
        v37 = v104;
        while ( 1 )
        {
          v132 = v42;
          if ( v42 >= v30 )
            break;
          v43 = v37;
          v24 = 2LL * v42;
          v126 = *(_DWORD *)(v121 + 16LL * v42 + 8);
          v44 = v126;
          if ( v126 > 0xFFFF )
          {
            v106 = -2147483643;
            v22 = v102;
            v16 = v109;
            v46 = v125;
            v47 = v113;
            goto LABEL_145;
          }
          if ( a14 )
          {
            v45 = *(_BYTE *)(v121 + 16LL * v42 + 12);
            v44 = v126;
          }
          else
          {
            v45 = 0;
          }
          v24 = v45;
          if ( v45 )
          {
            if ( v45 == 1 )
            {
              v24 = v44 + v108;
              v108 += v44;
              ++v112;
            }
            v37 = v104;
          }
          else
          {
            v37 = v44 + v104;
            v104 += v44;
          }
          if ( v37 < v43 )
          {
            v106 = -2147483643;
            v22 = v102;
            v16 = v109;
            v46 = v125;
            v47 = v113;
            goto LABEL_145;
          }
          ++v42;
        }
        v39 = v117;
      }
      if ( v112 )
      {
        v37 += (v108 + 15) & 0xFFFFFFF8;
        v104 = v37;
      }
      if ( v111 )
      {
        v37 += (v111 + 15) & 0xFFFFFFF8;
        v104 = v37;
      }
      *((_DWORD *)v40 + 10) = v37;
      v48 = v39;
      v46 = v125;
      if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v125 + 8LL * v39 + 400), 1u) )
      {
        if ( v117 >= 0x40 )
        {
          v49 = 1LL;
        }
        else
        {
          _mm_lfence();
          v49 = *(_QWORD *)(v46 + 8 * v48 + 912);
          v37 = v104;
        }
        v116 = v49;
        v50 = 1;
      }
      else
      {
        v50 = v110;
        v49 = v116;
      }
      if ( (v49 & 1) != 0 )
        break;
      v51 = EtwpReserveTraceBuffer((unsigned int *)v49, v37, (__int64)&v140, &v129, 0);
      v52 = v51;
      v118 = v51;
      if ( v51 )
      {
        v53 = v116;
        *(_QWORD *)v40 = v116;
        *((_QWORD *)v40 + 1) = v51;
        v40[1] = v140;
        *((_QWORD *)v40 + 4) = v141;
        ++v149;
        v54 = 80;
        v105 = 80;
        v55 = 0LL;
        v114 = 0LL;
        v120 = 0LL;
        v56 = (_OWORD *)v113;
        *(_OWORD *)v52 = *(_OWORD *)v113;
        *(_OWORD *)(v52 + 16) = v56[1];
        *(_OWORD *)(v52 + 32) = v56[2];
        *(_OWORD *)(v52 + 48) = v56[3];
        *(_OWORD *)(v52 + 64) = v56[4];
        *(_OWORD *)(v52 + 24) = *(_OWORD *)(v109 + 24);
        *(_DWORD *)v52 = v37 | *(_DWORD *)(v53 + 4LL * v115 + 20);
        if ( v36 )
        {
          if ( (v36 & 8) != 0 )
          {
            v55 = (_WORD *)(v52 + 80);
            v114 = (void *)(v52 + 80);
            *(_DWORD *)(v52 + 80) = 65560;
            *(_WORD *)(v52 + 86) = 16;
            *(_WORD *)(v52 + 84) &= ~1u;
            *(_WORD *)(v52 + 84) &= 1u;
            *(_OWORD *)(v52 + 88) = *a7;
            *(_WORD *)(v52 + 4) |= 1u;
            v54 = 104;
            v105 = 104;
            v120 = (void *)(v52 + 80);
          }
          if ( (v36 & 2) != 0 )
          {
            v114 = (void *)(v52 + v54);
            v57 = Src[0];
            memmove(v114, Src, Src[0]);
            v52 = v118;
            *(_WORD *)(v118 + 4) |= 1u;
            v54 += v57;
            v105 = v54;
            if ( v55 )
              v55[2] |= 1u;
            v55 = v114;
            v120 = v114;
          }
          if ( (v36 & 1) != 0 )
          {
            v80 = v54;
            v81 = v54 + v52;
            *(_DWORD *)v81 = 196624;
            *(_WORD *)(v81 + 6) = 4;
            *(_WORD *)(v81 + 4) &= ~1u;
            *(_WORD *)(v81 + 4) &= 1u;
            *(_DWORD *)(v81 + 8) = PsGetCurrentProcessSessionId();
            v52 = v118;
            *(_WORD *)(v118 + 4) |= 1u;
            v54 = v80 + 16;
            v105 = v80 + 16;
            if ( v55 )
              v55[2] |= 1u;
            v55 = (_WORD *)(v80 + v52);
            v114 = (void *)(v80 + v52);
            v120 = (void *)(v80 + v52);
          }
          if ( (v36 & 0x20) != 0 )
          {
            v58 = (_WORD *)(v54 + v52);
            *(_DWORD *)v58 = 851984;
            v58[3] = 8;
            v58[2] &= ~1u;
            v58[2] &= 1u;
            *((_QWORD *)v58 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
            *(_WORD *)(v52 + 4) |= 1u;
            v54 += 16;
            v105 = v54;
            if ( v55 )
              v55[2] |= 1u;
            v55 = v58;
            v114 = v58;
            v120 = v58;
            v37 = v104;
          }
          if ( (v36 & 0x40) != 0 )
          {
            v59 = v54;
            v60 = (_WORD *)(v54 + v52);
            *(_DWORD *)v60 = 655376;
            v60[3] = 8;
            v60[2] &= ~1u;
            v60[2] &= 1u;
            if ( (v103 & 0x10) != 0 || (EtwpCreateEventKey(&v130), v103 |= 0x10u, !v146) )
            {
              v61 = v130;
            }
            else
            {
              v61 = v130;
              *v146 = v130;
            }
            *((_QWORD *)v60 + 1) = v61;
            *(_WORD *)(v52 + 4) |= 1u;
            v54 = v59 + 16;
            v105 = v59 + 16;
            if ( v55 )
              v55[2] |= 1u;
            v55 = v60;
            v114 = v60;
            v120 = v60;
          }
          if ( (v36 & 4) != 0 )
          {
            v114 = (void *)(v52 + v54);
            v82 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v114, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            v52 = v118;
            *(_WORD *)(v118 + 4) |= 1u;
            v54 += *v82;
            v105 = v54;
            if ( v55 )
              v55[2] |= 1u;
            v55 = v114;
            v120 = v114;
          }
          if ( (v36 & 0x10) != 0 )
          {
            v83 = (void *)(v52 + v54);
            v84 = (unsigned __int16 *)v131;
            memmove(v83, v131, *(unsigned __int16 *)v131);
            v52 = v118;
            *(_WORD *)(v118 + 4) |= 1u;
            v54 += *v84;
            v105 = v54;
            if ( v55 )
              v55[2] |= 1u;
            v55 = v83;
            v114 = v83;
            v120 = v83;
          }
        }
        v62 = v134;
        if ( v134 )
        {
          v63 = (unsigned __int16 *)(v52 + v54);
          v147 = v63;
          v64 = v111;
          v65 = (v111 + 15) & 0xFFF8;
          *v63 = v65;
          v63[1] = 12;
          v63[3] = v64;
          v63[2] &= ~1u;
          v63[2] &= 1u;
          v66 = v65 - v64 - 8;
          v67 = v63 + 4;
          v68 = v64;
          memmove(v63 + 4, v62, v64);
          memset((char *)v67 + v68, 0, v66);
          v52 = v118;
          *(_WORD *)(v118 + 4) |= 1u;
          v55 = v147;
          v54 += *v147;
          v105 = v54;
          if ( v114 )
            *((_WORD *)v114 + 2) |= 1u;
          v120 = v55;
        }
        if ( v112 )
        {
          v75 = (unsigned __int16 *)(v52 + v54);
          v76 = v108;
          v77 = (v108 + 15) & 0xFFF8;
          *v75 = v77;
          v75[1] = 11;
          v75[3] = v76;
          v75[2] &= ~1u;
          v75[2] &= 1u;
          v69 = (char *)(v75 + 4);
          v127 = v75 + 4;
          v135 = (char *)v75 + v76 + 8;
          memset(v135, 0, (unsigned __int16)(v77 - v76 - 8));
          v52 = v118;
          *(_WORD *)(v118 + 4) |= 1u;
          v54 += *v75;
          v105 = v54;
          if ( v55 )
            v55[2] |= 1u;
        }
        else
        {
          v69 = (char *)v127;
        }
        for ( i = 0; ; ++i )
        {
          v133 = i;
          if ( i >= a10 )
            break;
          v71 = *(unsigned int *)(v121 + 16LL * i + 8);
          v72 = *(__int64 **)(v121 + 16LL * i);
          if ( a14 )
          {
            LOBYTE(v24) = *(_BYTE *)(v121 + 16LL * i + 12);
            v37 = v104;
            v69 = (char *)v127;
            v54 = v105;
          }
          else
          {
            LOBYTE(v24) = 0;
          }
          v24 = (unsigned __int8)v24;
          if ( (_BYTE)v24 )
          {
            v24 = (unsigned int)(unsigned __int8)v24 - 1;
            if ( (_DWORD)v24 )
            {
              if ( (_DWORD)v24 == 2 && (_DWORD)v71 == 8 )
              {
                if ( (unsigned __int64)(v72 + 1) > 0x7FFFFFFF0000LL || v72 + 1 < v72 )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v129 = *v72;
              }
            }
            else
            {
              if ( !v69 )
                goto LABEL_137;
              v78 = *(unsigned int *)(v121 + 16LL * i + 8);
              v79 = &v69[v71];
              if ( &v69[v71] > v135 || !v112 )
                goto LABEL_137;
              if ( (_DWORD)v71
                && ((unsigned __int64)v72 + v71 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v72 + v71) < v72) )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
              }
              memmove(v69, v72, v78);
              v69 = v79;
              v127 = v79;
              --v112;
            }
          }
          else
          {
            if ( (unsigned int)v71 + v54 < v54 )
            {
              v105 = -1;
LABEL_137:
              v106 = -1073741820;
              *(_DWORD *)v52 = v37 | *(_DWORD *)(v116 + 28);
              *(_QWORD *)(v52 + 16) = v129;
              v22 = v102;
              v16 = v109;
              v46 = v125;
              v47 = v113;
              goto LABEL_145;
            }
            v105 = v71 + v54;
            if ( (unsigned int)v71 + v54 > v37 )
              goto LABEL_137;
            PreviousMode = KeGetCurrentThread()->PreviousMode;
            if ( PreviousMode
              && (_DWORD)v71
              && ((unsigned __int64)v72 + v71 > 0x7FFFFFFF0000LL || (__int64 *)((char *)v72 + v71) < v72) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove((void *)(v52 + v54), v72, v71);
            v37 = v104;
            v69 = (char *)v127;
            v54 = v105;
          }
          v52 = v118;
        }
        v73 = v136;
        if ( v136 )
        {
          v74 = *v136;
          _bittestandset64(&v74, v117);
          *v73 = v74;
        }
        *(_QWORD *)(v52 + 16) = v129;
        *(_DWORD *)(v52 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v52 + 60) = CurrentThread->UserTime;
        *(_DWORD *)(v52 + 8) = CurrentThread[1].KernelStack;
        *(_DWORD *)(v52 + 12) = CurrentThread[1].CurrentRunTime;
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v116 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v116, (__int64)&v140);
        }
        v22 = v102;
        v17 = v121;
        v16 = v109;
        v20 = v128;
      }
      else
      {
        v97 = v116;
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v116, v37);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v109 + 24),
            (__int16 *)(v113 + 40),
            (unsigned __int16 *)(v97 + 136),
            ReserveTraceBufferStatus);
        v99 = v106;
        if ( v106 >= 0 )
        {
          if ( (*(_DWORD *)(v97 + 12) & 0x8000000) == 0 )
            v99 = ReserveTraceBufferStatus;
          v106 = v99;
        }
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v46 + 8 * v48 + 400), 1u);
        v23 = ReserveTraceBufferStatus == -1073741675;
        v22 = v102;
        v17 = v121;
        v16 = v109;
        v20 = v128;
        if ( v23 )
        {
          v106 = -1073741675;
          goto LABEL_144;
        }
      }
    }
    if ( v50 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v46 + 8 * v48 + 400), 1u);
    v22 = v102;
    v17 = v121;
    v16 = v109;
    v20 = v128;
  }
  while ( v117 != 3 );
  v96 = -1073741058;
  v24 = 3221225480LL;
  if ( !*(_BYTE *)(v46 + 5025) )
    v96 = -1073741816;
  v106 = v96;
LABEL_144:
  v47 = v113;
LABEL_145:
  if ( (v103 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v22 = v102;
    v16 = v109;
    v47 = v113;
  }
  if ( v106 < 0 )
  {
    EtwpFailLogging(a8, a9, v16, (__int64)v148, v22, v106, v47 + 40, 1);
  }
  else
  {
    while ( v18 < v149 )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v148[3 * v18 + 1]);
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v46 + 8LL * **v87 + 400), 1u);
      ++v18;
    }
  }
  v85 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v85;
  if ( !v85
    && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v24);
  }
  return (unsigned int)v106;
}
