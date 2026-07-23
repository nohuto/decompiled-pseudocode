/*
 * XREFs of EtwpEventWriteFull @ 0x14009E960
 * Callers:
 *     EtwWriteEx @ 0x14009DF00 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x14013B1E0 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14020CF14 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14020D110 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x14020E470 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x1405041BC (EtwWriteErrorLogEntry.c)
 * Callees:
 *     MmCanThreadFault @ 0x140028250 (MmCanThreadFault.c)
 *     IoGetStackLimits @ 0x1400282E0 (IoGetStackLimits.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     PsGetCurrentProcessSessionId @ 0x140098180 (PsGetCurrentProcessSessionId.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     EtwpReserveTraceBuffer @ 0x14009FC90 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1400F4628 (EtwpGetReserveTraceBufferStatus.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpFailLogging @ 0x14020D250 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14020FB80 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x140210028 (EtwpSendTraceEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140210C40 (EtwpGetStackLookasideListEntry.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140211280 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x1402113F8 (EtwpApplyStackWalkFilter.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetProcessStartKey @ 0x1404B479C (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
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
  unsigned int v18; // r12d
  _SLIST_ENTRY *v19; // r15
  unsigned __int16 v20; // r8
  __int64 v21; // rax
  unsigned __int16 *v22; // rax
  char v23; // di
  struct _KTHREAD *CurrentThread; // rax
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 i; // r8
  bool v29; // zf
  __int64 v30; // rdx
  unsigned __int16 *v31; // r14
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rax
  bool v35; // al
  unsigned __int16 v36; // r10
  int v37; // r11d
  _KPROCESS *Process; // rcx
  int v39; // ebx
  __int64 v40; // r9
  __int64 v41; // rcx
  int v43; // r13d
  unsigned int j; // eax
  char v45; // cl
  __int64 v46; // rbx
  __int64 v47; // r13
  _OWORD *v49; // r15
  __int64 v50; // rsi
  BOOLEAN v51; // al
  unsigned int v52; // edx
  __int64 v53; // rax
  char v54; // si
  __int64 v55; // r13
  __int64 v56; // rax
  unsigned int v57; // r15d
  GUID v58; // xmm0
  ULONG_PTR v59; // r8
  void *v60; // rdx
  int v61; // r10d
  void *v62; // rsi
  unsigned int v63; // ebx
  size_t v64; // rdx
  _QWORD *v65; // r9
  unsigned __int8 v66; // cl
  void *v67; // rcx
  ULONG_PTR v68; // r8
  _QWORD *v69; // rdx
  __int64 v70; // rcx
  unsigned int **v71; // r11
  int v72; // ecx
  unsigned __int16 v73; // ax
  unsigned __int16 v74; // si
  unsigned __int16 v75; // si
  __int64 v76; // rbx
  unsigned __int16 *v77; // rcx
  int v78; // eax
  char v79; // al
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // r14
  unsigned int Number; // eax
  int v83; // ecx
  int v84; // eax
  unsigned __int16 *v85; // rsi
  int v86; // eax
  _DWORD *v87; // rdx
  __int64 ProcessStartKey; // rax
  unsigned __int16 *v89; // rdx
  int v90; // r8d
  _DWORD *v91; // rdx
  volatile signed __int64 *EtwSupport; // rcx
  unsigned __int64 v93; // r8
  struct _KPRCB *v94; // rdx
  _GENERAL_LOOKASIDE *v95; // r8
  unsigned __int16 *v96; // rbx
  __int64 v97; // rax
  unsigned __int16 v98; // dx
  int v99; // eax
  size_t v100; // rsi
  char *v101; // r14
  _GENERAL_LOOKASIDE *L; // r14
  struct _KTHREAD *v103; // rcx
  __int64 v104; // rax
  void *ServerSiloForSilo; // rax
  unsigned __int16 *v106; // rsi
  __int64 v107; // rcx
  char v108; // al
  _WORD *v109; // r15
  char v110; // al
  unsigned int v111; // r14d
  void *v112; // rsp
  __int64 v113; // rdx
  char v114; // r8
  __int64 v115; // rax
  char v116; // al
  int v117; // ecx
  __int64 v118; // r14
  unsigned int ReserveTraceBufferStatus; // ebx
  BOOLEAN v120; // al
  int v121; // ecx
  unsigned __int16 *v122; // rsi
  PVOID PoolWithTag; // rax
  void *v124; // rbx
  int v125; // ecx
  int v126; // [rsp+0h] [rbp-640h]
  char v127; // [rsp+30h] [rbp-610h] BYREF
  char v128; // [rsp+640h] [rbp+0h]
  unsigned __int8 v129; // [rsp+648h] [rbp+8h]
  unsigned __int8 EffectiveIrql; // [rsp+650h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+654h] [rbp+14h]
  int v132; // [rsp+65Ch] [rbp+1Ch]
  unsigned int v133; // [rsp+660h] [rbp+20h]
  char v134; // [rsp+664h] [rbp+24h]
  unsigned __int16 v135; // [rsp+668h] [rbp+28h]
  unsigned __int16 v136; // [rsp+66Ch] [rbp+2Ch]
  unsigned int v137; // [rsp+670h] [rbp+30h]
  void *v138; // [rsp+678h] [rbp+38h]
  int v139; // [rsp+680h] [rbp+40h]
  unsigned __int16 *v140; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v141; // [rsp+690h] [rbp+50h]
  __int64 v142; // [rsp+698h] [rbp+58h]
  void *StackLookasideListEntry; // [rsp+6A0h] [rbp+60h] BYREF
  void *v144; // [rsp+6A8h] [rbp+68h]
  __int64 v145; // [rsp+6B0h] [rbp+70h]
  __int64 SiloDriverState; // [rsp+6B8h] [rbp+78h]
  size_t Size; // [rsp+6C0h] [rbp+80h]
  __int64 v148; // [rsp+6C8h] [rbp+88h]
  void *v149; // [rsp+6D0h] [rbp+90h]
  _OWORD *v150; // [rsp+6D8h] [rbp+98h]
  __int64 v151; // [rsp+6E0h] [rbp+A0h]
  _SLIST_ENTRY *v152; // [rsp+6E8h] [rbp+A8h]
  struct _KTHREAD *v153; // [rsp+6F0h] [rbp+B0h]
  unsigned __int64 v154; // [rsp+6F8h] [rbp+B8h]
  char *v155; // [rsp+700h] [rbp+C0h]
  unsigned __int64 *v156; // [rsp+708h] [rbp+C8h]
  _QWORD *v157; // [rsp+710h] [rbp+D0h]
  unsigned __int64 LowLimit; // [rsp+718h] [rbp+D8h] BYREF
  void *Src; // [rsp+720h] [rbp+E0h]
  unsigned __int64 HighLimit; // [rsp+728h] [rbp+E8h] BYREF
  __int64 v161; // [rsp+730h] [rbp+F0h] BYREF
  __int128 v162; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v163; // [rsp+748h] [rbp+108h]
  _OWORD v164[24]; // [rsp+750h] [rbp+110h] BYREF
  unsigned int v165; // [rsp+8D0h] [rbp+290h]

  v151 = a1;
  v129 = a2;
  v140 = a5;
  v148 = a11;
  v157 = a13;
  v156 = a17;
  v18 = 0;
  v139 = 0;
  v19 = 0LL;
  v138 = 0LL;
  v152 = 0LL;
  StackLookasideListEntry = 0LL;
  v154 = 0LL;
  v20 = 0;
  v136 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  v21 = v151;
  if ( a14 )
    v21 = a14;
  v145 = v21;
  if ( a16 )
  {
    v20 = *a16;
    v136 = *a16;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = a16;
  Src = v22;
  v23 = 0;
  v128 = 0;
  v165 = 0;
  if ( v156 && *v156 )
  {
    v154 = *v156;
    v23 = 4;
    v128 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v153 = CurrentThread;
  if ( !p_LockNV )
    p_LockNV = &CurrentThread->Header.LockNV;
  if ( *(_BYTE *)(v145 + 376) )
  {
    v25 = 0LL;
  }
  else
  {
    v103 = KeGetCurrentThread();
    v104 = PspThreadSiloNoLock((__int64)v103, (__int64)v103->Process);
    ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v104);
    v25 = ServerSiloForSilo;
    if ( ServerSiloForSilo )
      ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  }
  SiloDriverState = EtwpGetSiloDriverState(v25);
  if ( v25 )
    ObfDereferenceObjectWithTag(v25, 0x746C6644u);
  EffectiveIrql = KeGetEffectiveIrql(v27, v26);
  v134 = 0;
  if ( !EffectiveIrql )
  {
    --v153->KernelApcDisable;
    v134 = 1;
  }
  v129 &= ~a3;
  do
  {
LABEL_20:
    for ( i = 1LL; ; i = 1LL )
    {
      while ( 1 )
      {
        v29 = !_BitScanForward((unsigned int *)&v30, v129);
        LODWORD(Size) = v30;
        if ( v29 )
        {
          v46 = SiloDriverState;
LABEL_42:
          v47 = (__int64)v140;
          goto LABEL_43;
        }
        v142 = 1LL;
        BugCheckParameter3 = 0x5000000050LL;
        v31 = 0LL;
        v141 = 0LL;
        v144 = 0LL;
        LOBYTE(v135) = 0;
        v132 = 0;
        v149 = 0LL;
        v155 = 0LL;
        v129 &= v129 - 1;
        v32 = (unsigned int)v30;
        v33 = 32LL * (unsigned int)v30 + v145 + 112;
        if ( v157 )
        {
          v34 = *v157;
          if ( _bittest64(&v34, *(unsigned __int8 *)(v33 + 6)) )
            continue;
        }
        v35 = EtwpLevelKeywordEnabled(v33, *((_BYTE *)v140 + 4), *((_QWORD *)v140 + 1));
        i = 1LL;
        if ( v35 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( (a4 & 2) == 0 && (HIDWORD(Process[2].SwapListEntry.Next) & 0x400) == 0 )
            break;
          if ( (*(_DWORD *)(v33 + 8) & 0x200) == 0 )
            break;
        }
      }
      v39 = 0;
      v40 = v145;
      v41 = *(_QWORD *)(v145 + 368);
      if ( v41
        && ((*(_DWORD *)(v41 + 72 * v32) & 0x80000200) == 0x80000200
         || (*(_DWORD *)(v41 + 72 * v32) & 0x80000100) == 0x80000100) )
      {
        if ( !(unsigned __int8)EtwpApplyEventIdPayloadFilter(
                                 v145,
                                 Size,
                                 0,
                                 (_DWORD)v140,
                                 *v140,
                                 a10,
                                 v148,
                                 0,
                                 EffectiveIrql) )
          goto LABEL_20;
        v40 = v145;
        v36 = 0;
        v37 = 0;
      }
      if ( a9 )
      {
        LODWORD(BugCheckParameter3) = 104;
        v39 = 8;
      }
      if ( (*(_DWORD *)(v33 + 8) & 0xFFFFFF9F) == 0 )
        goto LABEL_33;
      v79 = !EtwpPagingDisabled && (a4 & 1) == 0 && MmCanThreadFault() && !BYTE2(v153[1].Teb);
      v39 ^= ((unsigned __int8)v39 ^ (unsigned __int8)(v79 << 7)) & 0x80;
      if ( (*(_DWORD *)(v33 + 8) & 1) == 0 || (v39 & 0x80u) == 0 )
        goto LABEL_152;
      if ( v19 )
        goto LABEL_107;
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v138 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v138
        || (++P->AllocateMisses,
            L = CurrentPrcb->PPLookasideList[8].L,
            ++L->TotalAllocates,
            (v138 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
        || (++L->AllocateMisses,
            (v138 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                              (unsigned int)L->Type,
                              L->Size,
                              L->Tag)) != 0LL) )
      {
        Number = CurrentPrcb->Number;
        v19 = (_SLIST_ENTRY *)v138;
        *(_DWORD *)v138 = Number;
      }
      else
      {
        v19 = 0LL;
      }
      v152 = v19;
      if ( v19 )
        EtwpGetSidExtendedHeaderItem(v19);
      v37 = 0;
      v36 = 0;
      v31 = 0LL;
      v40 = v145;
      if ( v19 )
      {
LABEL_107:
        v39 |= 2u;
        v83 = LOWORD(v19->Next) + (_DWORD)BugCheckParameter3;
        LODWORD(BugCheckParameter3) = v83;
      }
      else
      {
LABEL_152:
        v83 = BugCheckParameter3;
      }
      v84 = *(_DWORD *)(v33 + 8);
      if ( (v84 & 2) != 0 )
      {
        v39 |= 1u;
        v83 += 16;
        LODWORD(BugCheckParameter3) = v83;
      }
      if ( (v84 & 0x80u) != 0 && (v39 & 0x80u) != 0 )
      {
        v39 |= 0x20u;
        v83 += 16;
        LODWORD(BugCheckParameter3) = v83;
      }
      if ( (v84 & 0x100) != 0 )
      {
        v39 |= 0x40u;
        LODWORD(BugCheckParameter3) = v83 + 16;
      }
      if ( (v84 & 4) == 0 || EtwpPagingDisabled )
        goto LABEL_33;
      v107 = *(_QWORD *)(v40 + 368);
      if ( !v107 || (v108 = 1, (*(_DWORD *)(v107 + 72 * v32) & 0x80001000) != 0x80001000) )
        v108 = 0;
      v109 = v140;
      if ( !v108
        || (LOBYTE(v40) = EffectiveIrql < 2u,
            v110 = EtwpApplyStackWalkFilter(*v140, v145, (unsigned int)Size, v40),
            v36 = 0,
            v37 = 0,
            v110) )
      {
        if ( (v23 & 1) == 0 )
        {
          v111 = 256;
          StackLookasideListEntry = (void *)EtwpGetStackLookasideListEntry();
          if ( !StackLookasideListEntry )
          {
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit > 0x1440 )
            {
              v112 = alloca(1552LL);
              StackLookasideListEntry = &v127;
              v111 = 192;
            }
          }
          if ( StackLookasideListEntry )
          {
            v113 = 0LL;
            v114 = 1;
            v115 = *(_QWORD *)(v151 + 24) - *(_QWORD *)&EventTracingProvGuid.Data1;
            if ( !v115 )
              v115 = *(_QWORD *)(v151 + 32) - *(_QWORD *)EventTracingProvGuid.Data4;
            if ( !v115 && *v109 == 18 )
            {
              v39 |= 0x10u;
              v113 = v151 + 64;
              v114 = 0;
            }
            LOBYTE(v126) = v114;
            EtwpGetStackExtendedHeaderItem(v153, a4, v111, &StackLookasideListEntry, v126, v113);
            if ( !StackLookasideListEntry || (v116 = 1, v111 != 256) )
              v116 = 0;
            v23 ^= (v23 ^ (2 * v116)) & 2;
          }
          v23 |= 1u;
          v128 = v23;
          v31 = 0LL;
          v36 = 0;
          v37 = 0;
        }
        v43 = BugCheckParameter3;
        if ( StackLookasideListEntry )
        {
          v39 |= 4u;
          v43 = *(unsigned __int16 *)StackLookasideListEntry + (_DWORD)BugCheckParameter3;
          LODWORD(BugCheckParameter3) = v43;
        }
      }
      else
      {
LABEL_33:
        v43 = BugCheckParameter3;
      }
      v137 = *(unsigned __int16 *)(v33 + 6);
      v150 = &v164[3 * v165];
      for ( j = 0; j < a10; ++j )
      {
        if ( a15 )
          v45 = *(_BYTE *)(16LL * j + v148 + 12);
        else
          v45 = 0;
        if ( v45 )
        {
          if ( v45 == 1 )
          {
            v36 += *(_WORD *)(16LL * j + v148 + 8);
            v132 = ++v37;
          }
        }
        else
        {
          v43 += *(_DWORD *)(16LL * j + v148 + 8);
          LODWORD(BugCheckParameter3) = v43;
        }
      }
      LOWORD(v133) = v36;
      v49 = v150;
      if ( v37 )
      {
        v43 += (v36 + 15) & 0xFFFFFFF8;
        LODWORD(BugCheckParameter3) = v43;
      }
      if ( v136 )
      {
        v43 += (v136 + 15) & 0xFFFFFFF8;
        LODWORD(BugCheckParameter3) = v43;
      }
      *((_DWORD *)v150 + 10) = v43;
      if ( EffectiveIrql >= 2u )
      {
        v52 = v137;
        v54 = v135;
        if ( v137 >= 0x40 )
        {
          LODWORD(v53) = 1;
          v142 = 1LL;
        }
        else
        {
          _mm_lfence();
          v53 = *(_QWORD *)(SiloDriverState + 8LL * v137 + 912);
          v142 = v53;
        }
      }
      else
      {
        v50 = v137;
        v51 = ExAcquireRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8LL * v137 + 400),
                1u);
        v52 = v137;
        if ( v51 )
        {
          if ( v137 >= 0x40 )
          {
            LODWORD(v53) = 1;
            v142 = 1LL;
          }
          else
          {
            _mm_lfence();
            v142 = *(_QWORD *)(SiloDriverState + 8 * v50 + 912);
            LODWORD(v53) = v142;
          }
          v54 = 1;
        }
        else
        {
          v54 = v135;
          LODWORD(v53) = v142;
        }
      }
      if ( (v53 & 1) != 0 )
      {
        v46 = SiloDriverState;
        if ( v54 )
        {
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8LL * v52 + 400),
            1u);
          v52 = v137;
        }
        v19 = (_SLIST_ENTRY *)v138;
        if ( v52 == 3 )
        {
          v117 = -1073741058;
          v30 = 3221225480LL;
          if ( !*(_BYTE *)(v46 + 5025) )
            v117 = -1073741816;
          v139 = v117;
          goto LABEL_42;
        }
        goto LABEL_20;
      }
      v55 = EtwpReserveTraceBuffer(v53, v43, (unsigned int)&v162, (unsigned int)&v161, 0);
      v150 = (_OWORD *)v55;
      if ( !v55 )
        break;
      v56 = v142;
      *(_QWORD *)v49 = v142;
      *((_QWORD *)v49 + 1) = v55;
      v49[1] = v162;
      *((_QWORD *)v49 + 4) = v163;
      ++v165;
      v57 = BugCheckParameter3;
      *(_DWORD *)v55 = BugCheckParameter3 | *(_DWORD *)(v56 + 20);
      *(_WORD *)(v55 + 4) = a6;
      *(_WORD *)(v55 + 6) = a7;
      *(_OWORD *)(v55 + 24) = *(_OWORD *)(v151 + 24);
      *(_OWORD *)(v55 + 40) = *(_OWORD *)v140;
      if ( a8 )
        v58 = *a8;
      else
        v58 = NullGuid;
      *(GUID *)(v55 + 64) = v58;
      *(_QWORD *)(v55 + 16) = v161;
      *(_DWORD *)(v55 + 8) = p_LockNV[396];
      *(_DWORD *)(v55 + 12) = p_LockNV[394];
      *(_DWORD *)(v55 + 56) = p_LockNV[163];
      *(_DWORD *)(v55 + 60) = p_LockNV[183];
      if ( !v39 )
      {
        v59 = HIDWORD(BugCheckParameter3);
        goto LABEL_66;
      }
      if ( (v39 & 8) != 0 )
      {
        v31 = (unsigned __int16 *)(v55 + 80);
        v141 = (unsigned __int16 *)(v55 + 80);
        *(_DWORD *)(v55 + 80) = 65560;
        *(_DWORD *)(v55 + 84) = 0x100000;
        *(_OWORD *)(v55 + 88) = *a9;
        *(_WORD *)(v55 + 4) |= 1u;
        v59 = 104LL;
        HIDWORD(BugCheckParameter3) = 104;
        v144 = (void *)(v55 + 80);
      }
      else
      {
        v59 = HIDWORD(BugCheckParameter3);
      }
      if ( (v39 & 2) != 0 )
      {
        v85 = (unsigned __int16 *)(v55 + (unsigned int)v59);
        memmove(v85, v138, *(unsigned __int16 *)v138);
        *(_WORD *)(v55 + 4) |= 1u;
        v86 = *(unsigned __int16 *)v138;
        v59 = (unsigned int)(v86 + HIDWORD(BugCheckParameter3));
        HIDWORD(BugCheckParameter3) += v86;
        if ( v31 )
          v31[2] |= 1u;
        v31 = v85;
        v141 = v85;
        v144 = v85;
      }
      if ( (v39 & 1) != 0 )
      {
        v106 = (unsigned __int16 *)(v55 + (unsigned int)v59);
        *(_DWORD *)v106 = 196624;
        *((_DWORD *)v106 + 1) = 0x40000;
        *((_DWORD *)v106 + 2) = PsGetCurrentProcessSessionId();
        *(_WORD *)(v55 + 4) |= 1u;
        v59 = (unsigned int)(HIDWORD(BugCheckParameter3) + 16);
        HIDWORD(BugCheckParameter3) += 16;
        if ( v31 )
          v31[2] |= 1u;
        v31 = v106;
        v141 = v106;
        v144 = v106;
      }
      if ( (v39 & 0x20) != 0 )
      {
        v87 = (_DWORD *)(v55 + (unsigned int)v59);
        *v87 = 851984;
        v87[1] = 0x80000;
        ProcessStartKey = EtwpGetProcessStartKey(KeGetCurrentThread()->ApcState.Process);
        *((_QWORD *)v89 + 1) = ProcessStartKey;
        *(_WORD *)(v55 + 4) |= 1u;
        v59 = (unsigned int)(v90 + 16);
        HIDWORD(BugCheckParameter3) = v59;
        if ( v31 )
          v31[2] |= 1u;
        v31 = v89;
        v141 = v89;
        v144 = v89;
      }
      if ( (v39 & 0x40) != 0 )
      {
        v91 = (_DWORD *)(v55 + (unsigned int)v59);
        *v91 = 655376;
        v91[1] = 0x80000;
        if ( (v23 & 4) != 0 )
        {
          v93 = v154;
        }
        else
        {
          EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
          v93 = _InterlockedIncrement64(EtwSupport + 137) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*(unsigned int *)EtwSupport << 48);
          v154 = v93;
          v23 |= 4u;
          v128 = v23;
          if ( v156 )
            *v156 = v93;
        }
        *((_QWORD *)v91 + 1) = v93;
        *(_WORD *)(v55 + 4) |= 1u;
        v59 = (unsigned int)(HIDWORD(BugCheckParameter3) + 16);
        HIDWORD(BugCheckParameter3) += 16;
        if ( v31 )
          v31[2] |= 1u;
        v31 = (unsigned __int16 *)v91;
        v141 = (unsigned __int16 *)v91;
        v144 = v91;
      }
      if ( (v39 & 4) != 0 )
      {
        v122 = (unsigned __int16 *)(v55 + (unsigned int)v59);
        memmove(v122, StackLookasideListEntry, *(unsigned __int16 *)StackLookasideListEntry);
        if ( *((_QWORD *)v122 + 1) && (v39 & 0x10) == 0 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
          v124 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_217;
          KeInitializeApc(
            (__int64)PoolWithTag,
            (__int64)p_LockNV,
            0,
            (__int64)EtwpCrimsonStackWalkApc,
            0LL,
            (__int64)EtwpCrimsonStackWalkApc,
            0,
            v137);
          if ( !(unsigned __int8)KeInsertQueueApc(
                                   (__int64)v124,
                                   *((unsigned int *)v122 + 2),
                                   *((unsigned int *)v122 + 3),
                                   0) )
          {
            ExFreePoolWithTag(v124, 0);
LABEL_217:
            *((_QWORD *)v122 + 1) = 0LL;
          }
        }
        *(_WORD *)(v55 + 4) |= 1u;
        v125 = *(unsigned __int16 *)StackLookasideListEntry;
        v59 = (unsigned int)(v125 + HIDWORD(BugCheckParameter3));
        HIDWORD(BugCheckParameter3) += v125;
        if ( v31 )
          v31[2] |= 1u;
        v31 = v122;
        v141 = v122;
        v144 = v122;
      }
LABEL_66:
      v60 = Src;
      if ( Src )
      {
        v31 = (unsigned __int16 *)(v55 + (unsigned int)v59);
        Size = (size_t)v31;
        v73 = v136;
        v74 = (v136 + 15) & 0xFFF8;
        *v31 = v74;
        *(_DWORD *)(v31 + 1) = 12;
        v31[3] = v73;
        v75 = v74 - v73 - 8;
        v135 = v75;
        v76 = v73;
        memmove(v31 + 4, v60, v73);
        memset((char *)v31 + v76 + 8, 0, v75);
        v77 = v141;
        *(_WORD *)(v55 + 4) |= 1u;
        v78 = *v31;
        v59 = (unsigned int)(v78 + HIDWORD(BugCheckParameter3));
        HIDWORD(BugCheckParameter3) += v78;
        if ( v77 )
          v77[2] |= 1u;
        v57 = BugCheckParameter3;
      }
      v61 = v132;
      if ( v132 )
      {
        v96 = (unsigned __int16 *)(v55 + (unsigned int)v59);
        v97 = (unsigned __int16)v133;
        v98 = (v133 + 15) & 0xFFF8;
        *v96 = v98;
        *(_DWORD *)(v96 + 1) = 11;
        v96[3] = v97;
        v62 = v96 + 4;
        v149 = v96 + 4;
        v155 = (char *)v96 + v97 + 8;
        memset(v155, 0, (unsigned __int16)(v98 - v97 - 8));
        *(_WORD *)(v55 + 4) |= 1u;
        v99 = *v96;
        v59 = (unsigned int)(v99 + HIDWORD(BugCheckParameter3));
        HIDWORD(BugCheckParameter3) += v99;
        v61 = v132;
        if ( v31 )
          v31[2] |= 1u;
      }
      else
      {
        v62 = v149;
      }
      v63 = 0;
      while ( 1 )
      {
        v133 = v63;
        if ( v63 >= a10 )
          break;
        v64 = *(unsigned int *)(v148 + 16LL * v63 + 8);
        LODWORD(Size) = *(_DWORD *)(v148 + 16LL * v63 + 8);
        v65 = *(_QWORD **)(v148 + 16LL * v63);
        if ( a15 )
          v66 = *(_BYTE *)(v148 + 16LL * v63 + 12);
        else
          v66 = 0;
        if ( v66 )
        {
          v72 = v66 - 1;
          if ( v72 )
          {
            if ( v72 == 2 && (_DWORD)v64 == 8 )
              *(_QWORD *)(v55 + 16) = *v65;
          }
          else
          {
            if ( !v62 || (v100 = v64, v101 = (char *)v149, (char *)v149 + v64 > v155) || !v61 )
              KeBugCheckEx(0x11Du, 5uLL, v59, v57, 0LL);
            memmove(v149, *(const void **)(v148 + 16LL * v63), v64);
            v149 = &v101[v100];
            --v132;
          }
        }
        else
        {
          v67 = (void *)(v55 + (unsigned int)v59);
          v144 = v67;
          v68 = (unsigned int)(v64 + v59);
          HIDWORD(BugCheckParameter3) = v68;
          if ( (unsigned int)v68 > v57 )
            KeBugCheckEx(0x11Du, 5uLL, v68, v57, 0LL);
          memmove(v67, v65, v64);
        }
        ++v63;
        v57 = BugCheckParameter3;
        v59 = HIDWORD(BugCheckParameter3);
        v61 = v132;
        v62 = v149;
      }
      if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
        && (*(_DWORD *)(v142 + 12) & 0x80000) != 0 )
      {
        EtwpSendTraceEvent(v142, &v162);
      }
      v69 = v157;
      v19 = (_SLIST_ENTRY *)v138;
      if ( v157 )
      {
        v70 = *v157;
        _bittestandset64(&v70, v137);
        *v69 = v70;
      }
    }
    v118 = v142;
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v142, (unsigned int)BugCheckParameter3);
    v120 = EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT);
    v47 = (__int64)v140;
    if ( v120 )
      EtwpTraceLostEvent(v151 + 24, v140, v118 + 152, ReserveTraceBufferStatus);
    v121 = v139;
    if ( v139 >= 0 )
    {
      if ( (*(_DWORD *)(v118 + 12) & 0x8000000) == 0 )
        v121 = ReserveTraceBufferStatus;
      v139 = v121;
    }
    if ( v54 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8LL * v137 + 400), 1u);
    v19 = (_SLIST_ENTRY *)v138;
  }
  while ( ReserveTraceBufferStatus != -1073741675 );
  v139 = -1073741675;
  v46 = SiloDriverState;
LABEL_43:
  if ( (v23 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)StackLookasideListEntry - 1);
  if ( v139 < 0 )
  {
    EtwpFailLogging(
      *(unsigned __int8 *)(v47 + 4),
      *(_QWORD *)(v47 + 8),
      v151,
      (unsigned int)v164,
      v129,
      v139,
      v47,
      EffectiveIrql < 2u);
  }
  else
  {
    while ( v18 < v165 )
    {
      EtwpReleaseTraceBuffer(&v164[3 * v18 + 1], v30, i);
      if ( EffectiveIrql < 2u )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v46 + 8LL * **v71 + 400), 1u);
      ++v18;
    }
  }
  if ( v134 )
    KeLeaveCriticalRegionThread((__int64)v153);
  if ( v19 )
  {
    v94 = KeGetCurrentPrcb();
    v95 = v94->PPLookasideList[8].P;
    ++v95->TotalFrees;
    if ( LOWORD(v95->ListHead.Alignment) < v95->Depth
      || (++v95->FreeMisses,
          v95 = v94->PPLookasideList[8].L,
          ++v95->TotalFrees,
          LOWORD(v95->ListHead.Alignment) < v95->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v95->ListHead, v19);
    }
    else
    {
      ++v95->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))v95->FreeEx)(v19);
    }
  }
  PspDereferenceMonitorContextServerSilo(v46 - 128);
  return (unsigned int)v139;
}
