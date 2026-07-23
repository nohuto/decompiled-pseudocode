/*
 * XREFs of EtwpEventWriteFull @ 0x140073860
 * Callers:
 *     EtwWriteEx @ 0x140012EE0 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x14014494C (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x1402248AC (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x140224AA8 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x140226150 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x140542EAC (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     IoGetStackLimits @ 0x14004EEE0 (IoGetStackLimits.c)
 *     MmCanThreadFault @ 0x1400511A0 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400A88E8 (EtwpGetReserveTraceBufferStatus.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x1400D4790 (EtwpReserveTraceBuffer.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     EtwpFailLogging @ 0x140224BC4 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x1402278D8 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140227C60 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140229038 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140229694 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x140229AE8 (EtwpApplyStackWalkFilter.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetProcessStartKey @ 0x1404CFF60 (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        _QWORD *a1,
        int a2,
        char a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int16 a6,
        __int16 a7,
        GUID *a8,
        _OWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13,
        __int64 a14,
        char a15,
        unsigned __int16 *a16,
        unsigned __int64 *a17)
{
  int v18; // r14d
  unsigned __int16 v19; // r9
  __int64 v21; // rax
  unsigned __int16 *v22; // rax
  char v23; // di
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v25; // rax
  int v26; // ebx
  unsigned __int16 *v27; // r9
  bool v28; // zf
  unsigned int v29; // ecx
  __int64 v30; // r15
  __int64 v31; // r12
  __int64 v32; // rax
  _KPROCESS *Process; // rcx
  int v34; // ebx
  __int64 v35; // r13
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // al
  unsigned int v39; // esi
  __int64 v40; // rdx
  unsigned __int8 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int8 v45; // al
  char v46; // al
  unsigned __int16 *v47; // rcx
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v50; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  char v55; // al
  _WORD *v56; // r15
  unsigned int v57; // esi
  void *v58; // rsp
  _QWORD *v59; // rdx
  char v60; // r8
  char v61; // al
  unsigned int v62; // r15d
  __int64 v63; // rsi
  _OWORD *v64; // r13
  unsigned int v65; // r14d
  unsigned __int16 *v66; // rsi
  char v67; // al
  unsigned int v68; // eax
  unsigned __int16 v69; // r14
  unsigned int v70; // eax
  char v71; // r9
  __int64 v72; // r14
  __int64 v73; // r15
  int v74; // eax
  int v75; // r9d
  __int64 v76; // rax
  __int64 v77; // r12
  unsigned int ReserveTraceBufferStatus; // ebx
  char v79; // r12
  int v80; // eax
  char v81; // cl
  int v82; // eax
  unsigned __int8 v83; // cl
  GUID v84; // xmm0
  unsigned __int16 *v85; // r14
  unsigned int v86; // r10d
  void *v87; // rsi
  _DWORD *v88; // rdx
  int SessionId; // eax
  unsigned __int16 *v90; // rdx
  int v91; // r10d
  _DWORD *v92; // rdx
  __int64 ProcessStartKey; // rax
  unsigned __int16 *v94; // rdx
  int v95; // r10d
  _DWORD *v96; // r8
  volatile signed __int64 *EtwSupport; // rcx
  unsigned __int64 v98; // rdx
  unsigned __int16 *v99; // rsi
  PVOID PoolWithTag; // rbx
  unsigned __int16 *v101; // r13
  void *v102; // rdx
  unsigned __int16 *v103; // r14
  unsigned __int16 v104; // cx
  unsigned __int16 v105; // si
  unsigned __int16 v106; // si
  __int64 v107; // rbx
  int v108; // r11d
  unsigned __int16 *v109; // rbx
  __int64 v110; // rax
  unsigned __int16 v111; // dx
  char *v112; // r14
  unsigned int v113; // esi
  size_t v114; // rdx
  _QWORD *v115; // r9
  char v116; // r8
  size_t v117; // rbx
  void *v118; // rcx
  unsigned int v119; // r10d
  _QWORD *v120; // rdx
  __int64 v121; // rcx
  int v122; // eax
  __int64 v123; // r15
  unsigned int **v124; // rbx
  __int64 v125; // rdi
  _SLIST_ENTRY *v126; // r9
  struct _KPRCB *v127; // rdx
  _GENERAL_LOOKASIDE *v128; // r8
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v130; // [rsp+30h] [rbp-610h] BYREF
  char v131; // [rsp+640h] [rbp+0h]
  unsigned __int8 EffectiveIrql; // [rsp+641h] [rbp+1h]
  int BugCheckParameter3; // [rsp+644h] [rbp+4h]
  unsigned __int8 BugCheckParameter3_4; // [rsp+648h] [rbp+8h]
  char v135; // [rsp+650h] [rbp+10h]
  int v136; // [rsp+658h] [rbp+18h]
  int v137; // [rsp+65Ch] [rbp+1Ch]
  int v138; // [rsp+660h] [rbp+20h]
  int v139; // [rsp+664h] [rbp+24h]
  unsigned int v140; // [rsp+668h] [rbp+28h]
  unsigned int v141; // [rsp+66Ch] [rbp+2Ch]
  char v142; // [rsp+670h] [rbp+30h]
  unsigned int Size; // [rsp+674h] [rbp+34h]
  int Size_4; // [rsp+678h] [rbp+38h]
  unsigned __int16 v145; // [rsp+67Ch] [rbp+3Ch]
  unsigned __int16 *v146; // [rsp+680h] [rbp+40h]
  __int64 v147; // [rsp+688h] [rbp+48h]
  void *Src; // [rsp+690h] [rbp+50h]
  unsigned __int16 *v149; // [rsp+698h] [rbp+58h]
  int v150; // [rsp+6A0h] [rbp+60h]
  void *StackLookasideListEntry; // [rsp+6A8h] [rbp+68h] BYREF
  void *v152; // [rsp+6B0h] [rbp+70h]
  __int64 v153; // [rsp+6B8h] [rbp+78h]
  _QWORD *v154; // [rsp+6C0h] [rbp+80h]
  __int64 v155; // [rsp+6C8h] [rbp+88h]
  PSLIST_ENTRY v156; // [rsp+6D0h] [rbp+90h]
  void *v157; // [rsp+6D8h] [rbp+98h]
  __int64 v158; // [rsp+6E0h] [rbp+A0h]
  __int64 v159; // [rsp+6E8h] [rbp+A8h]
  __int64 v160; // [rsp+6F0h] [rbp+B0h]
  unsigned __int64 v161; // [rsp+6F8h] [rbp+B8h]
  struct _KTHREAD *v162; // [rsp+700h] [rbp+C0h]
  unsigned __int64 *v163; // [rsp+708h] [rbp+C8h]
  char *v164; // [rsp+710h] [rbp+D0h]
  _QWORD *v165; // [rsp+718h] [rbp+D8h]
  unsigned __int64 HighLimit; // [rsp+720h] [rbp+E0h] BYREF
  unsigned __int64 LowLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v168; // [rsp+730h] [rbp+F0h] BYREF
  void *v169; // [rsp+738h] [rbp+F8h]
  __int128 v170; // [rsp+740h] [rbp+100h] BYREF
  __int64 v171; // [rsp+750h] [rbp+110h]
  _OWORD v172[24]; // [rsp+760h] [rbp+120h] BYREF
  unsigned int v173; // [rsp+8E0h] [rbp+2A0h]
  _DWORD *v175; // [rsp+9A8h] [rbp+368h]

  v137 = (unsigned __int8)a2;
  v154 = a1;
  v146 = a5;
  v158 = a11;
  v165 = a13;
  v163 = a17;
  v18 = 0;
  v139 = 0;
  v19 = 0;
  Src = 0LL;
  v156 = 0LL;
  StackLookasideListEntry = 0LL;
  v161 = 0LL;
  v145 = 0;
  LOBYTE(a2) = 0;
  v138 = a2;
  v140 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = (__int64)v154;
  if ( a14 )
    v21 = a14;
  v155 = v21;
  if ( a16 )
  {
    v19 = *a16;
    v145 = *a16;
  }
  v22 = 0LL;
  if ( v19 )
    v22 = a16;
  v169 = v22;
  v23 = 0;
  v131 = 0;
  v173 = 0;
  v147 = v154[47];
  v159 = v147;
  if ( v163 && *v163 )
  {
    v161 = *v163;
    v23 = 4;
    v131 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v162 = CurrentThread;
  v25 = a12;
  if ( !a12 )
    v25 = (__int64)CurrentThread;
  v175 = (_DWORD *)v25;
  EffectiveIrql = KeGetEffectiveIrql();
  v142 = 0;
  if ( !EffectiveIrql )
  {
    --CurrentThread->KernelApcDisable;
    v142 = 1;
  }
  v26 = v137;
  LOBYTE(v26) = ~a3 & v137;
LABEL_17:
  v27 = v146;
  while ( 1 )
  {
    v28 = !_BitScanForward(&v29, (unsigned __int8)v26);
    Size = v29;
    if ( v28 )
      break;
    BugCheckParameter3 = 80;
    v136 = 80;
    v149 = 0LL;
    v152 = 0LL;
    v141 = 0;
    Size_4 = 0;
    v157 = 0LL;
    v164 = 0LL;
    LOBYTE(v138) = 0;
    v153 = 1LL;
    LOBYTE(v26) = (v26 - 1) & v26;
    v137 = v26;
    v135 = v26;
    v30 = v29;
    v31 = v155 + 32LL * v29;
    if ( v165 )
    {
      v32 = *v165;
      if ( _bittest64(&v32, *(unsigned __int8 *)(v31 + 118)) )
        continue;
    }
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(v31 + 112, *((unsigned __int8 *)v27 + 4), *((_QWORD *)v27 + 1)) )
    {
      if ( (Process = KeGetCurrentThread()->ApcState.Process, (a4 & 2) == 0)
        && (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000LL) == 0
        || (*(_DWORD *)(v31 + 120) & 0x200) == 0 )
      {
        v34 = 0;
        v35 = v155;
        v36 = *(_QWORD *)(v155 + 368);
        v38 = 0;
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 80 * v30);
          if ( (v37 & 0x80000200) == 0x80000200 || (v37 & 0x80000100) == 0x80000100 )
            v38 = 1;
        }
        v39 = Size;
        if ( v38 )
        {
          if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                   v155,
                                   Size,
                                   0,
                                   (_DWORD)v27,
                                   *v27,
                                   a10,
                                   v158,
                                   0,
                                   EffectiveIrql) )
            goto LABEL_42;
          v27 = v146;
        }
        if ( a15 )
        {
          v40 = *((_QWORD *)v27 + 1);
          v41 = *((_BYTE *)v27 + 4);
          v42 = v154[46];
          if ( v42 )
          {
            v43 = 80 * v30 + v42;
            if ( (*(_DWORD *)v43 & 0x80000400) == 0x80000400 )
            {
              v44 = *(_QWORD *)(v43 + 72);
              v45 = *(_BYTE *)(v44 + 1);
              if ( (v41 <= v45 || !v45)
                && (!v40 || (v40 & *(_QWORD *)(v44 + 8)) != 0 && (v40 & *(_QWORD *)(v44 + 16)) == *(_QWORD *)(v44 + 16))
                && !(unsigned __int8)EtwpApplyEventNameFilter(
                                       v35,
                                       v39,
                                       a10,
                                       v158,
                                       0,
                                       EffectiveIrql,
                                       v41,
                                       *((_QWORD *)v27 + 1)) )
              {
LABEL_42:
                v26 = v137;
                goto LABEL_17;
              }
            }
          }
        }
        if ( a9 )
        {
          BugCheckParameter3 = 104;
          v34 = 8;
        }
        if ( (*(_DWORD *)(v31 + 120) & 0xFFFFFF9F) == 0 )
          goto LABEL_95;
        v46 = !EtwpPagingDisabled && (a4 & 1) == 0 && MmCanThreadFault() && !BYTE6(v162[1].Queue);
        v34 ^= ((unsigned __int8)v34 ^ (unsigned __int8)(v46 << 7)) & 0x80;
        if ( (*(_DWORD *)(v31 + 120) & 1) == 0 || (v34 & 0x80u) == 0 )
          goto LABEL_63;
        v47 = (unsigned __int16 *)Src;
        if ( Src )
          goto LABEL_62;
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v50 = RtlpInterlockedPopEntrySList(&P->ListHead);
        Src = v50;
        if ( !v50 )
        {
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v50 = RtlpInterlockedPopEntrySList(&L->ListHead);
          Src = v50;
          if ( !v50 )
          {
            ++L->AllocateMisses;
            v50 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                  (unsigned int)L->Type,
                                  L->Size,
                                  L->Tag);
            Src = v50;
          }
        }
        if ( v50 )
          LODWORD(v50->Next) = CurrentPrcb->Number;
        v156 = v50;
        if ( v50 && (EtwpGetSidExtendedHeaderItem(), (v47 = (unsigned __int16 *)Src) != 0LL) )
        {
LABEL_62:
          v34 |= 2u;
          v52 = *v47 + BugCheckParameter3;
          BugCheckParameter3 = v52;
        }
        else
        {
LABEL_63:
          v52 = BugCheckParameter3;
        }
        v53 = *(_DWORD *)(v31 + 120);
        if ( (v53 & 2) != 0 )
        {
          v34 |= 1u;
          v52 += 16;
          BugCheckParameter3 = v52;
        }
        if ( (v53 & 0x80u) != 0 && (v34 & 0x80u) != 0 )
        {
          v34 |= 0x20u;
          v52 += 16;
          BugCheckParameter3 = v52;
        }
        if ( (v53 & 0x100) != 0 )
        {
          v34 |= 0x40u;
          BugCheckParameter3 = v52 + 16;
        }
        if ( (v53 & 4) != 0
          && !EtwpPagingDisabled
          && ((v54 = *(_QWORD *)(v35 + 368)) == 0 || (*(_DWORD *)(v54 + 80 * v30) & 0x80001000) != 0x80001000
            ? (v55 = 0)
            : (v55 = 1),
              (v56 = v146, !v55)
           || (LOBYTE(v27) = EffectiveIrql < 2u, (unsigned __int8)EtwpApplyStackWalkFilter(*v146, v35, Size, v27))) )
        {
          if ( (v23 & 1) == 0 )
          {
            v57 = 256;
            StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
            if ( !StackLookasideListEntry )
            {
              IoGetStackLimits(&LowLimit, &HighLimit);
              if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
              {
                v58 = alloca(1552LL);
                StackLookasideListEntry = &v130;
                v57 = 192;
              }
            }
            if ( StackLookasideListEntry )
            {
              v59 = 0LL;
              v60 = 1;
              if ( v154[3] == *(_QWORD *)&EventTracingProvGuid.Data1
                && v154[4] == *(_QWORD *)EventTracingProvGuid.Data4
                && *v56 == 18 )
              {
                v34 |= 0x10u;
                v59 = v154 + 8;
                v60 = 0;
              }
              LOBYTE(BugCheckParameter4) = v60;
              EtwpGetStackExtendedHeaderItem(v162, a4, v57, &StackLookasideListEntry, BugCheckParameter4, v59);
              if ( !StackLookasideListEntry || (v61 = 1, v57 != 256) )
                v61 = 0;
              v23 ^= (v23 ^ (2 * v61)) & 2;
            }
            v23 |= 1u;
            v131 = v23;
          }
          v62 = BugCheckParameter3;
          if ( StackLookasideListEntry )
          {
            v34 |= 4u;
            v62 = *(unsigned __int16 *)StackLookasideListEntry + BugCheckParameter3;
            BugCheckParameter3 = v62;
          }
        }
        else
        {
LABEL_95:
          v62 = BugCheckParameter3;
        }
        v63 = *(unsigned __int16 *)(v31 + 118);
        v140 = v63;
        v150 = v63;
        v64 = &v172[3 * v173];
        v65 = 0;
        if ( a10 )
        {
          v66 = (unsigned __int16 *)(v158 + 8);
          while ( !(unsigned int)EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails)
               || *(_DWORD *)v66 <= 0xFFFFu )
          {
            if ( a15 )
              v67 = *((_BYTE *)v66 + 4);
            else
              v67 = 0;
            if ( v67 )
            {
              if ( v67 == 1 )
              {
                if ( (unsigned int)EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
                  v141 += *(_DWORD *)v66;
                else
                  v141 += *v66;
                ++Size_4;
              }
            }
            else
            {
              v62 += *(_DWORD *)v66;
              BugCheckParameter3 = v62;
            }
            ++v65;
            v66 += 8;
            if ( v65 >= a10 )
            {
              v63 = v140;
              goto LABEL_116;
            }
          }
          v18 = v139;
          if ( v139 >= 0 )
            v18 = -2147483643;
          v26 = (unsigned __int8)v137 | (1 << Size);
          break;
        }
LABEL_116:
        if ( Size_4 )
        {
          if ( (unsigned int)EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
          {
            v68 = (v141 + 15) & 0xFFFFFFF8;
            if ( v68 > 0xFFFF )
              goto LABEL_119;
          }
          else
          {
            v68 = (v141 + 15) & 0xFFFFFFF8;
          }
          v62 += v68;
          BugCheckParameter3 = v62;
        }
        v69 = v145;
        if ( v145 )
        {
          if ( (unsigned int)EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails) )
          {
            v70 = (v69 + 15) & 0xFFFFFFF8;
            if ( v70 > 0xFFFF )
            {
LABEL_119:
              v18 = v139;
              if ( v139 >= 0 )
                v18 = -1073741675;
              v26 = (unsigned __int8)v137 | (1 << Size);
              break;
            }
          }
          else
          {
            v70 = (v69 + 15) & 0xFFFFFFF8;
          }
          v62 += v70;
          BugCheckParameter3 = v62;
        }
        *((_DWORD *)v64 + 10) = v62;
        if ( EffectiveIrql >= 2u )
        {
          v71 = v138;
          if ( (unsigned int)v63 >= 0x40 )
          {
            v72 = 1LL;
            v153 = 1LL;
          }
          else
          {
            _mm_lfence();
            v72 = *(_QWORD *)(v147 + 8 * v63 + 912);
            v153 = v72;
          }
        }
        else
        {
          if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v147 + 8 * v63 + 400), 1u) )
          {
            if ( v140 >= 0x40 )
            {
              v153 = 1LL;
            }
            else
            {
              _mm_lfence();
              v153 = *(_QWORD *)(v147 + 8 * v63 + 912);
            }
            v71 = 1;
            v138 = 1;
          }
          else
          {
            v71 = v138;
          }
          v72 = v153;
          LODWORD(v63) = v140;
        }
        if ( (v72 & 1) != 0 )
        {
          v73 = v147;
          if ( v71 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v147 + 8LL * (unsigned int)v63 + 400),
              1u);
            v74 = EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
            v75 = (unsigned __int8)v138;
            if ( v74 )
              v75 = 0;
            v138 = v75;
          }
          v18 = v139;
          v26 = v137;
          if ( (_DWORD)v63 == 3 )
          {
            v18 = -1073741058;
            if ( !*(_BYTE *)(v73 + 5025) )
              v18 = -1073741816;
            break;
          }
          goto LABEL_17;
        }
        v76 = EtwpReserveTraceBuffer(v72, v62, (unsigned int)&v170, (unsigned int)&v168, 0);
        v77 = v76;
        v160 = v76;
        if ( !v76 )
        {
          ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v72, v62);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(v154 + 3, v146, v72 + 136, ReserveTraceBufferStatus);
          v18 = v139;
          if ( v139 >= 0 )
          {
            if ( (*(_DWORD *)(v153 + 12) & 0x8000000) == 0 )
              v18 = ReserveTraceBufferStatus;
            v139 = v18;
          }
          v79 = v138;
          if ( (_BYTE)v138 )
          {
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(v147 + 8LL * (unsigned int)v63 + 400),
              1u);
            v80 = EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
            v81 = v79;
            if ( v80 )
              v81 = 0;
            LOBYTE(v138) = v81;
          }
          v28 = ReserveTraceBufferStatus == -1073741675;
          v26 = v137;
          if ( v28 )
          {
            v18 = -1073741675;
            break;
          }
          goto LABEL_17;
        }
        *(_QWORD *)v64 = v72;
        *((_QWORD *)v64 + 1) = v76;
        v64[1] = v170;
        *((_QWORD *)v64 + 4) = v171;
        ++v173;
        v82 = EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
        v83 = v138;
        if ( v82 )
          v83 = 0;
        v138 = v83;
        BugCheckParameter3_4 = v83;
        *(_DWORD *)v77 = v62 | *(_DWORD *)(v72 + 20);
        *(_WORD *)(v77 + 4) = a6;
        *(_WORD *)(v77 + 6) = a7;
        *(_OWORD *)(v77 + 24) = *(_OWORD *)(v154 + 3);
        *(_OWORD *)(v77 + 40) = *(_OWORD *)v146;
        if ( a8 )
          v84 = *a8;
        else
          v84 = NullGuid;
        *(GUID *)(v77 + 64) = v84;
        *(_QWORD *)(v77 + 16) = v168;
        *(_DWORD *)(v77 + 8) = v175[398];
        *(_DWORD *)(v77 + 12) = v175[396];
        *(_DWORD *)(v77 + 56) = v175[163];
        *(_DWORD *)(v77 + 60) = v175[183];
        if ( !v34 )
        {
          v86 = v136;
LABEL_204:
          v101 = v149;
          goto LABEL_205;
        }
        if ( (v34 & 8) != 0 )
        {
          v85 = (unsigned __int16 *)(v77 + 80);
          v149 = (unsigned __int16 *)(v77 + 80);
          *(_DWORD *)(v77 + 80) = 65560;
          *(_DWORD *)(v77 + 84) = 0x100000;
          *(_OWORD *)(v77 + 88) = *a9;
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = 104;
          v136 = 104;
          v152 = (void *)(v77 + 80);
        }
        else
        {
          v85 = v149;
          v86 = v136;
        }
        if ( (v34 & 2) != 0 )
        {
          v87 = (void *)(v77 + v86);
          memmove(v87, Src, *(unsigned __int16 *)Src);
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = *(unsigned __int16 *)Src + v136;
          v136 = v86;
          if ( v85 )
            v85[2] |= 1u;
          v85 = (unsigned __int16 *)v87;
          v149 = (unsigned __int16 *)v87;
          v152 = v87;
        }
        if ( (v34 & 1) != 0 )
        {
          v88 = (_DWORD *)(v77 + v86);
          *v88 = 196624;
          v88[1] = 0x40000;
          SessionId = MmGetSessionId(KeGetCurrentThread()->ApcState.Process);
          *((_DWORD *)v90 + 2) = SessionId;
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = v91 + 16;
          v136 = v86;
          if ( v85 )
            v85[2] |= 1u;
          v85 = v90;
          v149 = v90;
          v152 = v90;
        }
        if ( (v34 & 0x20) != 0 )
        {
          v92 = (_DWORD *)(v77 + v86);
          *v92 = 851984;
          v92[1] = 0x80000;
          ProcessStartKey = EtwpGetProcessStartKey(KeGetCurrentThread()->ApcState.Process);
          *((_QWORD *)v94 + 1) = ProcessStartKey;
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = v95 + 16;
          v136 = v86;
          if ( v85 )
            v85[2] |= 1u;
          v85 = v94;
          v149 = v94;
          v152 = v94;
        }
        if ( (v34 & 0x40) != 0 )
        {
          v96 = (_DWORD *)(v77 + v86);
          *v96 = 655376;
          v96[1] = 0x80000;
          if ( (v23 & 4) != 0 )
          {
            v98 = v161;
          }
          else
          {
            EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
            v98 = _InterlockedIncrement64(EtwSupport + 137) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*(unsigned int *)EtwSupport << 48);
            v161 = v98;
            v23 |= 4u;
            v131 = v23;
            if ( v163 )
              *v163 = v98;
          }
          *((_QWORD *)v96 + 1) = v98;
          *(_WORD *)(v77 + 4) |= 1u;
          v86 += 16;
          v136 = v86;
          if ( v85 )
            v85[2] |= 1u;
          v85 = (unsigned __int16 *)v96;
          v149 = (unsigned __int16 *)v96;
          v152 = v96;
        }
        if ( (v34 & 4) == 0 )
          goto LABEL_204;
        v99 = (unsigned __int16 *)(v77 + v86);
        memmove(v99, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        if ( *((_QWORD *)v99 + 1) && (v34 & 0x10) == 0 )
        {
          if ( v147 != EtwpHostSiloState )
            goto LABEL_199;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
          if ( !PoolWithTag )
            goto LABEL_199;
          KeInitializeApc(
            (_DWORD)PoolWithTag,
            (_DWORD)v175,
            0,
            (unsigned int)EtwpCrimsonStackWalkApc,
            0LL,
            (__int64)EtwpCrimsonStackWalkApc,
            0,
            v140);
          if ( !(unsigned __int8)KeInsertQueueApc(
                                   PoolWithTag,
                                   *((unsigned int *)v99 + 2),
                                   *((unsigned int *)v99 + 3),
                                   0LL) )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
LABEL_199:
            *((_QWORD *)v99 + 1) = 0LL;
          }
        }
        *(_WORD *)(v77 + 4) |= 1u;
        v86 = *(unsigned __int16 *)StackLookasideListEntry + v136;
        v136 = v86;
        if ( v85 )
          v85[2] |= 1u;
        v101 = v99;
        v152 = v99;
LABEL_205:
        v102 = v169;
        if ( v169 )
        {
          v103 = (unsigned __int16 *)(v77 + v86);
          v149 = v103;
          v104 = v145;
          v105 = (v145 + 15) & 0xFFF8;
          *v103 = v105;
          *(_DWORD *)(v103 + 1) = 12;
          v103[3] = v104;
          v106 = v105 - v104 - 8;
          LOWORD(Size) = v106;
          v107 = v104;
          memmove(v103 + 4, v102, v104);
          memset((char *)v103 + v107 + 8, 0, v106);
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = *v103 + v136;
          v136 = v86;
          if ( v101 )
            v101[2] |= 1u;
          v101 = v103;
          v62 = BugCheckParameter3;
        }
        v108 = Size_4;
        if ( Size_4 )
        {
          v109 = (unsigned __int16 *)(v77 + v86);
          v110 = v141;
          v111 = (v141 + 15) & 0xFFF8;
          *v109 = v111;
          *(_DWORD *)(v109 + 1) = 11;
          v109[3] = v110;
          v112 = (char *)(v109 + 4);
          v157 = v109 + 4;
          v164 = (char *)v109 + v110 + 8;
          memset(v164, 0, (unsigned __int16)(v111 - v110 - 8));
          *(_WORD *)(v77 + 4) |= 1u;
          v86 = *v109 + v136;
          v136 = v86;
          v108 = Size_4;
          if ( v101 )
            v101[2] |= 1u;
        }
        else
        {
          v112 = (char *)v157;
        }
        v113 = 0;
        while ( 1 )
        {
          v141 = v113;
          if ( v113 >= a10 )
            break;
          v114 = *(unsigned int *)(v158 + 16LL * v113 + 8);
          Size = *(_DWORD *)(v158 + 16LL * v113 + 8);
          v115 = *(_QWORD **)(v158 + 16LL * v113);
          if ( a15 )
            v116 = *(_BYTE *)(v158 + 16LL * v113 + 12);
          else
            v116 = 0;
          if ( v116 )
          {
            if ( v116 == 1 )
            {
              if ( !v112 || (v117 = v114, &v112[v114] > v164) || !v108 )
                KeBugCheckEx(0x11Du, 5uLL, v86, v62, 0LL);
              memmove(v112, *(const void **)(v158 + 16LL * v113), v114);
              v157 = &v112[v117];
              v108 = --Size_4;
            }
            else if ( v116 == 3 )
            {
              if ( (_DWORD)v114 == 8 )
                *(_QWORD *)(v77 + 16) = *v115;
              v108 = Size_4;
            }
          }
          else
          {
            v118 = (void *)(v77 + v86);
            v152 = v118;
            v119 = v114 + v86;
            v136 = v119;
            if ( v119 > v62 )
              KeBugCheckEx(0x11Du, 5uLL, v119, v62, 0LL);
            memmove(v118, v115, v114);
            v108 = Size_4;
          }
          ++v113;
          v62 = BugCheckParameter3;
          v86 = v136;
          v112 = (char *)v157;
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v153 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v153, &v170);
        }
        v120 = v165;
        v18 = v139;
        v26 = v137;
        v27 = v146;
        if ( v165 )
        {
          v121 = *v165;
          _bittestandset64(&v121, v140);
          *v120 = v121;
        }
      }
    }
  }
  v122 = EvaluateCurrentState(&g_Feature_1949821240_61231939_FeatureDescriptorDetails);
  v123 = v147;
  if ( v122 && (_BYTE)v138 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v147 + 8LL * v140 + 400), 1u);
  if ( (v23 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v18 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v146 + 4),
      *((_QWORD *)v146 + 1),
      (_DWORD)v154,
      (unsigned int)v172,
      v26,
      v18,
      (__int64)v146,
      EffectiveIrql < 2u);
  }
  else if ( v173 )
  {
    v124 = (unsigned int **)v172;
    v125 = v173;
    do
    {
      EtwpReleaseTraceBuffer(v124 + 2);
      if ( EffectiveIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v123 + 8LL * **v124 + 400), 1u);
      v124 += 6;
      --v125;
    }
    while ( v125 );
  }
  if ( v142 )
    KeLeaveCriticalRegionThread((__int64)v162);
  v126 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v127 = KeGetCurrentPrcb();
    v128 = v127->PPLookasideList[8].P;
    ++v128->TotalFrees;
    if ( LOWORD(v128->ListHead.Alignment) < v128->Depth
      || (++v128->FreeMisses,
          v128 = v127->PPLookasideList[8].L,
          ++v128->TotalFrees,
          LOWORD(v128->ListHead.Alignment) < v128->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v128->ListHead, v126);
    }
    else
    {
      ++v128->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v128->FreeEx)(v126);
    }
  }
  return (unsigned int)v18;
}
