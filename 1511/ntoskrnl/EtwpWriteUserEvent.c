/*
 * XREFs of EtwpWriteUserEvent @ 0x14041BFD0
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400282E0 (IoGetStackLimits.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpCreateEventKey @ 0x1400E6B60 (EtwpCreateEventKey.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400F4628 (EtwpGetReserveTraceBufferStatus.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14020FB80 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140210C40 (EtwpGetStackLookasideListEntry.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyEventIdPayloadFilterOnUserEvent @ 0x140666B10 (EtwpApplyEventIdPayloadFilterOnUserEvent.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140666DCC (EtwpApplyStackWalkFilterOnUserEvent.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
        _QWORD *a12,
        __int64 a13,
        char a14,
        unsigned __int16 *a15,
        unsigned __int64 *a16)
{
  __int64 v17; // r14
  unsigned __int16 *v18; // r12
  unsigned __int16 v19; // r8
  __int64 v20; // rdx
  unsigned __int16 *v21; // rcx
  _QWORD *CurrentServerSilo; // rbx
  unsigned __int8 v23; // dl
  unsigned int v24; // ebx
  bool v25; // zf
  unsigned int v26; // ecx
  char v27; // r13
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rax
  bool v31; // al
  __int64 v32; // r9
  char v33; // r10
  __int64 v34; // r11
  _KPROCESS *Process; // rcx
  __int64 v36; // rcx
  bool v37; // al
  unsigned int v38; // r12d
  int v39; // edi
  unsigned int v40; // r14d
  int v41; // eax
  unsigned int v42; // edx
  _OWORD *v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // r9d
  unsigned __int64 v48; // rdx
  unsigned int v49; // r8d
  char v50; // cl
  __int64 v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // r15
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r11
  unsigned int v59; // r15d
  _OWORD *v60; // rax
  unsigned __int16 *v61; // rsi
  int v62; // ebx
  unsigned __int16 *v63; // r8
  unsigned int v64; // r10d
  unsigned __int16 *v65; // r9
  unsigned __int64 v66; // rax
  void *v67; // rdx
  char *v68; // rdi
  unsigned int i; // ebx
  size_t v70; // rdx
  __int64 *v71; // r10
  unsigned __int8 v72; // cl
  _QWORD *v73; // rdx
  __int64 v74; // rcx
  int v75; // ecx
  size_t v76; // r8
  char *v77; // rsi
  unsigned __int16 *v78; // r13
  unsigned int v79; // ecx
  unsigned __int16 v80; // si
  unsigned __int16 v81; // si
  __int64 v82; // rbx
  unsigned __int16 *v83; // rbx
  __int64 v84; // rcx
  unsigned __int16 v85; // dx
  unsigned int v86; // ebx
  unsigned __int16 *v87; // rsi
  unsigned __int16 *v88; // rbx
  unsigned __int16 *v89; // r13
  unsigned __int16 *v90; // rbx
  unsigned __int16 *v91; // rdi
  struct _KTHREAD *v92; // rcx
  unsigned int **v94; // r11
  int v95; // eax
  char v96; // al
  __int64 v97; // rcx
  bool v98; // al
  char v99; // al
  char v100; // bl
  void *v101; // rsp
  void *v102; // rsp
  unsigned __int16 *v103; // rbx
  signed int v104; // eax
  int ReserveTraceBufferStatus; // edi
  signed int v106; // ecx
  char v107; // [rsp+20h] [rbp-610h] BYREF
  _BYTE v108[416]; // [rsp+450h] [rbp-1E0h] BYREF
  unsigned __int8 v109; // [rsp+630h] [rbp+0h]
  char v110; // [rsp+631h] [rbp+1h]
  int v111; // [rsp+634h] [rbp+4h]
  char v112; // [rsp+638h] [rbp+8h]
  int v113; // [rsp+63Ch] [rbp+Ch]
  signed int v114; // [rsp+640h] [rbp+10h]
  __int64 SiloDriverState; // [rsp+648h] [rbp+18h]
  unsigned __int8 v116; // [rsp+650h] [rbp+20h]
  unsigned __int16 v117; // [rsp+658h] [rbp+28h]
  int v118; // [rsp+65Ch] [rbp+2Ch]
  unsigned __int16 v119; // [rsp+660h] [rbp+30h]
  __int64 v120; // [rsp+668h] [rbp+38h]
  __int64 v121; // [rsp+670h] [rbp+40h]
  unsigned __int16 v122; // [rsp+678h] [rbp+48h]
  unsigned int v123; // [rsp+67Ch] [rbp+4Ch]
  unsigned __int64 v124; // [rsp+680h] [rbp+50h]
  void *StackLookasideListEntry; // [rsp+688h] [rbp+58h] BYREF
  unsigned __int16 *v126; // [rsp+690h] [rbp+60h]
  unsigned __int64 v127; // [rsp+698h] [rbp+68h]
  __int64 v128; // [rsp+6A0h] [rbp+70h]
  char v129; // [rsp+6A8h] [rbp+78h]
  char PreviousMode; // [rsp+6A9h] [rbp+79h]
  unsigned int v131; // [rsp+6ACh] [rbp+7Ch]
  __int64 v132; // [rsp+6B0h] [rbp+80h] BYREF
  unsigned int v133; // [rsp+6B8h] [rbp+88h]
  void *v134; // [rsp+6C0h] [rbp+90h]
  void *v135; // [rsp+6C8h] [rbp+98h]
  struct _KTHREAD *CurrentThread; // [rsp+6D0h] [rbp+A0h]
  unsigned __int64 v137; // [rsp+6D8h] [rbp+A8h] BYREF
  __int64 v138; // [rsp+6E0h] [rbp+B0h]
  unsigned int v139; // [rsp+6E8h] [rbp+B8h]
  unsigned int v140; // [rsp+6ECh] [rbp+BCh]
  char *v141; // [rsp+6F0h] [rbp+C0h]
  __int64 v142; // [rsp+6F8h] [rbp+C8h]
  _QWORD *v143; // [rsp+700h] [rbp+D0h]
  __int128 v144; // [rsp+708h] [rbp+D8h] BYREF
  __int64 v145; // [rsp+718h] [rbp+E8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+F0h] BYREF
  void *v147; // [rsp+728h] [rbp+F8h]
  unsigned __int64 v148; // [rsp+730h] [rbp+100h] BYREF
  unsigned __int64 LowLimit; // [rsp+738h] [rbp+108h] BYREF
  unsigned __int64 *v150; // [rsp+740h] [rbp+110h]
  unsigned __int64 v151; // [rsp+748h] [rbp+118h] BYREF
  _OWORD v152[24]; // [rsp+750h] [rbp+120h] BYREF
  unsigned int v153; // [rsp+8D0h] [rbp+2A0h]
  _WORD Src[40]; // [rsp+8E0h] [rbp+2B0h] BYREF

  v122 = a3;
  v109 = a2;
  v121 = a1;
  v142 = a1;
  v120 = a6;
  v17 = a11;
  v124 = a11;
  v143 = a12;
  v150 = a16;
  LODWORD(v18) = 0;
  v114 = 0;
  StackLookasideListEntry = 0LL;
  v135 = 0LL;
  v19 = 0;
  v119 = 0;
  v137 = 0LL;
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
  v20 = a1;
  if ( a13 )
    v20 = a13;
  v138 = v20;
  Src[0] = 0;
  v110 = 0;
  v153 = 0;
  if ( a16 && *a16 )
  {
    v137 = *a16;
    v110 = 16;
  }
  if ( a15 )
  {
    v19 = *a15;
    v119 = *a15;
  }
  v21 = 0LL;
  if ( v19 )
    v21 = a15;
  v147 = v21;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *(_BYTE *)(v20 + 376) )
    CurrentServerSilo = 0LL;
  else
    CurrentServerSilo = PsGetCurrentServerSilo();
  SiloDriverState = EtwpGetSiloDriverState(CurrentServerSilo);
  if ( CurrentServerSilo )
    ObfDereferenceObject(CurrentServerSilo);
  v23 = ~a4 & v109;
  v109 = v23;
  do
  {
    v24 = a10;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = !_BitScanForward(&v26, v23);
          v133 = v26;
          if ( v25 )
          {
            v51 = SiloDriverState;
            goto LABEL_145;
          }
          v128 = 1LL;
          v144 = 0uLL;
          v145 = 0LL;
          v111 = 80;
          v27 = 0;
          v112 = 0;
          v117 = 0;
          v118 = 0;
          v134 = 0LL;
          v141 = 0LL;
          v23 &= v23 - 1;
          v109 = v23;
          v116 = v23;
          v28 = v26;
          v29 = v138 + 32LL * v26;
          if ( v143 )
          {
            v30 = *v143;
            if ( _bittest64(&v30, *(unsigned __int8 *)(v29 + 118)) )
              continue;
          }
          v31 = EtwpLevelKeywordEnabled(v29 + 112, a8, a9);
          v23 = v109;
          if ( v31 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( (a5 & 2) == 0 && (HIDWORD(Process[2].SwapListEntry.Next) & 0x400) == 0 )
              break;
            v23 = v109;
            if ( (*(_DWORD *)(v29 + 120) & 0x200) == 0 )
              break;
          }
        }
        v36 = *(_QWORD *)(v34 + 368);
        v37 = v36
           && ((*(_DWORD *)(v36 + 72 * v28) & 0x80000200) == 0x80000200
            || (*(_DWORD *)(v36 + 72 * v28) & 0x80000100) == 0x80000100);
        v38 = v133;
        if ( !v37 )
          break;
        v96 = EtwpApplyEventIdPayloadFilterOnUserEvent(v34, v133, v122, v120, v24, v17);
        v33 = a14;
        v23 = v109;
        v32 = SiloDriverState;
        if ( v96 )
        {
          v34 = v138;
          break;
        }
        LODWORD(v18) = 0;
      }
      v39 = 0;
      if ( a7 )
      {
        v40 = 104;
        v111 = 104;
        v39 = 8;
      }
      else
      {
        v40 = v111;
      }
      v41 = *(_DWORD *)(v29 + 120);
      if ( (v41 & 0xFFFFFF9F) != 0 )
      {
        if ( (v41 & 1) != 0 )
        {
          if ( (v110 & 2) == 0 )
          {
            EtwpGetSidExtendedHeaderItem(Src);
            v110 |= 2u;
            v33 = a14;
            v34 = v138;
            v32 = SiloDriverState;
          }
          v39 |= 2u;
          v40 += Src[0];
          v111 = v40;
        }
        v95 = *(_DWORD *)(v29 + 120);
        if ( (v95 & 2) != 0 )
        {
          v39 |= 1u;
          v40 += 16;
          v111 = v40;
        }
        if ( (v95 & 0x80u) != 0 )
        {
          v39 |= 0x20u;
          v40 += 16;
          v111 = v40;
        }
        if ( (v95 & 0x100) != 0 )
        {
          v39 |= 0x40u;
          v40 += 16;
          v111 = v40;
        }
        if ( (v95 & 4) != 0 )
        {
          v97 = *(_QWORD *)(v34 + 368);
          v98 = v97 && (*(_DWORD *)(v97 + 72 * v28) & 0x80001000) == 0x80001000;
          if ( !v98
            || (v99 = EtwpApplyStackWalkFilterOnUserEvent(v120, v34, v38), v33 = a14, v32 = SiloDriverState, v99) )
          {
            v100 = v110;
            if ( (v110 & 1) == 0 )
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
                v110 ^= (v100 ^ (8 * (StackLookasideListEntry != 0LL))) & 8;
              }
              else
              {
                IoGetStackLimits(&LowLimit, &HighLimit);
                if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                {
                  v101 = alloca(1552LL);
                  StackLookasideListEntry = &v107;
                  EtwpGetStackExtendedHeaderItem(
                    (__int64)CurrentThread,
                    0,
                    0xC0u,
                    (__int64)&StackLookasideListEntry,
                    0,
                    0LL);
                }
              }
              v110 |= 1u;
              v33 = a14;
              v32 = SiloDriverState;
            }
            if ( StackLookasideListEntry )
            {
              v39 |= 4u;
              v40 += *(unsigned __int16 *)StackLookasideListEntry;
              v111 = v40;
            }
            v27 = v112;
          }
        }
        if ( (*(_DWORD *)(v29 + 120) & 8) != 0 )
        {
          if ( (v110 & 4) != 0 )
          {
            v103 = (unsigned __int16 *)v135;
          }
          else
          {
            IoGetStackLimits(&v151, &v148);
            if ( (unsigned __int64)&v148 - v151 <= 0x1DA )
            {
              v103 = (unsigned __int16 *)v135;
            }
            else
            {
              v102 = alloca(480LL);
              v103 = (unsigned __int16 *)v108;
              v135 = v108;
              EtwpGetPsmKeyExtendedHeaderItem(v108);
            }
            v110 |= 4u;
            v33 = a14;
            v32 = SiloDriverState;
          }
          if ( v103 )
          {
            v39 |= 0x10u;
            v40 += *v103;
            v111 = v40;
          }
        }
      }
      v42 = *(unsigned __int16 *)(v29 + 118);
      v123 = v42;
      v43 = &v152[3 * v153];
      if ( a10 )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v44 = v124;
        if ( PreviousMode )
        {
          v45 = 16LL * a10;
          if ( v45 )
          {
            if ( (v124 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( v124 + v45 > MmUserProbeAddress || v124 + v45 < v124 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
        }
        v18 = 0LL;
        v46 = 0;
        v40 = v111;
        while ( 1 )
        {
          v140 = v46;
          if ( v46 >= a10 )
            break;
          v47 = v40;
          v48 = 16LL * v46 + v44;
          v131 = *(_DWORD *)(v48 + 8);
          v49 = v131;
          if ( v131 > 0xFFFF )
          {
            v114 = -2147483643;
            v23 = v109;
            v51 = SiloDriverState;
            v52 = v121;
            v53 = v120;
            goto LABEL_146;
          }
          if ( v33 )
          {
            v50 = *(_BYTE *)(v48 + 12);
            v49 = v131;
          }
          else
          {
            v50 = 0;
          }
          if ( v50 )
          {
            if ( v50 == 1 )
            {
              v117 += v49;
              ++v118;
            }
            v40 = v111;
          }
          else
          {
            v40 = v49 + v111;
            v111 += v49;
          }
          if ( v40 < v47 )
          {
            v114 = -2147483643;
            v23 = v109;
            v51 = SiloDriverState;
            v52 = v121;
            v53 = v120;
            goto LABEL_146;
          }
          ++v46;
          v44 = v124;
        }
        v27 = 0;
        v42 = v123;
        v32 = SiloDriverState;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v118 )
      {
        v40 += (v117 + 15) & 0xFFFFFFF8;
        v111 = v40;
      }
      if ( v119 )
      {
        v40 += (v119 + 15) & 0xFFFFFFF8;
        v111 = v40;
      }
      *((_DWORD *)v43 + 10) = v40;
      v54 = v42;
      v55 = 1LL;
      v25 = ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v32 + 8LL * v42 + 400), 1u) == 0;
      v56 = v123;
      if ( v25 )
      {
        v55 = v128;
      }
      else
      {
        if ( v123 < 0x40 )
        {
          _mm_lfence();
          v55 = *(_QWORD *)(SiloDriverState + 8 * v54 + 912);
          v40 = v111;
        }
        v128 = v55;
        v27 = 1;
      }
      if ( (v55 & 1) != 0 )
        break;
      v57 = EtwpReserveTraceBuffer(v55, v40, (__int64)&v144, &v132, 0);
      v58 = v57;
      v127 = v57;
      if ( v57 )
      {
        *(_QWORD *)v43 = v55;
        *((_QWORD *)v43 + 1) = v57;
        v43[1] = v144;
        *((_QWORD *)v43 + 4) = v145;
        ++v153;
        v59 = 80;
        v113 = 80;
        v126 = 0LL;
        v60 = (_OWORD *)v120;
        *(_OWORD *)v58 = *(_OWORD *)v120;
        *(_OWORD *)(v58 + 16) = v60[1];
        *(_OWORD *)(v58 + 32) = v60[2];
        *(_OWORD *)(v58 + 48) = v60[3];
        *(_OWORD *)(v58 + 64) = v60[4];
        *(_OWORD *)(v58 + 24) = *(_OWORD *)(v121 + 24);
        *(_DWORD *)v58 = v40 | *(_DWORD *)(v128 + 4LL * v122 + 20);
        if ( v39 )
        {
          if ( (v39 & 8) != 0 )
          {
            v18 = (unsigned __int16 *)(v58 + 80);
            *(_DWORD *)(v58 + 80) = 65560;
            *(_WORD *)(v58 + 86) = 16;
            *(_WORD *)(v58 + 84) &= ~1u;
            *(_WORD *)(v58 + 84) &= 1u;
            *(_OWORD *)(v58 + 88) = *a7;
            *(_WORD *)(v58 + 4) |= 1u;
            v59 = 104;
            v113 = 104;
            v126 = (unsigned __int16 *)(v58 + 80);
          }
          if ( (v39 & 2) != 0 )
          {
            v61 = (unsigned __int16 *)(v58 + v59);
            v62 = Src[0];
            memmove(v61, Src, Src[0]);
            v58 = v127;
            *(_WORD *)(v127 + 4) |= 1u;
            v59 += v62;
            v113 = v59;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v61;
            v126 = v61;
          }
          if ( (v39 & 1) != 0 )
          {
            v86 = v59;
            v87 = (unsigned __int16 *)(v59 + v58);
            *(_DWORD *)v87 = 196624;
            v87[3] = 4;
            v87[2] &= ~1u;
            v87[2] &= 1u;
            *((_DWORD *)v87 + 2) = PsGetCurrentProcessSessionId();
            v58 = v127;
            *(_WORD *)(v127 + 4) |= 1u;
            v59 += 16;
            v113 = v86 + 16;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v87;
            v126 = v87;
          }
          if ( (v39 & 0x20) != 0 )
          {
            v63 = (unsigned __int16 *)(v59 + v58);
            *(_DWORD *)v63 = 851984;
            v63[3] = 8;
            v63[2] &= ~1u;
            v63[2] &= 1u;
            *((_QWORD *)v63 + 1) = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13] | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
            *(_WORD *)(v58 + 4) |= 1u;
            v59 += 16;
            v113 = v59;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v63;
            v126 = v63;
            v40 = v111;
          }
          if ( (v39 & 0x40) != 0 )
          {
            v64 = v59;
            v65 = (unsigned __int16 *)(v59 + v58);
            *(_DWORD *)v65 = 655376;
            v65[3] = 8;
            v65[2] &= ~1u;
            v65[2] &= 1u;
            if ( (v110 & 0x10) != 0 || (EtwpCreateEventKey(&v137), v110 |= 0x10u, !v150) )
            {
              v66 = v137;
            }
            else
            {
              v66 = v137;
              *v150 = v137;
            }
            *((_QWORD *)v65 + 1) = v66;
            *(_WORD *)(v58 + 4) |= 1u;
            v59 = v64 + 16;
            v113 = v64 + 16;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v65;
            v126 = v65;
          }
          if ( (v39 & 4) != 0 )
          {
            v88 = (unsigned __int16 *)(v58 + v59);
            v89 = (unsigned __int16 *)StackLookasideListEntry;
            memmove(v88, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
            v58 = v127;
            *(_WORD *)(v127 + 4) |= 1u;
            v59 += *v89;
            v113 = v59;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v88;
            v126 = v88;
          }
          if ( (v39 & 0x10) != 0 )
          {
            v90 = (unsigned __int16 *)(v58 + v59);
            v91 = (unsigned __int16 *)v135;
            memmove(v90, v135, *(unsigned __int16 *)v135);
            v58 = v127;
            *(_WORD *)(v127 + 4) |= 1u;
            v59 += *v91;
            v113 = v59;
            if ( v18 )
              v18[2] |= 1u;
            v18 = v90;
            v126 = v90;
          }
        }
        v67 = v147;
        if ( v147 )
        {
          v78 = (unsigned __int16 *)(v58 + v59);
          v79 = v119;
          v80 = (v119 + 15) & 0xFFF8;
          *v78 = v80;
          v78[1] = 12;
          v78[3] = v79;
          v78[2] &= ~1u;
          v78[2] &= 1u;
          v81 = v80 - v79 - 8;
          v82 = v79;
          memmove(v78 + 4, v67, v79);
          memset((char *)v78 + v82 + 8, 0, v81);
          v58 = v127;
          *(_WORD *)(v127 + 4) |= 1u;
          v59 += *v78;
          v113 = v59;
          if ( v18 )
            v18[2] |= 1u;
          v18 = v78;
          v126 = v78;
        }
        if ( v118 )
        {
          v83 = (unsigned __int16 *)(v58 + v59);
          v84 = v117;
          v85 = (v117 + 15) & 0xFFF8;
          *v83 = v85;
          v83[1] = 11;
          v83[3] = v84;
          v83[2] &= ~1u;
          v83[2] &= 1u;
          v68 = (char *)(v83 + 4);
          v134 = v83 + 4;
          v141 = (char *)v83 + v84 + 8;
          memset(v141, 0, (unsigned __int16)(v85 - v84 - 8));
          v58 = v127;
          *(_WORD *)(v127 + 4) |= 1u;
          v59 += *v83;
          v113 = v59;
          if ( v18 )
            v18[2] |= 1u;
        }
        else
        {
          v68 = (char *)v134;
        }
        LODWORD(v18) = 0;
        for ( i = 0; ; ++i )
        {
          v139 = i;
          if ( i >= a10 )
            break;
          v70 = *(unsigned int *)(v124 + 16LL * i + 8);
          v71 = *(__int64 **)(v124 + 16LL * i);
          if ( a14 )
          {
            v72 = *(_BYTE *)(v124 + 16LL * i + 12);
            v40 = v111;
            v68 = (char *)v134;
            v59 = v113;
          }
          else
          {
            v72 = 0;
          }
          if ( v72 )
          {
            v75 = v72 - 1;
            if ( v75 )
            {
              if ( v75 == 2 && (_DWORD)v70 == 8 )
              {
                if ( (unsigned __int64)(v71 + 1) > MmUserProbeAddress || v71 + 1 < v71 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                v132 = *v71;
              }
            }
            else
            {
              if ( !v68 )
                goto LABEL_140;
              v76 = *(unsigned int *)(v124 + 16LL * i + 8);
              v77 = &v68[v70];
              if ( &v68[v70] > v141 || !v118 )
                goto LABEL_140;
              if ( (_DWORD)v70
                && ((unsigned __int64)v71 + v70 > MmUserProbeAddress || (__int64 *)((char *)v71 + v70) < v71) )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v68, v71, v76);
              v68 = v77;
              v134 = v77;
              --v118;
            }
          }
          else
          {
            if ( (unsigned int)v70 + v59 < v59 )
            {
              v113 = -1;
LABEL_140:
              v114 = -1073741820;
              *(_DWORD *)v58 = v40 | *(_DWORD *)(v128 + 28);
              *(_QWORD *)(v58 + 16) = v132;
              v23 = v109;
              v51 = SiloDriverState;
              v52 = v121;
              v53 = v120;
              goto LABEL_146;
            }
            v113 = v70 + v59;
            if ( (unsigned int)v70 + v59 > v40 )
              goto LABEL_140;
            v129 = KeGetCurrentThread()->PreviousMode;
            if ( v129
              && (_DWORD)v70
              && ((unsigned __int64)v71 + v70 > MmUserProbeAddress || (__int64 *)((char *)v71 + v70) < v71) )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove((void *)(v58 + v59), v71, v70);
            v40 = v111;
            v68 = (char *)v134;
            v59 = v113;
          }
          v58 = v127;
        }
        v73 = v143;
        if ( v143 )
        {
          v74 = *v143;
          _bittestandset64(&v74, v123);
          *v73 = v74;
        }
        *(_QWORD *)(v58 + 16) = v132;
        v92 = CurrentThread;
        *(_DWORD *)(v58 + 56) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v58 + 60) = v92->UserTime;
        *(_DWORD *)(v58 + 8) = v92[1].KernelStack;
        *(_DWORD *)(v58 + 12) = v92[1].CurrentRunTime;
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v128 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v128, (__int64)&v144);
        }
        v24 = a10;
        v17 = v124;
        v23 = v109;
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v55, v40);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(
            (_QWORD *)(v121 + 24),
            (__int16 *)(v120 + 40),
            (unsigned __int16 *)(v55 + 152),
            ReserveTraceBufferStatus);
        v106 = v114;
        if ( v114 >= 0 )
        {
          if ( (*(_DWORD *)(v55 + 12) & 0x8000000) == 0 )
            v106 = ReserveTraceBufferStatus;
          v114 = v106;
        }
        v51 = SiloDriverState;
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v54 + 400), 1u);
        v24 = a10;
        v17 = v124;
        v23 = v109;
        if ( ReserveTraceBufferStatus == -1073741675 )
        {
          v114 = -1073741675;
          goto LABEL_145;
        }
      }
    }
    if ( v27 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v54 + 400), 1u);
      v56 = v123;
    }
    v17 = v124;
    v23 = v109;
  }
  while ( v56 != 3 );
  v51 = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  v104 = -1073741058;
  if ( !*(_BYTE *)(v51 + 5025) )
    v104 = -1073741816;
  v114 = v104;
  PsDereferenceMonitorContextServerSilo(v51);
  v23 = v109;
LABEL_145:
  v52 = v121;
  v53 = v120;
LABEL_146:
  if ( (v110 & 8) != 0 )
  {
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
    v23 = v109;
    v52 = v121;
    v53 = v120;
  }
  if ( v114 < 0 )
  {
    EtwpFailLogging(a8, a9, v52, (__int64)v152, v23, v114, v53 + 40, 1);
  }
  else
  {
    while ( (unsigned int)v18 < v153 )
    {
      EtwpReleaseTraceBuffer((signed __int64 *)&v152[3 * (unsigned int)v18 + 1]);
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v51 + 8LL * **v94 + 400), 1u);
      LODWORD(v18) = (_DWORD)v18 + 1;
    }
  }
  PsDereferenceMonitorContextServerSilo(v51);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v114;
}
