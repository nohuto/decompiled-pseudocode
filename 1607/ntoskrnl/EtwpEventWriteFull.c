/*
 * XREFs of EtwpEventWriteFull @ 0x140073CE0
 * Callers:
 *     EtwWriteEx @ 0x140013360 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x1401443DC (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x140224A80 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x140224C7C (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x140226324 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14054296C (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     IoGetStackLimits @ 0x14004F360 (IoGetStackLimits.c)
 *     MmCanThreadFault @ 0x140051620 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1400516A4 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseTraceBuffer @ 0x1400749B0 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400AA368 (EtwpGetReserveTraceBufferStatus.c)
 *     KeInsertQueueApc @ 0x1400C9FD0 (KeInsertQueueApc.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400D68F0 (EtwpReserveTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D81F0 (EtwpLevelKeywordEnabled.c)
 *     KeInitializeApc @ 0x1400F0F58 (KeInitializeApc.c)
 *     PsGetCurrentProcessSessionId @ 0x1400FB920 (PsGetCurrentProcessSessionId.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     EtwpFailLogging @ 0x140224D98 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x140227AAC (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140227E34 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x14022920C (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140229868 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1402299E4 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x140229CBC (EtwpApplyStackWalkFilter.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FFB14 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetProcessStartKey @ 0x1404EDE94 (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        LONG *p_LockNV,
        _QWORD *a13,
        __int64 a14,
        char a15,
        unsigned __int16 *a16,
        unsigned __int64 *a17)
{
  unsigned int v18; // esi
  unsigned __int16 v19; // ax
  char v20; // di
  __int64 v21; // r15
  struct _KTHREAD *CurrentThread; // rax
  bool v23; // zf
  unsigned int v24; // edx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // r10d
  unsigned __int16 v29; // r11
  _KPROCESS *Process; // rcx
  int v31; // ebx
  __int64 v32; // r12
  __int64 v33; // rcx
  _OWORD *v35; // r15
  unsigned int v36; // ecx
  int v37; // r13d
  char v38; // al
  char v39; // r13
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  unsigned int v44; // r12d
  GUID v45; // xmm0
  unsigned __int16 *v46; // r13
  unsigned int v47; // r10d
  void *v48; // rdx
  unsigned int i; // ebx
  size_t v50; // rdx
  _QWORD *v51; // r9
  char v52; // cl
  void *v53; // rcx
  unsigned int v54; // r10d
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  unsigned int **v57; // r11
  struct _SLIST_ENTRY *v58; // r12
  __int64 v60; // rdx
  unsigned __int8 v61; // r8
  __int64 v62; // rcx
  unsigned __int16 *v63; // r12
  unsigned __int16 v64; // ax
  unsigned __int16 v65; // r15
  unsigned __int16 v66; // r15
  __int64 v67; // rbx
  _DWORD *v68; // r13
  char v69; // al
  struct _SLIST_ENTRY *v70; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _GENERAL_LOOKASIDE *P; // r15
  int v73; // eax
  __int64 v74; // r13
  unsigned int v75; // r9d
  void *v76; // r15
  _DWORD *v77; // r13
  struct _KPRCB *v78; // rdx
  _GENERAL_LOOKASIDE *v79; // r8
  _DWORD *v80; // rdx
  volatile signed __int64 *EtwSupport; // rcx
  unsigned __int64 v82; // r8
  unsigned __int16 *v83; // rbx
  __int64 v84; // rax
  unsigned __int16 v85; // dx
  char *v86; // r13
  size_t v87; // r15
  _DWORD *v88; // rdx
  __int64 ProcessStartKey; // rax
  _QWORD *v90; // rdx
  int v91; // r9d
  _GENERAL_LOOKASIDE *L; // r15
  _DWORD *v93; // r15
  __int64 v94; // rcx
  __int64 v95; // rcx
  unsigned __int8 v96; // al
  __int64 v97; // rcx
  char v98; // al
  _WORD *v99; // r12
  char v100; // al
  unsigned int v101; // r15d
  void *v102; // rsp
  _QWORD *v103; // rdx
  char v104; // r8
  __int64 v105; // rax
  char v106; // al
  int v107; // ecx
  __int64 v108; // r14
  unsigned int ReserveTraceBufferStatus; // ebx
  int v110; // ecx
  __int64 v111; // r15
  PVOID PoolWithTag; // rax
  void *v113; // rbx
  int v114; // [rsp+0h] [rbp-640h]
  char v115; // [rsp+30h] [rbp-610h] BYREF
  char v116; // [rsp+640h] [rbp+0h]
  unsigned __int8 EffectiveIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v118; // [rsp+648h] [rbp+8h]
  ULONG_PTR BugCheckParameter3; // [rsp+650h] [rbp+10h]
  unsigned int v120; // [rsp+658h] [rbp+18h]
  unsigned __int16 v121; // [rsp+65Ch] [rbp+1Ch]
  char v122; // [rsp+660h] [rbp+20h]
  unsigned __int16 v123; // [rsp+664h] [rbp+24h]
  int v124; // [rsp+668h] [rbp+28h]
  __int64 v125; // [rsp+670h] [rbp+30h]
  int v126; // [rsp+678h] [rbp+38h]
  unsigned __int16 *v127; // [rsp+680h] [rbp+40h]
  PSLIST_ENTRY ListEntry; // [rsp+688h] [rbp+48h]
  _DWORD *v129; // [rsp+690h] [rbp+50h]
  __int64 v130; // [rsp+698h] [rbp+58h]
  void *StackLookasideListEntry; // [rsp+6A0h] [rbp+60h] BYREF
  void *v132; // [rsp+6A8h] [rbp+68h]
  __int64 v133; // [rsp+6B0h] [rbp+70h]
  __int64 v134; // [rsp+6B8h] [rbp+78h]
  _QWORD *v135; // [rsp+6C0h] [rbp+80h]
  size_t Size; // [rsp+6C8h] [rbp+88h]
  __int64 v137; // [rsp+6D0h] [rbp+90h]
  struct _SLIST_ENTRY *v138; // [rsp+6D8h] [rbp+98h]
  void *v139; // [rsp+6E0h] [rbp+A0h]
  __int64 v140; // [rsp+6E8h] [rbp+A8h]
  __int64 v141; // [rsp+6F0h] [rbp+B0h]
  struct _KTHREAD *v142; // [rsp+6F8h] [rbp+B8h]
  unsigned __int64 v143; // [rsp+700h] [rbp+C0h]
  unsigned __int64 *v144; // [rsp+708h] [rbp+C8h]
  void *Src; // [rsp+710h] [rbp+D0h]
  char *v146; // [rsp+718h] [rbp+D8h]
  _QWORD *v147; // [rsp+720h] [rbp+E0h]
  unsigned __int64 HighLimit; // [rsp+728h] [rbp+E8h] BYREF
  unsigned __int64 LowLimit; // [rsp+730h] [rbp+F0h] BYREF
  __int64 v150; // [rsp+738h] [rbp+F8h] BYREF
  __int128 v151; // [rsp+740h] [rbp+100h] BYREF
  __int64 v152; // [rsp+750h] [rbp+110h]
  _OWORD v153[24]; // [rsp+760h] [rbp+120h] BYREF
  unsigned int v154; // [rsp+8E0h] [rbp+2A0h]

  v135 = a1;
  v118 = a2;
  v127 = a5;
  v134 = a11;
  v147 = a13;
  v144 = a17;
  v18 = 0;
  v124 = 0;
  ListEntry = 0LL;
  v138 = 0LL;
  StackLookasideListEntry = 0LL;
  v143 = 0LL;
  v19 = 0;
  v123 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  if ( a14 )
  {
    v137 = a14;
  }
  else
  {
    v137 = (__int64)v135;
    v19 = 0;
  }
  if ( a16 )
  {
    v19 = *a16;
    v123 = *a16;
  }
  if ( v19 )
    Src = a16;
  else
    Src = 0LL;
  v20 = 0;
  v116 = 0;
  v154 = 0;
  v21 = v135[47];
  v125 = v21;
  v140 = v21;
  if ( v144 && *v144 )
  {
    v143 = *v144;
    v20 = 4;
    v116 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v142 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  EffectiveIrql = KeGetEffectiveIrql();
  v122 = 0;
  if ( !EffectiveIrql )
  {
    --v142->KernelApcDisable;
    v122 = 1;
  }
  v118 &= ~a3;
  while ( 1 )
  {
    v23 = !_BitScanForward(&v24, v118);
    LODWORD(Size) = v24;
    if ( v23 )
      break;
    v130 = 1LL;
    BugCheckParameter3 = 0x5000000050LL;
    v129 = 0LL;
    v132 = 0LL;
    LOBYTE(v121) = 0;
    v126 = 0;
    v139 = 0LL;
    v146 = 0LL;
    v118 &= v118 - 1;
    v133 = v24;
    v25 = v137 + 32LL * v24;
    if ( v147 )
    {
      v26 = *v147;
      if ( _bittest64(&v26, *(unsigned __int8 *)(v25 + 118)) )
        continue;
    }
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v25 + 112, *((unsigned __int8 *)v127 + 4), *((_QWORD *)v127 + 1)) )
    {
      if ( (Process = KeGetCurrentThread()->ApcState.Process, (a4 & 2) == 0)
        && (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) == 0
        || (*(_DWORD *)(v25 + 120) & 0x200) == 0 )
      {
        v31 = 0;
        v32 = v137;
        v33 = *(_QWORD *)(v137 + 368);
        if ( v33
          && ((*(_DWORD *)(v33 + 80 * v27) & 0x80000200) == 0x80000200
           || (*(_DWORD *)(v33 + 80 * v27) & 0x80000100) == 0x80000100) )
        {
          if ( (unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                  v137,
                                  Size,
                                  0,
                                  (_DWORD)v127,
                                  *v127,
                                  a10,
                                  v134,
                                  0,
                                  EffectiveIrql) )
          {
            v27 = v133;
            v28 = BugCheckParameter3;
            v29 = 0;
            goto LABEL_25;
          }
        }
        else
        {
LABEL_25:
          if ( !a15 )
            goto LABEL_26;
          v60 = *((_QWORD *)v127 + 1);
          v61 = *((_BYTE *)v127 + 4);
          v62 = v135[46];
          if ( !v62 )
            goto LABEL_26;
          v94 = 80 * v27 + v62;
          if ( (*(_DWORD *)v94 & 0x80000400) != 0x80000400 )
            goto LABEL_26;
          v95 = *(_QWORD *)(v94 + 72);
          v96 = *(_BYTE *)(v95 + 1);
          if ( v61 > v96 )
          {
            if ( v96 )
              goto LABEL_26;
          }
          if ( v60 && ((v60 & *(_QWORD *)(v95 + 8)) == 0 || (v60 & *(_QWORD *)(v95 + 16)) != *(_QWORD *)(v95 + 16)) )
            goto LABEL_26;
          if ( (unsigned __int8)EtwpApplyEventNameFilter(
                                  v32,
                                  Size,
                                  a10,
                                  v134,
                                  0,
                                  EffectiveIrql,
                                  v61,
                                  *((_QWORD *)v127 + 1)) )
          {
            v27 = v133;
            v28 = BugCheckParameter3;
            v29 = 0;
LABEL_26:
            if ( a9 )
            {
              v28 = 104;
              LODWORD(BugCheckParameter3) = 104;
              v31 = 8;
            }
            if ( (*(_DWORD *)(v25 + 120) & 0xFFFFFF9F) != 0 )
            {
              v69 = !EtwpPagingDisabled && (a4 & 1) == 0 && MmCanThreadFault() && !BYTE6(v142[1].Queue);
              v31 ^= ((unsigned __int8)v31 ^ (unsigned __int8)(v69 << 7)) & 0x80;
              if ( (*(_DWORD *)(v25 + 120) & 1) != 0 && (v31 & 0x80u) != 0 )
              {
                v70 = ListEntry;
                if ( ListEntry )
                  goto LABEL_106;
                CurrentPrcb = KeGetCurrentPrcb();
                P = CurrentPrcb->PPLookasideList[8].P;
                ++P->TotalAllocates;
                v70 = RtlpInterlockedPopEntrySList(&P->ListHead);
                ListEntry = v70;
                if ( !v70 )
                {
                  ++P->AllocateMisses;
                  L = CurrentPrcb->PPLookasideList[8].L;
                  ++L->TotalAllocates;
                  v70 = RtlpInterlockedPopEntrySList(&L->ListHead);
                  ListEntry = v70;
                  if ( !v70 )
                  {
                    ++L->AllocateMisses;
                    v70 = (struct _SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                                   (unsigned int)L->Type,
                                                   L->Size,
                                                   L->Tag);
                    ListEntry = v70;
                  }
                }
                if ( v70 )
                  LODWORD(v70->Next) = CurrentPrcb->Number;
                v138 = v70;
                if ( v70 )
                {
                  EtwpGetSidExtendedHeaderItem();
                  v70 = ListEntry;
                }
                v29 = 0;
                v28 = BugCheckParameter3;
                v27 = v133;
                if ( v70 )
                {
LABEL_106:
                  v31 |= 2u;
                  v28 += LOWORD(v70->Next);
                  LODWORD(BugCheckParameter3) = v28;
                }
              }
              v73 = *(_DWORD *)(v25 + 120);
              if ( (v73 & 2) != 0 )
              {
                v31 |= 1u;
                v28 += 16;
                LODWORD(BugCheckParameter3) = v28;
              }
              if ( (v73 & 0x80u) != 0 && (v31 & 0x80u) != 0 )
              {
                v31 |= 0x20u;
                v28 += 16;
                LODWORD(BugCheckParameter3) = v28;
              }
              if ( (v73 & 0x100) != 0 )
              {
                v31 |= 0x40u;
                v28 += 16;
                LODWORD(BugCheckParameter3) = v28;
              }
              if ( (v73 & 4) != 0 && !EtwpPagingDisabled )
              {
                v97 = *(_QWORD *)(v32 + 368);
                if ( !v97 || (v98 = 1, (*(_DWORD *)(v97 + 80 * v27) & 0x80001000) != 0x80001000) )
                  v98 = 0;
                v99 = v127;
                if ( !v98
                  || (LOBYTE(v27) = EffectiveIrql < 2u,
                      v100 = EtwpApplyStackWalkFilter(*v127, v137, (unsigned int)Size, v27),
                      v28 = BugCheckParameter3,
                      v29 = 0,
                      v100) )
                {
                  if ( (v20 & 1) == 0 )
                  {
                    v101 = 256;
                    StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
                    if ( !StackLookasideListEntry )
                    {
                      IoGetStackLimits(&LowLimit, &HighLimit);
                      if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
                      {
                        v102 = alloca(1552LL);
                        StackLookasideListEntry = &v115;
                        v101 = 192;
                      }
                    }
                    if ( StackLookasideListEntry )
                    {
                      v103 = 0LL;
                      v104 = 1;
                      v105 = v135[3] - *(_QWORD *)&EventTracingProvGuid.Data1;
                      if ( !v105 )
                        v105 = v135[4] - *(_QWORD *)EventTracingProvGuid.Data4;
                      if ( !v105 && *v99 == 18 )
                      {
                        v31 |= 0x10u;
                        v103 = v135 + 8;
                        v104 = 0;
                      }
                      LOBYTE(v114) = v104;
                      EtwpGetStackExtendedHeaderItem(v142, a4, v101, &StackLookasideListEntry, v114, v103);
                      if ( !StackLookasideListEntry || (v106 = 1, v101 != 256) )
                        v106 = 0;
                      v20 ^= (v20 ^ (2 * v106)) & 2;
                    }
                    v20 |= 1u;
                    v116 = v20;
                    v28 = BugCheckParameter3;
                    v29 = 0;
                  }
                  if ( StackLookasideListEntry )
                  {
                    v31 |= 4u;
                    v28 += *(unsigned __int16 *)StackLookasideListEntry;
                  }
                }
              }
            }
            LODWORD(v133) = *(unsigned __int16 *)(v25 + 118);
            v35 = &v153[3 * v154];
            v36 = 0;
            v37 = 0;
            while ( v36 < a10 )
            {
              if ( a15 )
                v38 = *(_BYTE *)(16LL * v36 + v134 + 12);
              else
                v38 = 0;
              if ( v38 )
              {
                if ( v38 == 1 )
                {
                  v29 += *(_WORD *)(16LL * v36 + v134 + 8);
                  v126 = ++v37;
                }
              }
              else
              {
                v28 += *(_DWORD *)(16LL * v36 + v134 + 8);
              }
              ++v36;
            }
            LODWORD(BugCheckParameter3) = v28;
            LOWORD(v120) = v29;
            v23 = v37 == 0;
            v39 = v121;
            v40 = (unsigned int)v133;
            if ( !v23 )
            {
              v28 += (v29 + 15) & 0xFFFFFFF8;
              LODWORD(BugCheckParameter3) = v28;
            }
            if ( v123 )
            {
              v28 += (v123 + 15) & 0xFFFFFFF8;
              LODWORD(BugCheckParameter3) = v28;
            }
            *((_DWORD *)v35 + 10) = v28;
            if ( EffectiveIrql >= 2u )
            {
              if ( (unsigned int)v40 >= 0x40 )
              {
                LODWORD(v41) = 1;
                v130 = 1LL;
              }
              else
              {
                _mm_lfence();
                v41 = *(_QWORD *)(v125 + 8 * v40 + 912);
                v130 = v41;
              }
            }
            else
            {
              if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v125 + 8 * v40 + 400), 1u) )
              {
                if ( (unsigned int)v40 >= 0x40 )
                {
                  LODWORD(v41) = 1;
                  v130 = 1LL;
                }
                else
                {
                  _mm_lfence();
                  v130 = *(_QWORD *)(v125 + 8 * v40 + 912);
                  LODWORD(v41) = v130;
                }
                v39 = 1;
              }
              else
              {
                LODWORD(v41) = v130;
              }
              v28 = BugCheckParameter3;
            }
            if ( (v41 & 1) != 0 )
            {
              v21 = v125;
              if ( v39 )
                ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v125 + 8 * v40 + 400), 1u);
              if ( (_DWORD)v40 == 3 )
              {
                v107 = -1073741058;
                if ( !*(_BYTE *)(v21 + 5025) )
                  v107 = -1073741816;
                v124 = v107;
                break;
              }
            }
            else
            {
              v42 = EtwpReserveTraceBuffer(v41, v28, (unsigned int)&v151, (unsigned int)&v150, 0);
              v141 = v42;
              if ( v42 )
              {
                v43 = v130;
                *(_QWORD *)v35 = v130;
                *((_QWORD *)v35 + 1) = v42;
                v35[1] = v151;
                *((_QWORD *)v35 + 4) = v152;
                ++v154;
                v44 = BugCheckParameter3;
                *(_DWORD *)v42 = BugCheckParameter3 | *(_DWORD *)(v43 + 20);
                *(_WORD *)(v42 + 4) = a6;
                *(_WORD *)(v42 + 6) = a7;
                *(_OWORD *)(v42 + 24) = *(_OWORD *)(v135 + 3);
                *(_OWORD *)(v42 + 40) = *(_OWORD *)v127;
                if ( a8 )
                  v45 = *a8;
                else
                  v45 = NullGuid;
                *(GUID *)(v42 + 64) = v45;
                *(_QWORD *)(v42 + 16) = v150;
                *(_DWORD *)(v42 + 8) = p_LockNV[398];
                *(_DWORD *)(v42 + 12) = p_LockNV[396];
                *(_DWORD *)(v42 + 56) = p_LockNV[163];
                *(_DWORD *)(v42 + 60) = p_LockNV[183];
                if ( !v31 )
                {
                  v46 = 0LL;
LABEL_52:
                  v47 = HIDWORD(BugCheckParameter3);
                  goto LABEL_53;
                }
                if ( (v31 & 8) != 0 )
                {
                  v74 = v42 + 80;
                  v129 = (_DWORD *)(v42 + 80);
                  *(_DWORD *)(v42 + 80) = 65560;
                  *(_DWORD *)(v42 + 84) = 0x100000;
                  *(_OWORD *)(v42 + 88) = *a9;
                  *(_WORD *)(v42 + 4) |= 1u;
                  v75 = 104;
                  HIDWORD(BugCheckParameter3) = 104;
                  v132 = (void *)(v42 + 80);
                }
                else
                {
                  v74 = 0LL;
                  v75 = HIDWORD(BugCheckParameter3);
                }
                if ( (v31 & 2) != 0 )
                {
                  v76 = (void *)(v42 + v75);
                  memmove(v76, ListEntry, LOWORD(ListEntry->Next));
                  *(_WORD *)(v42 + 4) |= 1u;
                  v75 = LOWORD(ListEntry->Next) + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v75;
                  if ( v74 )
                    *(_WORD *)(v74 + 4) |= 1u;
                  v77 = v76;
                  v129 = v76;
                  v132 = v76;
                }
                else
                {
                  v77 = v129;
                }
                if ( (v31 & 1) != 0 )
                {
                  v93 = (_DWORD *)(v42 + v75);
                  *v93 = 196624;
                  v93[1] = 0x40000;
                  v93[2] = PsGetCurrentProcessSessionId();
                  *(_WORD *)(v42 + 4) |= 1u;
                  v75 = HIDWORD(BugCheckParameter3) + 16;
                  HIDWORD(BugCheckParameter3) += 16;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v93;
                  v129 = v93;
                  v132 = v93;
                }
                if ( (v31 & 0x20) != 0 )
                {
                  v88 = (_DWORD *)(v42 + v75);
                  *v88 = 851984;
                  v88[1] = 0x80000;
                  ProcessStartKey = EtwpGetProcessStartKey(KeGetCurrentThread()->ApcState.Process);
                  v90[1] = ProcessStartKey;
                  *(_WORD *)(v42 + 4) |= 1u;
                  v75 = v91 + 16;
                  HIDWORD(BugCheckParameter3) = v75;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v90;
                  v129 = v90;
                  v132 = v90;
                }
                if ( (v31 & 0x40) != 0 )
                {
                  v80 = (_DWORD *)(v42 + v75);
                  *v80 = 655376;
                  v80[1] = 0x80000;
                  if ( (v20 & 4) != 0 )
                  {
                    v82 = v143;
                  }
                  else
                  {
                    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
                    v82 = _InterlockedIncrement64(EtwSupport + 137) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*(unsigned int *)EtwSupport << 48);
                    v143 = v82;
                    v20 |= 4u;
                    v116 = v20;
                    if ( v144 )
                      *v144 = v82;
                  }
                  *((_QWORD *)v80 + 1) = v82;
                  *(_WORD *)(v42 + 4) |= 1u;
                  v75 += 16;
                  HIDWORD(BugCheckParameter3) = v75;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v80;
                  v129 = v80;
                  v132 = v80;
                }
                if ( (v31 & 4) == 0 )
                {
                  v46 = (unsigned __int16 *)v129;
                  goto LABEL_52;
                }
                v111 = v42 + v75;
                memmove((void *)v111, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
                if ( *(_QWORD *)(v111 + 8) && (v31 & 0x10) == 0 )
                {
                  if ( v125 != EtwpHostSiloState )
                    goto LABEL_226;
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
                  v113 = PoolWithTag;
                  if ( !PoolWithTag )
                    goto LABEL_226;
                  KeInitializeApc(
                    (_DWORD)PoolWithTag,
                    (_DWORD)p_LockNV,
                    0,
                    (unsigned int)EtwpCrimsonStackWalkApc,
                    0LL,
                    (__int64)EtwpCrimsonStackWalkApc,
                    0,
                    (unsigned int)v133);
                  if ( !(unsigned __int8)KeInsertQueueApc(
                                           v113,
                                           *(unsigned int *)(v111 + 8),
                                           *(unsigned int *)(v111 + 12),
                                           0LL) )
                  {
                    ExFreePoolWithTag(v113, 0);
LABEL_226:
                    *(_QWORD *)(v111 + 8) = 0LL;
                  }
                }
                *(_WORD *)(v42 + 4) |= 1u;
                v47 = *(unsigned __int16 *)StackLookasideListEntry + HIDWORD(BugCheckParameter3);
                HIDWORD(BugCheckParameter3) = v47;
                if ( v77 )
                  *((_WORD *)v77 + 2) |= 1u;
                v46 = (unsigned __int16 *)v111;
                v129 = (_DWORD *)v111;
                v132 = (void *)v111;
LABEL_53:
                v48 = Src;
                if ( Src )
                {
                  v63 = (unsigned __int16 *)(v42 + v47);
                  Size = (size_t)v63;
                  v64 = v123;
                  v65 = (v123 + 15) & 0xFFF8;
                  *v63 = v65;
                  *(_DWORD *)(v63 + 1) = 12;
                  v63[3] = v64;
                  v66 = v65 - v64 - 8;
                  v121 = v66;
                  v67 = v64;
                  memmove(v63 + 4, v48, v64);
                  memset((char *)v63 + v67 + 8, 0, v66);
                  v68 = v129;
                  *(_WORD *)(v42 + 4) |= 1u;
                  v47 = *v63 + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v47;
                  if ( v68 )
                    *((_WORD *)v68 + 2) |= 1u;
                  v46 = v63;
                  v44 = BugCheckParameter3;
                }
                if ( v126 )
                {
                  v83 = (unsigned __int16 *)(v42 + v47);
                  v84 = (unsigned __int16)v120;
                  v85 = (v120 + 15) & 0xFFF8;
                  *v83 = v85;
                  *(_DWORD *)(v83 + 1) = 11;
                  v83[3] = v84;
                  v139 = v83 + 4;
                  v146 = (char *)v83 + v84 + 8;
                  memset(v146, 0, (unsigned __int16)(v85 - v84 - 8));
                  *(_WORD *)(v42 + 4) |= 1u;
                  v47 = *v83 + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v47;
                  if ( v46 )
                    v46[2] |= 1u;
                }
                for ( i = 0; ; ++i )
                {
                  v120 = i;
                  if ( i >= a10 )
                    break;
                  v50 = *(unsigned int *)(v134 + 16LL * i + 8);
                  LODWORD(Size) = *(_DWORD *)(v134 + 16LL * i + 8);
                  v51 = *(_QWORD **)(v134 + 16LL * i);
                  if ( a15 )
                    v52 = *(_BYTE *)(v134 + 16LL * i + 12);
                  else
                    v52 = 0;
                  if ( v52 )
                  {
                    if ( v52 == 1 )
                    {
                      v86 = (char *)v139;
                      if ( !v139 || (v87 = v50, (char *)v139 + v50 > v146) || !v126 )
                        KeBugCheckEx(0x11Du, 5uLL, v47, v44, 0LL);
                      memmove(v139, *(const void **)(v134 + 16LL * i), v50);
                      v139 = &v86[v87];
                      --v126;
                    }
                    else if ( v52 == 3 && (_DWORD)v50 == 8 )
                    {
                      *(_QWORD *)(v42 + 16) = *v51;
                    }
                  }
                  else
                  {
                    v53 = (void *)(v42 + v47);
                    v132 = v53;
                    v54 = v50 + v47;
                    HIDWORD(BugCheckParameter3) = v54;
                    if ( v54 > v44 )
                      KeBugCheckEx(0x11Du, 5uLL, v54, v44, 0LL);
                    memmove(v53, v51, v50);
                  }
                  v47 = HIDWORD(BugCheckParameter3);
                }
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v130 + 12) & 0x80000) != 0 )
                {
                  EtwpSendTraceEvent(v130, &v151);
                }
                v55 = v147;
                v21 = v125;
                if ( v147 )
                {
                  v56 = *v147;
                  _bittestandset64(&v56, (unsigned int)v133);
                  *v55 = v56;
                }
              }
              else
              {
                v108 = v130;
                ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v130, (unsigned int)BugCheckParameter3);
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
                  EtwpTraceLostEvent(v135 + 3, v127, v108 + 136, ReserveTraceBufferStatus);
                v110 = v124;
                if ( v124 >= 0 )
                {
                  if ( (*(_DWORD *)(v108 + 12) & 0x8000000) == 0 )
                    v110 = ReserveTraceBufferStatus;
                  v124 = v110;
                }
                v21 = v125;
                if ( v39 )
                  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v125 + 8 * v40 + 400), 1u);
                if ( ReserveTraceBufferStatus == -1073741675 )
                {
                  v124 = -1073741675;
                  break;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v20 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v124 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v127 + 4),
      *((_QWORD *)v127 + 1),
      (_DWORD)v135,
      (unsigned int)v153,
      v118,
      v124,
      (__int64)v127,
      EffectiveIrql < 2u);
  }
  else
  {
    while ( v18 < v154 )
    {
      EtwpReleaseTraceBuffer(&v153[3 * v18 + 1]);
      if ( EffectiveIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v21 + 8LL * **v57 + 400), 1u);
      ++v18;
    }
  }
  if ( v122 )
    KeLeaveCriticalRegionThread((__int64)v142);
  v58 = ListEntry;
  if ( ListEntry )
  {
    v78 = KeGetCurrentPrcb();
    v79 = v78->PPLookasideList[8].P;
    ++v79->TotalFrees;
    if ( LOWORD(v79->ListHead.Alignment) < v79->Depth
      || (++v79->FreeMisses,
          v79 = v78->PPLookasideList[8].L,
          ++v79->TotalFrees,
          LOWORD(v79->ListHead.Alignment) < v79->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v79->ListHead, v58);
    }
    else
    {
      ++v79->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))v79->FreeEx)(v58);
    }
  }
  return (unsigned int)v124;
}
