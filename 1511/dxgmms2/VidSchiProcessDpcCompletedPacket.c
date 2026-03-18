/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0008E10
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0007B10 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0020DEC (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C0004080 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000C8B0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E330 (VidSchiCompleteRewindPacket.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0011664 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00132F0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C00141A8 (VidSchiCheckYieldExitCondition.c)
 *     VidSchiStartNodeYield @ 0x1C0014268 (VidSchiStartNodeYield.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0014678 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0014A70 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0016730 (VidMmFreeDeferredDmaBufferMapping.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_ppxx @ 0x1C001D63C (Template_ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C001ECDC (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EEE4 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C001F14C (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     RtlULongLongMult @ 0x1C001F6B0 (RtlULongLongMult.c)
 *     Template_pqxq @ 0x1C0020638 (Template_pqxq.c)
 *     Template_px @ 0x1C0020A14 (Template_px.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // rdi
  struct _VIDSCH_DMA_PACKET *v2; // r14
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rsi
  int v6; // ebx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // r8
  LARGE_INTEGER v10; // r9
  __int64 v11; // rbx
  LARGE_INTEGER v12; // r15
  __int64 v13; // rax
  _LARGE_INTEGER v14; // rsi
  __int64 v15; // rdi
  ULONGLONG *v16; // rbx
  ULONGLONG v17; // r9
  unsigned __int64 v18; // r9
  ULONGLONG v19; // rdx
  ULONGLONG v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  LARGE_INTEGER *v24; // rax
  __int64 v25; // rcx
  struct _VIDSCH_CONTEXT *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r14
  LARGE_INTEGER v31; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r10
  ULONGLONG v34; // rsi
  int v35; // eax
  signed __int64 v36; // rbx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // r9
  __int64 v40; // rbx
  _QWORD *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // r8d
  __int64 i; // r9
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rax
  bool v54; // zf
  int v55; // eax
  __int64 v56; // rdi
  unsigned int j; // ebx
  struct _VIDSCH_HISTORY_BUFFER_DATA *v58; // rdx
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  _QWORD *v61; // rdi
  _QWORD *v62; // r10
  _QWORD *v63; // rbx
  _QWORD *v64; // r10
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // r8
  _QWORD *v68; // rax
  __int64 v69; // r11
  _QWORD *v70; // r12
  _QWORD *v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r10
  unsigned int v74; // ecx
  __int64 v75; // r9
  __int64 v76; // rdx
  _QWORD *v77; // rsi
  _QWORD *k; // r14
  _QWORD *v79; // rbx
  _QWORD *v80; // rdi
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rdi
  _QWORD *v85; // rsi
  _QWORD *v86; // r10
  __int64 *v87; // rbx
  __int64 v88; // rcx
  __int64 **v89; // rax
  struct VIDMM_ALLOC *v90; // r10
  __int64 v91; // r11
  __int64 v92; // rax
  __int64 **v93; // rcx
  __int64 v94; // rcx
  _QWORD *v95; // rax
  __int64 v96; // r9
  _QWORD *v97; // rcx
  int v98; // r9d
  __int64 v99; // rdx
  int v100; // eax
  int v101; // ecx
  struct _KEVENT *v102; // rdi
  KIRQL v103; // si
  struct _KEVENT *v104; // rbx
  int Flink; // ecx
  struct _KEVENT *v106; // rdi
  KIRQL v107; // si
  struct _KEVENT *v108; // rbx
  int v109; // ecx
  struct _KEVENT *v110; // rdi
  KIRQL v111; // si
  struct _KEVENT *v112; // rbx
  int v113; // ecx
  struct _KEVENT *v114; // rcx
  struct _KEVENT *v115; // rdi
  KIRQL v116; // si
  struct _KEVENT *v117; // rbx
  int v118; // ecx
  struct _VIDSCH_QUEUE_PACKET *v119; // rax
  __int64 v120; // rdx
  _QWORD *v121; // rax
  void *v122; // rcx
  signed __int64 v123; // [rsp+40h] [rbp-C0h]
  __int64 v124; // [rsp+48h] [rbp-B8h]
  struct _VIDSCH_GLOBAL *v125; // [rsp+50h] [rbp-B0h]
  _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-A8h] BYREF
  ULONGLONG v127; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER v128; // [rsp+68h] [rbp-98h] BYREF
  ULONGLONG pullResult; // [rsp+78h] [rbp-88h] BYREF
  VIDMM_GLOBAL *v130; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v131; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+A0h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+B8h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+E8h] [rbp-18h] BYREF
  struct _KLOCK_QUEUE_HANDLE v136; // [rsp+100h] [rbp+0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v137; // [rsp+118h] [rbp+18h] BYREF
  char v139; // [rsp+188h] [rbp+88h]
  char v140; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v141; // [rsp+198h] [rbp+98h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v139 = 0;
  v123 = v1;
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v124 = v4;
  v5 = *(_QWORD *)(v3 + 24);
  v125 = (struct _VIDSCH_GLOBAL *)v5;
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v141 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v141 = 0;
    v6 = 13;
  }
  v54 = *((_QWORD *)v2 + 7) == 0LL;
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = v6;
  if ( !v54 )
  {
    *(_QWORD *)(*((_QWORD *)v2 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v2 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1824), &LockHandle);
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v11 = *(unsigned int *)(v3 + 1512);
  v12 = v7;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v11 + 1520), 0LL, v1) )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            0LL,
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v10.QuadPart);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = v4;
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)(v3 + 184) = v1;
  *(_DWORD *)(v3 + 1512) = ((_BYTE)v11 + 1) & 0xF;
  if ( (*((_DWORD *)v2 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 932));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 908));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2720));
  v14 = PerformanceFrequency;
  v15 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 396)];
  if ( (_DWORD)v15 )
  {
    v16 = (ULONGLONG *)(v3 + 1848 + 8 * v15);
    do
    {
      if ( *(v16 - 8) )
      {
        v17 = v12.QuadPart + *v16 - *(v16 - 4);
        *(v16 - 4) = 0LL;
        *v16 = v17;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          if ( RtlULongLongMult(v17, 0x989680uLL, &pullResult) >= 0 )
          {
            v19 = pullResult % v14.QuadPart;
            v20 = pullResult / v14.QuadPart;
          }
          else
          {
            v19 = 10000000 * (v18 % v14.QuadPart) % v14.QuadPart;
            v20 = 10000000 * (v18 / v14.QuadPart) + 10000000 * (v18 % v14.QuadPart) / v14.QuadPart;
          }
          Template_pqxq(
            *(unsigned __int16 *)(v3 + 4),
            v19,
            v20,
            *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL),
            v15,
            v20,
            *(_WORD *)(v3 + 4));
        }
      }
      --v16;
      LODWORD(v15) = v15 - 1;
    }
    while ( (_DWORD)v15 );
    v2 = a1;
  }
  v21 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1512) + 1520);
  if ( v21 )
  {
    v22 = gulPriorityToYieldPriorityBand[*(unsigned int *)(v21 + 396)];
    v23 = v22;
    if ( (_DWORD)v22 )
    {
      v24 = (LARGE_INTEGER *)(v3 + 1816 + 8 * v22);
      do
      {
        if ( v24[-4].QuadPart )
          *v24 = v12;
        --v24;
        --v23;
      }
      while ( v23 );
    }
  }
  if ( *(int *)(v3 + 2704) > 0 )
  {
    v25 = *((_QWORD *)v125 + 45);
    _bittestandset64(&v25, *(unsigned __int16 *)(v3 + 4));
    *((_QWORD *)v125 + 45) = v25;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v123 + 764), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v123 + 176) &= ~2u;
    if ( (*(_DWORD *)(v123 + 176) & 8) != 0 )
    {
      *(_DWORD *)(v123 + 176) &= ~8u;
      VidSchiCompleteRewindPacket(v123, 1LL);
    }
    if ( v4 == *((_QWORD *)v125 + 23) )
    {
      VidSchiUpdateContextStatus(v123, 0LL, 8916LL);
    }
    else if ( (*(_DWORD *)(v123 + 176) & 2) == 0 )
    {
      v26 = *(struct _VIDSCH_CONTEXT **)(v123 + 496);
      if ( v26 )
      {
        VidSchiDecrementContextReference(v26);
        *(_QWORD *)(v123 + 496) = 0LL;
      }
      *(_QWORD *)(v123 + 496) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v123 + 396) + 1656);
    v27 = *(unsigned int *)(v123 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v27 + 1656) )
      *(_DWORD *)(v3 + 1652) &= ~(1 << v27);
    if ( *(_QWORD *)(v123 + 504) )
    {
      v28 = *(_QWORD *)(v123 + 104);
      v29 = *(_QWORD *)(*(_QWORD *)(v123 + 96) + 24LL);
      v30 = *(_QWORD *)(v28 + 40);
      v31 = KeQueryPerformanceCounter(&v128);
      if ( RtlULongLongMult(v31.QuadPart - *(_QWORD *)(v123 + 504), 0x989680uLL, &v127) >= 0 )
        v34 = v127 / v32;
      else
        v34 = 10000000 * (v33 / v32) + 10000000 * (v33 % v32) / v32;
      if ( v34 < *(_QWORD *)(v29 + 2288)
        || (_InterlockedIncrement((volatile signed __int32 *)(v30 + 2656)), v34 < *(_QWORD *)(v29 + 2272))
        || *(_BYTE *)(*(_QWORD *)(v28 + 40) + 2624LL)
        || (v35 = *(_DWORD *)(v28 + 48), (v35 & 8) != 0)
        || (v35 & 1) != 0
        || (unsigned __int8)VidSchIsTDRPending(v29)
        || *(_BYTE *)(v28 + 172)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 168), 0, 0) )
      {
        v36 = v123;
      }
      else
      {
        v36 = v123;
        if ( (*(_DWORD *)(v29 + 2096) & 0x8000) != 0 )
        {
          KeSetTimer((PKTIMER)(v123 + 512), (LARGE_INTEGER)-*(_QWORD *)(v29 + 2280), (PKDPC)(v123 + 576));
          VidSchiUpdateContextStatus(v123, 7LL, 21806LL);
          if ( bTracingEnabled )
          {
            v39 = *(_QWORD *)(v123 + 56);
            if ( !v39 || (*(_DWORD *)(v123 + 112) & 0x40) != 0 )
              LODWORD(v39) = v123;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            {
              Template_ppxx(
                v37,
                (unsigned int)&EventDelayContextScheduling,
                v38,
                v39,
                *(_QWORD *)(v30 + 2632),
                v34,
                *(_QWORD *)(v29 + 2280));
              v2 = a1;
              *(_QWORD *)(v123 + 504) = 0LL;
              goto LABEL_60;
            }
          }
        }
      }
      v2 = a1;
      *(_QWORD *)(v36 + 504) = 0LL;
    }
  }
LABEL_60:
  if ( *(_BYTE *)(v3 + 1896) )
  {
    if ( *(_QWORD *)(v3 + 1880) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v3,
        (LARGE_INTEGER)v12.QuadPart,
        &v140);
    }
    else if ( (~((1 << (*((_BYTE *)v125 + 160) + 1)) - 1) & *(_DWORD *)(v3 + 1652)) == 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        (LARGE_INTEGER)v12.QuadPart,
        (_LARGE_INTEGER)PerformanceFrequency.QuadPart);
    }
  }
  _m_prefetchw((const void *)(v3 + 88));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 88),
            *((_QWORD *)v2 + 13),
            *(_QWORD *)(v3 + 88)) != *((_QWORD *)v2 + 13) )
    ;
  v40 = *((_QWORD *)v2 + 7);
  if ( v40 )
  {
    v41 = *(_QWORD **)(v40 + 80);
    v42 = v41[13];
    v43 = *(_QWORD *)(v41[12] + 24LL);
    v44 = v41[19];
    if ( v44 && *(_QWORD *)(v40 + 96) <= v44 )
    {
      if ( !*(_BYTE *)(v42 + 172)
        && !_InterlockedCompareExchange((volatile signed __int32 *)(v42 + 168), 0, 0)
        && (*(_BYTE *)(v43 + 2468) & 1) == 0 )
      {
        v121 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v121[3] = 281LL;
        v121[4] = 1792LL;
        v121[5] = *(_QWORD *)(v40 + 96);
        v121[6] = v41[19];
        v121[7] = 0LL;
        WdLogEvent5_WdCriticalError(v121);
        VidMmFreeDeferredDmaBufferMapping(v122);
        JUMPOUT(0x1C0009CAALL);
      }
      v45 = WdLogNewEntry5_WdEvent(v42, v43);
      *(_QWORD *)(v45 + 24) = *(_QWORD *)(v40 + 96);
      WdLogEvent5_WdEvent(v45);
    }
    else
    {
      if ( *(_BYTE *)(v42 + 172)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 168), 0, 0)
        || (*(_BYTE *)(v43 + 2468) & 1) != 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v43);
        v46[3] = v40;
        v46[4] = *(_QWORD *)(v40 + 96);
      }
      else
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v42, v43);
        v46[3] = v40;
        v46[4] = *(_QWORD *)(v40 + 96);
        v46[5] = v41[19];
      }
      WdLogEvent5_WdEvent(v46);
      *(_QWORD *)(*(_QWORD *)(v40 + 80) + 152LL) = *(_QWORD *)(v40 + 96);
      v47 = *(_QWORD *)(v40 + 80);
      if ( *(_DWORD *)(*(_QWORD *)(v47 + 104) + 1132LL) )
        VidSchUnwaitFlipQueue(v47);
    }
    *((_DWORD *)v2 + 23) |= 0x80u;
    v139 = 1;
  }
  v48 = *((_QWORD *)v2 + 8);
  if ( (*((_DWORD *)v2 + 23) & 2) != 0 )
  {
    v49 = 0;
    for ( i = *(_QWORD *)(v48 + 104); v49 < *(_DWORD *)(v48 + 144); ++v49 )
    {
      v51 = *(_QWORD *)(i + 8LL * v49);
      if ( v51 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 156), 0xFFFFFFFF);
    }
    v52 = *(_QWORD *)(v48 + 64);
    if ( v52 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 156), 0xFFFFFFFF);
    ++*(_DWORD *)(v48 + 20);
  }
  if ( (*((_DWORD *)v2 + 23) & 1) != 0 )
  {
    v53 = *((_QWORD *)v2 + 7);
    if ( v53 && *(_DWORD *)(v53 + 48) == 8 )
    {
      v54 = _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 32), 0xFFFFFFFF) == 1;
    }
    else
    {
      v55 = *(_DWORD *)(v48 + 32);
      if ( v55 > 0 )
        *(_DWORD *)(v48 + 32) = v55 - 1;
      v54 = *(_DWORD *)(v48 + 32) == 0;
    }
    if ( v54 )
      *(_BYTE *)(v48 + 24) = 0;
  }
  v56 = *((_QWORD *)v2 + 7);
  if ( v56 && *(_QWORD *)(v56 + 248) )
  {
    for ( j = 0; j < *(_DWORD *)(v56 + 600); ++j )
    {
      v58 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v56 + 248) + 16LL * j);
      if ( *(_QWORD *)v58 )
        VidSchiProcessHistoryBuffer(v2, v58);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v56);
  }
  VidSchiUnwaitMonitoredFences(*(_QWORD *)(v4 + 32), v48);
  v59 = *(_QWORD **)(v4 + 32);
  v130 = *(VIDMM_GLOBAL **)(v59[1] + 432LL);
  KeAcquireInStackQueuedSpinLock(v59 + 232, &v136);
  v61 = v59 + 236;
  v62 = (_QWORD *)v59[236];
  if ( v62 != v59 + 236 )
  {
    do
    {
      v63 = (_QWORD *)*v62;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v60, v62 - 25) )
      {
        v65 = *v64;
        v66 = (_QWORD *)v64[1];
        if ( *(_QWORD **)(*v64 + 8LL) != v64 || (_QWORD *)*v66 != v64 )
          __fastfail(3u);
        *v66 = v65;
        *(_QWORD *)(v65 + 8) = v66;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v64 - 24), (struct VIDMM_ALLOC *)(v64 - 25));
      }
      v62 = v63;
    }
    while ( v63 != v61 );
  }
  KeReleaseInStackQueuedSpinLock(&v136);
  v68 = (_QWORD *)(v4 + 1168);
  v69 = v4;
  v70 = *(_QWORD **)(v4 + 1168);
  if ( v70 == v68 )
    goto LABEL_160;
  while ( 1 )
  {
    v71 = v70;
    v72 = 2LL;
    v70 = (_QWORD *)*v70;
    v73 = v71[2];
    if ( v73 > *(_QWORD *)(v69 + 1160) )
      break;
LABEL_121:
    v77 = (_QWORD *)v71[11];
    for ( k = v71 + 11; v77 != k; v72 = 2LL )
    {
      v79 = v77 - 27;
      v77 = (_QWORD *)*v77;
      v80 = v79 + 27;
      v81 = v79[27];
      v82 = (_QWORD *)v79[28];
      if ( *(_QWORD **)(v81 + 8) != v79 + 27 || (_QWORD *)*v82 != v80 )
        __fastfail(3u);
      *v82 = v81;
      *(_QWORD *)(v81 + 8) = v82;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v79[12] + 8LL), 0xFFFFFFFF) == 1 )
      {
        v83 = v79[12];
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v83 + 4), 2, 1) == 1
          && bTracingEnabled
          && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          Template_p(v83, &EventCompleteOfferAllocation, v67, v79);
        }
      }
      *v80 = 0LL;
      v79[28] = 0LL;
    }
    v84 = (_QWORD *)v71[9];
    v85 = v71 + 9;
    while ( v84 != v85 )
    {
      v86 = v84 - 25;
      v84 = (_QWORD *)*v84;
      v87 = v86 + 25;
      v88 = v86[25];
      v89 = (__int64 **)v86[26];
      if ( *(_QWORD **)(v88 + 8) != v86 + 25 || *v89 != v87 )
        __fastfail(3u);
      *v89 = (__int64 *)v88;
      *(_QWORD *)(v88 + 8) = v89;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v88, v86) )
      {
        VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v130, v90);
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v91 + 32) + 1856LL), &v131);
        v92 = *(_QWORD *)(v124 + 32) + 1888LL;
        v93 = *(__int64 ***)(*(_QWORD *)(v124 + 32) + 1896LL);
        *v87 = v92;
        v87[1] = (__int64)v93;
        if ( *v93 != (__int64 *)v92 )
          __fastfail(3u);
        *v93 = v87;
        *(_QWORD *)(v92 + 8) = v87;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v131);
      }
    }
    if ( (_QWORD *)*v85 == v85 && (_QWORD *)*k == k )
    {
      v94 = *v71;
      v95 = (_QWORD *)v71[1];
      if ( *(_QWORD **)(*v71 + 8LL) != v71 || (_QWORD *)*v95 != v71 )
        __fastfail(3u);
      v54 = bTracingEnabled == 0;
      *v95 = v94;
      *(_QWORD *)(v94 + 8) = v95;
      if ( !v54 )
      {
        v96 = *(_QWORD *)(v124 + 8);
        if ( !v96 )
          v96 = v124;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_px(v94, v72, v67, v96, v71[2]);
      }
      v97 = (_QWORD *)v71[3];
      if ( v97 != v71 + 4 && v97 )
        ExFreePoolWithTag(v97, 0);
      ExFreePoolWithTag(v71, 0);
    }
    v69 = v124;
    if ( v70 == (_QWORD *)(v124 + 1168) )
      goto LABEL_159;
  }
  v67 = *((unsigned int *)v71 + 16);
  v74 = 0;
  if ( !(_DWORD)v67 )
  {
LABEL_120:
    *(_QWORD *)(v69 + 1160) = v73;
    goto LABEL_121;
  }
  v75 = v71[3];
  while ( 1 )
  {
    v76 = *(_QWORD *)(v75 + 16LL * v74);
    if ( v76 )
    {
      if ( *(_QWORD *)(v76 + 152) < *(_QWORD *)(v75 + 16LL * v74 + 8) )
        break;
    }
    if ( ++v74 >= (unsigned int)v67 )
    {
      v72 = 2LL;
      goto LABEL_120;
    }
  }
LABEL_159:
  v2 = a1;
LABEL_160:
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)v2 + 6), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v99 = v141;
  if ( v141 )
  {
    v100 = *(_DWORD *)(v124 + 192);
    if ( (v100 & 4) != 0 )
    {
      *(_DWORD *)(v3 + 1904) = 1;
      VidSchiMarkDeviceAsError(v124, v99);
      v101 = 13;
    }
    else
    {
      if ( (v100 & 8) != 0 )
        *(_DWORD *)(v3 + 1900) = 1;
      VidSchiMarkDeviceAsError(v124, v99);
      v101 = 13;
    }
  }
  else
  {
    v101 = 9;
  }
  VidSchiProfilePerformanceTick(v101, (_DWORD)v125, v3, v98, 0LL, 0LL, (__int64)v2, 0LL);
  v102 = (struct _KEVENT *)(v123 + 368);
  v103 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v125 + 230, &v132);
  v104 = *(struct _KEVENT **)(v123 + 368);
  if ( *(struct _KEVENT **)&v102->Header.Lock != v102 )
  {
    while ( 2 )
    {
      if ( LODWORD(v104->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v104[1].Header.Lock + 4LL * LODWORD(v104[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v104[1].Header.Lock + 212LL) )
          goto LABEL_176;
      }
      else if ( ((__int64)v104[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        Flink = (int)v104[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v104[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
        {
LABEL_176:
          v104 = *(struct _KEVENT **)&v104->Header.Lock;
          if ( v104 == v102 )
            goto LABEL_177;
          continue;
        }
      }
      break;
    }
    ++v104[5].Header.LockNV;
    KeSetEvent(v104 + 4, 0, 0);
    goto LABEL_176;
  }
LABEL_177:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
  KeLowerIrql(v103);
  v106 = (struct _KEVENT *)(v3 + 368);
  v107 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v125 + 230, &v133);
  v108 = *(struct _KEVENT **)(v3 + 368);
  if ( *(struct _KEVENT **)&v106->Header.Lock != v106 )
  {
    while ( 2 )
    {
      if ( LODWORD(v108->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v108[1].Header.Lock + 4LL * LODWORD(v108[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v108[1].Header.Lock + 212LL) )
          goto LABEL_184;
      }
      else if ( ((__int64)v108[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v109 = (int)v108[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v108[5].Header.WaitListHead.Blink) = v109;
        if ( v109 )
        {
LABEL_184:
          v108 = *(struct _KEVENT **)&v108->Header.Lock;
          if ( v108 == v106 )
            goto LABEL_185;
          continue;
        }
      }
      break;
    }
    ++v108[5].Header.LockNV;
    KeSetEvent(v108 + 4, 0, 0);
    goto LABEL_184;
  }
LABEL_185:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v133);
  KeLowerIrql(v107);
  v110 = (struct _KEVENT *)((char *)v125 + 1752);
  v111 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v125 + 230, &v135);
  v112 = (struct _KEVENT *)*((_QWORD *)v125 + 219);
  if ( *(struct _KEVENT **)&v110->Header.Lock != v110 )
  {
    while ( 2 )
    {
      if ( LODWORD(v112->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v112[1].Header.Lock + 4LL * LODWORD(v112[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v112[1].Header.Lock + 212LL) )
          goto LABEL_192;
      }
      else if ( ((__int64)v112[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v113 = (int)v112[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v112[5].Header.WaitListHead.Blink) = v113;
        if ( v113 )
        {
LABEL_192:
          v112 = *(struct _KEVENT **)&v112->Header.Lock;
          if ( v112 == v110 )
            goto LABEL_193;
          continue;
        }
      }
      break;
    }
    ++v112[5].Header.LockNV;
    KeSetEvent(v112 + 4, 0, 0);
    goto LABEL_192;
  }
LABEL_193:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
  KeLowerIrql(v111);
  *(_QWORD *)(v123 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v123 + 312), 0, 0);
  *(_QWORD *)(v3 + 232) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 200), 0, 0);
  *((_QWORD *)v125 + 195) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)((char *)v125 + 1528), 0, 0);
  *((_QWORD *)v125 + 167) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)((char *)v125 + 1304), 0, 0);
  v114 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v114 )
    KeSetEvent(v114, 0, 0);
  v115 = (struct _KEVENT *)((char *)v125 + 1800);
  v116 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v125 + 230, &v137);
  v117 = (struct _KEVENT *)*((_QWORD *)v125 + 225);
  if ( *(struct _KEVENT **)&v115->Header.Lock != v115 )
  {
    while ( 2 )
    {
      if ( LODWORD(v117->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v117[1].Header.Lock + 4LL * LODWORD(v117[1].Header.WaitListHead.Blink) + 1000) >= *(_DWORD *)(*(_QWORD *)&v117[1].Header.Lock + 212LL) )
          goto LABEL_202;
      }
      else if ( ((__int64)v117[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        v118 = (int)v117[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v117[5].Header.WaitListHead.Blink) = v118;
        if ( v118 )
        {
LABEL_202:
          v117 = *(struct _KEVENT **)&v117->Header.Lock;
          if ( v117 == v115 )
            goto LABEL_203;
          continue;
        }
      }
      break;
    }
    ++v117[5].Header.LockNV;
    KeSetEvent(v117 + 4, 0, 0);
    goto LABEL_202;
  }
LABEL_203:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v137);
  KeLowerIrql(v116);
  if ( v139 )
  {
    v119 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
    do
      v119 = VidSchiProcessCompletedQueuePacketInternal(v119);
    while ( v119 );
  }
  v120 = *((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v120 )
  {
    if ( (*((_DWORD *)a1 + 23) & 0x10) != 0 )
      VidSchiQueueDeferredVisibilityWorkItem(
        *((struct _VIDSCH_PRESENT_INFO **)v125 + *(unsigned int *)(v120 + 144) + 324),
        v125);
  }
}
