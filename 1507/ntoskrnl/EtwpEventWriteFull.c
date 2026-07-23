/*
 * XREFs of EtwpEventWriteFull @ 0x1400182F0
 * Callers:
 *     EtwWriteEx @ 0x140014D70 (EtwWriteEx.c)
 *     EtwWriteKMSecurityEvent @ 0x140164310 (EtwWriteKMSecurityEvent.c)
 *     EtwWriteString @ 0x14025C1D8 (EtwWriteString.c)
 *     EtwpCrimsonStackWalkApc @ 0x14025C418 (EtwpCrimsonStackWalkApc.c)
 *     EtwpDiskProvTraceDisk @ 0x14025D740 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteErrorLogEntry @ 0x14057C26C (EtwWriteErrorLogEntry.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     EtwpReserveTraceBuffer @ 0x140017190 (EtwpReserveTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpFailLogging @ 0x14025C558 (EtwpFailLogging.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14025C7C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceLostEvent @ 0x14025EF08 (EtwpTraceLostEvent.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140260650 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyStackWalkFilter @ 0x1402607C8 (EtwpApplyStackWalkFilter.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140438A58 (EtwpGetSidExtendedHeaderItem.c)
 *     EtwpGetProcessStartKey @ 0x14054D95C (EtwpGetProcessStartKey.c)
 */

__int64 __fastcall EtwpEventWriteFull(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
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
  unsigned int v17; // r14d
  unsigned __int16 v18; // r13
  __int64 v20; // rax
  unsigned __int16 *v21; // rax
  char v22; // di
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // r10
  unsigned __int16 *v28; // r11
  bool v29; // zf
  signed __int64 *v30; // rdx
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  _KPROCESS *Process; // rcx
  int v37; // ebx
  __int64 v38; // r15
  __int64 v39; // rcx
  int v40; // ecx
  char v42; // al
  char v43; // al
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _GENERAL_LOOKASIDE *L; // rsi
  int v47; // eax
  __int64 v48; // rcx
  char v49; // al
  _WORD *v50; // r15
  unsigned int v51; // esi
  PSLIST_ENTRY v52; // rax
  _SLIST_ENTRY *v53; // rax
  __int64 v54; // rcx
  void *v55; // rsp
  __int64 v56; // rdx
  char v57; // r8
  char v58; // al
  unsigned int v59; // r15d
  __int64 v60; // r12
  _OWORD *v61; // r14
  __int64 v62; // rdx
  unsigned __int16 v63; // r14
  int v64; // ebx
  char v65; // al
  char v66; // si
  __int64 v67; // rax
  char v68; // bl
  int v69; // eax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // r12
  __int64 v72; // r14
  unsigned int v73; // ebx
  int v74; // ecx
  __int64 v75; // rcx
  GUID v76; // xmm0
  _QWORD *v77; // r14
  unsigned int v78; // r10d
  void *v79; // rsi
  _DWORD *v80; // rdx
  int SessionId; // eax
  _DWORD *v82; // rdx
  int v83; // r10d
  _DWORD *v84; // rdx
  __int64 ProcessStartKey; // rax
  _QWORD *v86; // rdx
  int v87; // r10d
  volatile signed __int64 *EtwSupport; // rcx
  unsigned __int64 v89; // rdx
  unsigned __int16 *v90; // rsi
  PVOID PoolWithTag; // rbx
  unsigned __int16 *v92; // r13
  void *v93; // rdx
  unsigned __int16 *v94; // r14
  unsigned __int16 v95; // cx
  unsigned __int16 v96; // si
  unsigned __int16 v97; // si
  __int64 v98; // rbx
  int v99; // r11d
  unsigned __int16 *v100; // rbx
  __int64 v101; // rax
  unsigned __int16 v102; // dx
  unsigned int i; // esi
  size_t v104; // rdx
  char *v105; // r13
  size_t v106; // rbx
  void *v107; // rcx
  unsigned int v108; // r10d
  _QWORD *v109; // rdx
  __int64 v110; // rcx
  signed __int64 v111; // rax
  signed __int64 v112; // rtt
  struct _KTHREAD *v113; // rcx
  __int16 v114; // ax
  _SLIST_ENTRY *v115; // rcx
  struct _KPRCB *v116; // rdx
  _GENERAL_LOOKASIDE *v117; // r8
  int BugCheckParameter4; // [rsp+0h] [rbp-640h]
  char v119; // [rsp+30h] [rbp-610h] BYREF
  char v120; // [rsp+640h] [rbp+0h]
  unsigned __int8 CurrentIrql; // [rsp+641h] [rbp+1h]
  unsigned __int8 v122; // [rsp+648h] [rbp+8h]
  ULONG_PTR BugCheckParameter3; // [rsp+650h] [rbp+10h]
  int Size; // [rsp+658h] [rbp+18h]
  int Size_4; // [rsp+65Ch] [rbp+1Ch]
  char v126; // [rsp+660h] [rbp+20h]
  unsigned __int16 v127; // [rsp+664h] [rbp+24h]
  unsigned int v128; // [rsp+668h] [rbp+28h]
  unsigned __int16 v129; // [rsp+66Ch] [rbp+2Ch]
  unsigned __int16 v130; // [rsp+670h] [rbp+30h]
  void *Src; // [rsp+678h] [rbp+38h]
  int v132; // [rsp+680h] [rbp+40h]
  unsigned __int16 *v133; // [rsp+688h] [rbp+48h]
  unsigned __int16 *v134; // [rsp+690h] [rbp+50h]
  __int64 v135; // [rsp+698h] [rbp+58h]
  void *v136; // [rsp+6A0h] [rbp+60h] BYREF
  void *v137; // [rsp+6A8h] [rbp+68h]
  unsigned int v138; // [rsp+6B0h] [rbp+70h]
  _OWORD *v139; // [rsp+6B8h] [rbp+78h]
  _DWORD *v140; // [rsp+6C0h] [rbp+80h]
  __int64 v141; // [rsp+6C8h] [rbp+88h]
  void *v142; // [rsp+6D0h] [rbp+90h]
  __int64 v143; // [rsp+6D8h] [rbp+98h]
  struct _KTHREAD *v144; // [rsp+6E0h] [rbp+A0h]
  unsigned __int64 v145; // [rsp+6E8h] [rbp+A8h]
  __int64 v146; // [rsp+6F0h] [rbp+B0h]
  _QWORD *v147; // [rsp+6F8h] [rbp+B8h]
  unsigned __int64 *v148; // [rsp+700h] [rbp+C0h]
  char *v149; // [rsp+708h] [rbp+C8h]
  __int64 v150; // [rsp+710h] [rbp+D0h] BYREF
  __int64 v151; // [rsp+718h] [rbp+D8h] BYREF
  __int64 v152; // [rsp+720h] [rbp+E0h] BYREF
  void *v153; // [rsp+728h] [rbp+E8h]
  __int64 v154; // [rsp+730h] [rbp+F0h] BYREF
  __int128 v155; // [rsp+738h] [rbp+F8h] BYREF
  __int64 v156; // [rsp+748h] [rbp+108h]
  _OWORD v157[24]; // [rsp+750h] [rbp+110h] BYREF
  unsigned int v158; // [rsp+8D0h] [rbp+290h]
  _DWORD *v160; // [rsp+998h] [rbp+358h]

  v141 = a1;
  v122 = a2;
  v133 = a5;
  v146 = a11;
  v147 = a13;
  v148 = a17;
  v17 = 0;
  v132 = 0;
  Src = 0LL;
  v140 = 0LL;
  v136 = 0LL;
  v145 = 0LL;
  v18 = 0;
  v130 = 0;
  if ( a10 > 0x80 )
    return 3221225485LL;
  v20 = v141;
  if ( a14 )
    v20 = a14;
  v143 = v20;
  if ( a16 )
  {
    v18 = *a16;
    v130 = *a16;
  }
  v21 = 0LL;
  if ( v18 )
    v21 = a16;
  v153 = v21;
  v22 = 0;
  v120 = 0;
  v158 = 0;
  if ( v148 && *v148 )
  {
    v145 = *v148;
    v22 = 4;
    v120 = 4;
  }
  CurrentThread = KeGetCurrentThread();
  v144 = CurrentThread;
  v24 = a12;
  if ( !a12 )
    v24 = (__int64)CurrentThread;
  v160 = (_DWORD *)v24;
  v126 = 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled(CurrentThread, a14) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
    {
      --v144->KernelApcDisable;
      v126 = 1;
    }
  }
  else
  {
    CurrentIrql = 15;
  }
  LOBYTE(v25) = ~(_BYTE)v25;
  v122 &= v25;
  while ( 1 )
  {
    v29 = !_BitScanForward((unsigned int *)&v30, v122);
    v128 = (unsigned int)v30;
    if ( v29 )
      break;
    v135 = 1LL;
    v26 = 80LL;
    BugCheckParameter3 = 0x5000000050LL;
    v134 = 0LL;
    v137 = 0LL;
    LOBYTE(v127) = 0;
    v129 = 0;
    Size_4 = 0;
    v142 = 0LL;
    v149 = 0LL;
    v122 &= v122 - 1;
    v31 = (unsigned int)v30;
    v32 = 32LL * (unsigned int)v30 + v143 + 112;
    if ( v147 )
    {
      v33 = *v147;
      if ( _bittest64(&v33, *(unsigned __int8 *)(v32 + 6)) )
        continue;
    }
    v34 = *((_QWORD *)v28 + 1);
    if ( *(_DWORD *)v32 )
    {
      v35 = *(_BYTE *)(v32 + 4);
      if ( *((_BYTE *)v28 + 4) <= v35 || !v35 )
      {
        if ( (v25 = *(unsigned int *)(v32 + 8), (v25 & 0x40) != 0) && !v34
          || (v34 & *(_QWORD *)(v32 + 16)) != 0 && (v34 & *(_QWORD *)(v32 + 24)) == *(_QWORD *)(v32 + 24) )
        {
          if ( (Process = KeGetCurrentThread()->ApcState.Process, (a4 & 2) == 0)
            && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x400) == 0
            || (v25 & 0x200) == 0 )
          {
            v37 = 0;
            Size = 0;
            v38 = v143;
            v39 = *(_QWORD *)(v143 + 368);
            if ( !v39 )
              goto LABEL_41;
            v40 = *(_DWORD *)(v39 + 72 * v31);
            if ( (v40 & 0x80000200) != 0x80000200 && (v40 & 0x80000100) != 0x80000100 )
              goto LABEL_41;
            v42 = EtwpApplyEventIdPayloadFilter(v143, v128, 0, (_DWORD)v28, *v28, a10, v146, 0, CurrentIrql);
            v27 = Src;
            v28 = v133;
            if ( v42 )
            {
              v26 = (unsigned int)BugCheckParameter3;
LABEL_41:
              if ( a9 )
              {
                v26 = 104LL;
                LODWORD(BugCheckParameter3) = 104;
                v37 = 8;
                Size = 8;
              }
              if ( (*(_DWORD *)(v32 + 8) & 0xFFFFFF9F) == 0 )
                goto LABEL_97;
              if ( EtwpPagingDisabled
                || (a4 & 1) != 0
                || !(unsigned int)MmCanThreadFault()
                || (v43 = 1, BYTE2(v144[1].Teb)) )
              {
                v43 = 0;
              }
              v37 ^= ((unsigned __int8)v37 ^ (unsigned __int8)(v43 << 7)) & 0x80;
              Size = v37;
              if ( (*(_DWORD *)(v32 + 8) & 1) != 0 && (v37 & 0x80u) != 0 )
              {
                if ( v27 )
                  goto LABEL_60;
                CurrentPrcb = KeGetCurrentPrcb();
                P = CurrentPrcb->PPLookasideList[8].P;
                ++P->TotalAllocates;
                v27 = RtlpInterlockedPopEntrySList(&P->ListHead);
                Src = v27;
                if ( !v27 )
                {
                  ++P->AllocateMisses;
                  L = CurrentPrcb->PPLookasideList[8].L;
                  ++L->TotalAllocates;
                  v27 = RtlpInterlockedPopEntrySList(&L->ListHead);
                  Src = v27;
                  if ( !v27 )
                  {
                    ++L->AllocateMisses;
                    v27 = (_DWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                                      (unsigned int)L->Type,
                                      L->Size,
                                      L->Tag);
                    Src = v27;
                  }
                }
                if ( v27 )
                  *v27 = CurrentPrcb->Number;
                v140 = v27;
                if ( v27 )
                {
                  EtwpGetSidExtendedHeaderItem(v27);
                  v27 = Src;
                }
                v26 = (unsigned int)BugCheckParameter3;
                if ( v27 )
                {
LABEL_60:
                  v37 |= 2u;
                  Size = v37;
                  v26 = *(unsigned __int16 *)v27 + (unsigned int)v26;
                  LODWORD(BugCheckParameter3) = v26;
                }
              }
              v47 = *(_DWORD *)(v32 + 8);
              if ( (v47 & 2) != 0 )
              {
                v37 |= 1u;
                Size = v37;
                v26 = (unsigned int)(v26 + 16);
                LODWORD(BugCheckParameter3) = v26;
              }
              if ( (v47 & 0x80u) != 0 && (v37 & 0x80u) != 0 )
              {
                v37 |= 0x20u;
                Size = v37;
                v26 = (unsigned int)(v26 + 16);
                LODWORD(BugCheckParameter3) = v26;
              }
              if ( (v47 & 0x100) != 0 )
              {
                v37 |= 0x40u;
                Size = v37;
                v26 = (unsigned int)(v26 + 16);
                LODWORD(BugCheckParameter3) = v26;
              }
              if ( (v47 & 4) == 0 || EtwpPagingDisabled )
                goto LABEL_97;
              v48 = *(_QWORD *)(v38 + 368);
              if ( !v48 || (v49 = 1, (*(_DWORD *)(v48 + 72 * v31) & 0x80001000) != 0x80001000) )
                v49 = 0;
              v50 = v133;
              if ( !v49
                || (LOBYTE(v26) = CurrentIrql < 2u, (unsigned __int8)EtwpApplyStackWalkFilter(*v133, v143, v128, v26)) )
              {
                if ( (v22 & 1) == 0 )
                {
                  v51 = 256;
                  v52 = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
                  if ( v52 )
                    v53 = v52 + 1;
                  else
                    v53 = 0LL;
                  v136 = v53;
                  if ( !v53 )
                  {
                    if ( (unsigned __int8)RtlpGetStackLimits(&v151, &v150) )
                    {
                      v54 = v151;
                    }
                    else
                    {
                      v54 = 0LL;
                      v151 = 0LL;
                      v150 = 0LL;
                    }
                    if ( (unsigned __int64)&v150 - v54 > 0x1440 )
                    {
                      v55 = alloca(1552LL);
                      v136 = &v119;
                      v51 = 192;
                    }
                  }
                  if ( v136 )
                  {
                    v56 = 0LL;
                    v57 = 1;
                    if ( *(_QWORD *)(v141 + 24) == *(_QWORD *)&EventTracingProvGuid.Data1
                      && *(_QWORD *)(v141 + 32) == *(_QWORD *)EventTracingProvGuid.Data4
                      && *v50 == 18 )
                    {
                      v37 |= 0x10u;
                      Size = v37;
                      v56 = v141 + 64;
                      v57 = 0;
                    }
                    LOBYTE(BugCheckParameter4) = v57;
                    EtwpGetStackExtendedHeaderItem(v144, a4, v51, &v136, BugCheckParameter4, v56);
                    if ( !v136 || (v58 = 1, v51 != 256) )
                      v58 = 0;
                    v22 ^= (v22 ^ (2 * v58)) & 2;
                  }
                  v22 |= 1u;
                  v120 = v22;
                }
                v59 = BugCheckParameter3;
                if ( v136 )
                {
                  v37 |= 4u;
                  Size = v37;
                  v59 = *(unsigned __int16 *)v136 + (_DWORD)BugCheckParameter3;
                  LODWORD(BugCheckParameter3) = v59;
                }
              }
              else
              {
LABEL_97:
                v59 = BugCheckParameter3;
              }
              v60 = *(unsigned __int16 *)(v32 + 6);
              v138 = *(unsigned __int16 *)(v32 + 6);
              v61 = &v157[3 * v158];
              v139 = v61;
              if ( a10 )
              {
                v62 = v146 + 8;
                v25 = a10;
                v63 = v129;
                v64 = Size_4;
                do
                {
                  if ( a15 )
                    v65 = *(_BYTE *)(v62 + 4);
                  else
                    v65 = 0;
                  if ( v65 )
                  {
                    if ( v65 == 1 )
                    {
                      v63 += *(_WORD *)v62;
                      v129 = v63;
                      Size_4 = ++v64;
                    }
                  }
                  else
                  {
                    v59 += *(_DWORD *)v62;
                  }
                  v62 += 16LL;
                  --v25;
                }
                while ( v25 );
                LODWORD(BugCheckParameter3) = v59;
                v37 = Size;
                v61 = v139;
              }
              if ( Size_4 )
              {
                v59 += (v129 + 15) & 0xFFFFFFF8;
                LODWORD(BugCheckParameter3) = v59;
              }
              if ( v130 )
              {
                v59 += (v130 + 15) & 0xFFFFFFF8;
                LODWORD(BugCheckParameter3) = v59;
              }
              *((_DWORD *)v61 + 10) = v59;
              if ( CurrentIrql >= 2u )
              {
                v66 = v127;
                if ( (unsigned int)v60 >= 0x40 )
                {
                  v67 = 1LL;
                  v135 = 1LL;
                }
                else
                {
                  _mm_lfence();
                  v67 = WmipLoggerContext[v60];
                  v135 = v67;
                }
              }
              else
              {
                if ( ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v60], 1u) )
                {
                  if ( (unsigned int)v60 >= 0x40 )
                  {
                    v135 = 1LL;
                  }
                  else
                  {
                    _mm_lfence();
                    v135 = WmipLoggerContext[v60];
                  }
                  v66 = 1;
                }
                else
                {
                  v66 = v127;
                }
                v67 = v135;
              }
              if ( (v67 & 1) != 0 )
              {
                if ( v66 )
                  ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v60], 1u);
                v17 = 0;
                v27 = Src;
                if ( (_DWORD)v60 == 3 )
                {
                  PsGetMonitorContextServerSilo(EtwSiloMonitor, -1LL, &v152);
                  v68 = *(_BYTE *)(v152 + 425);
                  PspDereferenceMonitorContextServerSilo(v152 - 96);
                  v69 = -1073741058;
                  if ( !v68 )
                    v69 = -1073741816;
                  v132 = v69;
                  break;
                }
LABEL_19:
                v28 = v133;
              }
              else
              {
                v70 = EtwpReserveTraceBuffer((unsigned int *)v67, v59, (__int64)&v155, &v154, 0);
                v71 = v70;
                v139 = (_OWORD *)v70;
                if ( !v70 )
                {
                  v72 = v135;
                  if ( v59 <= 0xFFF8 )
                  {
                    v73 = -1073741801;
                    if ( v59 > *(_DWORD *)(v135 + 8) )
                      v73 = -2147483643;
                  }
                  else
                  {
                    v73 = -1073741675;
                  }
                  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
                    EtwpTraceLostEvent(v141 + 24, v133, v72 + 152, v73);
                  v74 = v132;
                  if ( v132 >= 0 )
                  {
                    if ( (*(_DWORD *)(v72 + 12) & 0x8000000) == 0 )
                      v74 = v73;
                    v132 = v74;
                  }
                  if ( v66 )
                    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v138], 1u);
                  v17 = 0;
                  v27 = Src;
                  if ( v73 == -1073741675 )
                  {
                    v132 = -1073741675;
                    break;
                  }
                  goto LABEL_19;
                }
                v75 = v135;
                *(_QWORD *)v61 = v135;
                *((_QWORD *)v61 + 1) = v70;
                v61[1] = v155;
                *((_QWORD *)v61 + 4) = v156;
                ++v158;
                *(_DWORD *)v70 = v59 | *(_DWORD *)(v75 + 20);
                *(_WORD *)(v70 + 4) = a6;
                *(_WORD *)(v70 + 6) = a7;
                *(_OWORD *)(v70 + 24) = *(_OWORD *)(v141 + 24);
                *(_OWORD *)(v70 + 40) = *(_OWORD *)v133;
                if ( a8 )
                  v76 = *a8;
                else
                  v76 = NullGuid;
                *(GUID *)(v70 + 64) = v76;
                *(_QWORD *)(v70 + 16) = v154;
                *(_DWORD *)(v70 + 8) = v160[396];
                *(_DWORD *)(v70 + 12) = v160[394];
                *(_DWORD *)(v70 + 56) = v160[163];
                *(_DWORD *)(v70 + 60) = v160[183];
                if ( !v37 )
                {
                  v78 = HIDWORD(BugCheckParameter3);
LABEL_184:
                  v92 = v134;
                  goto LABEL_185;
                }
                if ( (v37 & 8) != 0 )
                {
                  v77 = (_QWORD *)(v70 + 80);
                  v134 = (unsigned __int16 *)(v70 + 80);
                  *(_DWORD *)(v70 + 80) = 65560;
                  *(_DWORD *)(v70 + 84) = 0x100000;
                  *(_OWORD *)(v70 + 88) = *a9;
                  *(_WORD *)(v70 + 4) |= 1u;
                  v78 = 104;
                  HIDWORD(BugCheckParameter3) = 104;
                  v137 = (void *)(v70 + 80);
                }
                else
                {
                  v77 = v134;
                  v78 = HIDWORD(BugCheckParameter3);
                }
                if ( (v37 & 2) != 0 )
                {
                  v79 = (void *)(v70 + v78);
                  memmove(v79, Src, *(unsigned __int16 *)Src);
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 = *(unsigned __int16 *)Src + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v78;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v79;
                  v134 = (unsigned __int16 *)v79;
                  v137 = v79;
                }
                if ( (v37 & 1) != 0 )
                {
                  v80 = (_DWORD *)(v71 + v78);
                  *v80 = 196624;
                  v80[1] = 0x40000;
                  SessionId = MmGetSessionId(KeGetCurrentThread()->ApcState.Process);
                  v82[2] = SessionId;
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 = v83 + 16;
                  HIDWORD(BugCheckParameter3) = v78;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v82;
                  v134 = (unsigned __int16 *)v82;
                  v137 = v82;
                }
                if ( (v37 & 0x20) != 0 )
                {
                  v84 = (_DWORD *)(v71 + v78);
                  *v84 = 851984;
                  v84[1] = 0x80000;
                  ProcessStartKey = EtwpGetProcessStartKey(KeGetCurrentThread()->ApcState.Process);
                  v86[1] = ProcessStartKey;
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 = v87 + 16;
                  HIDWORD(BugCheckParameter3) = v78;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = v86;
                  v134 = (unsigned __int16 *)v86;
                  v137 = v86;
                }
                if ( (v37 & 0x40) != 0 )
                {
                  v25 = v71 + v78;
                  *(_DWORD *)v25 = 655376;
                  *(_DWORD *)(v25 + 4) = 0x80000;
                  if ( (v22 & 4) != 0 )
                  {
                    v89 = v145;
                  }
                  else
                  {
                    EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
                    v89 = _InterlockedIncrement64(EtwSupport + 137) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*(unsigned int *)EtwSupport << 48);
                    v145 = v89;
                    v22 |= 4u;
                    v120 = v22;
                    if ( v148 )
                      *v148 = v89;
                  }
                  *(_QWORD *)(v25 + 8) = v89;
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 += 16;
                  HIDWORD(BugCheckParameter3) = v78;
                  if ( v77 )
                    *((_WORD *)v77 + 2) |= 1u;
                  v77 = (_QWORD *)v25;
                  v134 = (unsigned __int16 *)v25;
                  v137 = (void *)v25;
                }
                if ( (v37 & 4) == 0 )
                  goto LABEL_184;
                v90 = (unsigned __int16 *)(v71 + v78);
                memmove(v90, v136, *(unsigned __int16 *)v136);
                if ( *((_QWORD *)v90 + 1) && (v37 & 0x10) == 0 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x41777445u);
                  if ( !PoolWithTag )
                    goto LABEL_179;
                  KeInitializeApc(
                    (_DWORD)PoolWithTag,
                    (_DWORD)v160,
                    0,
                    (unsigned int)EtwpCrimsonStackWalkApc,
                    0LL,
                    (__int64)EtwpCrimsonStackWalkApc,
                    0,
                    v138);
                  if ( !KeInsertQueueApc(
                          (__int64)PoolWithTag,
                          *((unsigned int *)v90 + 2),
                          *((unsigned int *)v90 + 3),
                          0) )
                  {
                    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_179:
                    *((_QWORD *)v90 + 1) = 0LL;
                  }
                }
                *(_WORD *)(v71 + 4) |= 1u;
                v78 = *(unsigned __int16 *)v136 + HIDWORD(BugCheckParameter3);
                HIDWORD(BugCheckParameter3) = v78;
                if ( v77 )
                  *((_WORD *)v77 + 2) |= 1u;
                v92 = v90;
                v137 = v90;
LABEL_185:
                v93 = v153;
                if ( v153 )
                {
                  v94 = (unsigned __int16 *)(v71 + v78);
                  v134 = v94;
                  v95 = v130;
                  v96 = (v130 + 15) & 0xFFF8;
                  *v94 = v96;
                  *(_DWORD *)(v94 + 1) = 12;
                  v94[3] = v95;
                  v97 = v96 - v95 - 8;
                  v127 = v97;
                  v98 = v95;
                  memmove(v94 + 4, v93, v95);
                  memset((char *)v94 + v98 + 8, 0, v97);
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 = *v94 + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v78;
                  if ( v92 )
                    v92[2] |= 1u;
                  v92 = v94;
                  v59 = BugCheckParameter3;
                }
                v99 = Size_4;
                v17 = 0;
                if ( Size_4 )
                {
                  v100 = (unsigned __int16 *)(v71 + v78);
                  v101 = v129;
                  v102 = (v129 + 15) & 0xFFF8;
                  *v100 = v102;
                  *(_DWORD *)(v100 + 1) = 11;
                  v100[3] = v101;
                  v142 = v100 + 4;
                  v149 = (char *)v100 + v101 + 8;
                  memset(v149, 0, (unsigned __int16)(v102 - v101 - 8));
                  *(_WORD *)(v71 + 4) |= 1u;
                  v78 = *v100 + HIDWORD(BugCheckParameter3);
                  HIDWORD(BugCheckParameter3) = v78;
                  v99 = Size_4;
                  if ( v92 )
                    v92[2] |= 1u;
                }
                for ( i = 0; ; ++i )
                {
                  v128 = i;
                  if ( i >= a10 )
                    break;
                  v104 = *(unsigned int *)(v146 + 16LL * i + 8);
                  Size = *(_DWORD *)(v146 + 16LL * i + 8);
                  v26 = *(_QWORD *)(v146 + 16LL * i);
                  if ( a15 )
                    v25 = *(unsigned __int8 *)(v146 + 16LL * i + 12);
                  else
                    LOBYTE(v25) = 0;
                  if ( (_BYTE)v25 )
                  {
                    if ( (unsigned __int8)v25 == 1 )
                    {
                      v105 = (char *)v142;
                      if ( !v142 || (v106 = v104, (char *)v142 + v104 > v149) || !v99 )
                        KeBugCheckEx(0x11Du, 5uLL, v78, v59, 0LL);
                      memmove(v142, *(const void **)(v146 + 16LL * i), v104);
                      v142 = &v105[v106];
                      v99 = --Size_4;
                    }
                    else if ( (unsigned __int8)v25 == 3 )
                    {
                      if ( (_DWORD)v104 == 8 )
                        *(_QWORD *)(v71 + 16) = *(_QWORD *)v26;
                      v99 = Size_4;
                    }
                  }
                  else
                  {
                    v107 = (void *)(v71 + v78);
                    v137 = v107;
                    v108 = v104 + v78;
                    HIDWORD(BugCheckParameter3) = v108;
                    if ( v108 > v59 )
                      KeBugCheckEx(0x11Du, 5uLL, v108, v59, 0LL);
                    memmove(v107, (const void *)v26, v104);
                    v99 = Size_4;
                  }
                  v59 = BugCheckParameter3;
                  v78 = HIDWORD(BugCheckParameter3);
                }
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v135 + 12) & 0x80000) != 0 )
                {
                  EtwpSendTraceEvent(v135, &v155);
                }
                v109 = v147;
                v27 = Src;
                v28 = v133;
                if ( v147 )
                {
                  v110 = *v147;
                  _bittestandset64(&v110, v138);
                  *v109 = v110;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v22 & 2) != 0 )
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)v136 - 1);
  if ( v132 < 0 )
  {
    EtwpFailLogging(
      *((unsigned __int8 *)v133 + 4),
      *((_QWORD *)v133 + 1),
      v141,
      (unsigned int)v157,
      v122,
      v132,
      (__int64)v133,
      CurrentIrql < 2u);
  }
  else
  {
    v128 = 0;
    if ( v158 )
    {
      do
      {
        v26 = (__int64)&v157[3 * v17];
        v25 = *(_QWORD *)(v26 + 16);
        v30 = *(signed __int64 **)(v26 + 24);
        _m_prefetchw(v30);
        v111 = *v30;
        if ( (*v30 ^ v25) >= 0xF )
        {
LABEL_226:
          _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
        }
        else
        {
          while ( 1 )
          {
            v112 = v111;
            v111 = _InterlockedCompareExchange64(v30, v111 + 1, v111);
            if ( v112 == v111 )
              break;
            if ( (v111 ^ v25) >= 0xF )
              goto LABEL_226;
          }
        }
        if ( CurrentIrql < 2u )
          ExReleaseRundownProtectionCacheAwareEx(
            (PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[**(unsigned int **)v26],
            1u);
        v17 = v128 + 1;
        v128 = v17;
      }
      while ( v17 < v158 );
    }
  }
  if ( v126 )
  {
    v113 = v144;
    v114 = v144->KernelApcDisable + 1;
    v144->KernelApcDisable = v114;
    if ( !v114
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v113->ApcState.ApcListHead[0].Flink != &v113->152
      && !v113->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v113, v30, v25);
    }
  }
  v115 = (_SLIST_ENTRY *)Src;
  if ( Src )
  {
    v116 = KeGetCurrentPrcb();
    v117 = v116->PPLookasideList[8].P;
    ++v117->TotalFrees;
    if ( LOWORD(v117->ListHead.Alignment) < v117->Depth
      || (++v117->FreeMisses,
          v117 = v116->PPLookasideList[8].L,
          ++v117->TotalFrees,
          LOWORD(v117->ListHead.Alignment) < v117->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v117->ListHead, v115);
    }
    else
    {
      ++v117->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *, struct _KPRCB *, _GENERAL_LOOKASIDE *, __int64))v117->FreeEx)(
        v115,
        v116,
        v117,
        v26);
    }
  }
  return (unsigned int)v132;
}
