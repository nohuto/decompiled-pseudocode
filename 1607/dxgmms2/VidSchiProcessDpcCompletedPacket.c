/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C0007F30
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006880 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0024584 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0001090 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0001200 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchUnwaitFlipQueue @ 0x1C0005650 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B590 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D28C (VidSchiCompleteRewindPacket.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA88 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0010EBC (VidSchiCheckYieldExitCondition.c)
 *     VidSchiStartNodeYield @ 0x1C0011BA8 (VidSchiStartNodeYield.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0011E8C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001DFC8 (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_ppxx @ 0x1C001E9B0 (Template_ppxx.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0020AB8 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002153C (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002199C (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     Template_pqxq @ 0x1C0023684 (Template_pqxq.c)
 *     Template_px @ 0x1C0023A60 (Template_px.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // r14
  struct _VIDSCH_DMA_PACKET *v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // r13
  __int64 v5; // r15
  int v6; // ebx
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER v8; // rax
  LARGE_INTEGER v9; // rdx
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // r8
  __int64 QuadPart; // r9
  __int64 v13; // rbx
  union _LARGE_INTEGER v14; // r13
  __int64 v15; // r12
  LARGE_INTEGER *v16; // rbx
  LONGLONG v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _VIDSCH_CONTEXT *v20; // rcx
  __int64 v21; // rax
  LONGLONG *v22; // rdx
  struct VIDMM_ALLOC *v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r12
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // rcx
  _QWORD **v35; // rbx
  _QWORD *v36; // r9
  _QWORD *v37; // r8
  _QWORD *v38; // r12
  __int64 v39; // rax
  char v40; // r12
  int v41; // r9d
  int v42; // ecx
  struct _KEVENT **v43; // r13
  KSPIN_LOCK *v44; // rbx
  struct _KEVENT *v45; // r13
  struct _KEVENT *v46; // r13
  struct _KEVENT *v47; // rcx
  struct _KEVENT *v48; // rsi
  KIRQL v49; // r14
  struct _KEVENT *v50; // rbx
  struct _VIDSCH_QUEUE_PACKET *v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // rax
  bool v54; // bl
  __int64 v55; // r12
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 *v59; // rax
  int v60; // eax
  __int64 v61; // r12
  unsigned int i; // ebx
  __int64 v63; // r12
  _QWORD *v64; // r11
  _QWORD *v65; // r13
  __int64 v66; // r9
  unsigned int v67; // ecx
  __int64 v68; // r10
  __int64 v69; // rdx
  _QWORD *v70; // rax
  _QWORD *v71; // rcx
  _QWORD *v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rcx
  signed __int16 v75; // ax
  _QWORD *v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  bool v80; // zf
  _QWORD *v81; // rcx
  struct _KEVENT *v82; // rbx
  __int64 v83; // r12
  __int64 v84; // r13
  LARGE_INTEGER v85; // rcx
  unsigned __int128 v86; // rax
  unsigned __int64 v87; // rbx
  unsigned __int64 *v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r9
  _QWORD *v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // rcx
  struct VIDMM_ALLOC *v94; // r9
  __int64 v95; // r11
  char v96; // al
  struct _KEVENT *v97; // rbx
  __int64 v98; // rax
  unsigned __int128 v99; // rax
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // r8
  unsigned __int128 v102; // rtt
  int v103; // eax
  int v104; // ecx
  __int64 v105; // r9
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rbx
  _QWORD *v109; // rax
  unsigned int j; // r12d
  struct _VIDSCH_HISTORY_BUFFER_DATA *v111; // rdx
  _QWORD *v112; // r12
  _QWORD *v113; // r9
  __int64 v114; // rcx
  _QWORD *v115; // rax
  __int64 v116; // rdx
  _QWORD *v117; // r8
  _QWORD *v118; // r9
  LARGE_INTEGER *v119; // rax
  int v120; // eax
  int Flink; // ecx
  struct _KEVENT *v122; // rbx
  int v123; // ecx
  int v124; // ecx
  int v125; // ecx
  _QWORD *v126; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER v127; // [rsp+48h] [rbp-B8h]
  _QWORD *v128; // [rsp+48h] [rbp-B8h]
  int v129; // [rsp+50h] [rbp-B0h]
  _QWORD *v130; // [rsp+58h] [rbp-A8h]
  _QWORD *v131; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER v132; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER *v134; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v135; // [rsp+78h] [rbp-88h]
  __int64 v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+A8h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v143; // [rsp+108h] [rbp+8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+120h] [rbp+20h] BYREF
  KIRQL v146; // [rsp+190h] [rbp+90h]
  KIRQL v147; // [rsp+190h] [rbp+90h]
  KIRQL v148; // [rsp+190h] [rbp+90h]
  __int64 v149; // [rsp+190h] [rbp+90h]
  __int64 v150; // [rsp+190h] [rbp+90h]
  char v151; // [rsp+198h] [rbp+98h]
  char v152; // [rsp+1A0h] [rbp+A0h]
  bool v153; // [rsp+1A8h] [rbp+A8h]

  v1 = *((_QWORD *)a1 + 6);
  v2 = a1;
  v151 = 0;
  v153 = 0;
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD **)(v1 + 104);
  v126 = v4;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v129 = 9;
    v6 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v129 = 0;
    v6 = 13;
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = v6;
  if ( *((_QWORD *)v2 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v2 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)v2 + 7) + 52LL) = v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1856), &LockHandle);
  v134 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  v7 = v134;
  memset(v134, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v7->LowPart = 4;
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7[1] = v8;
  QuadPart = v8.QuadPart;
  v13 = *(unsigned int *)(v3 + 1552);
  v127 = v8;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v13 + 1560), 0LL, v1) )
  {
    v98 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v10.QuadPart,
            (LARGE_INTEGER)v9.QuadPart);
    *(_QWORD *)(v98 + 24) = v5;
    *(_QWORD *)(v98 + 32) = v4;
    WdLogEvent5_WdAssertion(v98);
    QuadPart = v127.QuadPart;
  }
  *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v13 + 1) & 0xF;
  if ( (*((_DWORD *)v2 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 968));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 944));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2760));
  v14 = PerformanceFrequency;
  v15 = (int)gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 396)];
  if ( (_DWORD)v15 )
  {
    v16 = (LARGE_INTEGER *)(v3 + 1888 + 8 * v15);
    do
    {
      if ( v16[-8].QuadPart )
      {
        v11.QuadPart = QuadPart + v16->QuadPart - v16[-4].QuadPart;
        v16[-4].QuadPart = 0LL;
        *v16 = v11;
        LODWORD(v17) = Microsoft_Windows_DxgKrnlEnableBits;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v99 = (unsigned __int64)v11.QuadPart * (unsigned __int128)0x989680uLL;
          v136 = *((_QWORD *)&v99 + 1);
          if ( is_mul_ok(v11.QuadPart, 0x989680uLL) )
          {
            v102 = v99;
            v100 = v99 % (unsigned __int64)v14.QuadPart;
            v101 = v102 / (unsigned __int64)v14.QuadPart;
          }
          else
          {
            v17 = v11.QuadPart / (unsigned __int64)v14.QuadPart;
            v100 = 10000000 * (v11.QuadPart % (unsigned __int64)v14.QuadPart) % v14.QuadPart;
            v101 = 10000000 * (v11.QuadPart % (unsigned __int64)v14.QuadPart) / v14.QuadPart
                 + 10000000 * (v11.QuadPart / (unsigned __int64)v14.QuadPart);
          }
          Template_pqxq(v17, v100, v101, *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL), v15, v101, *(_WORD *)(v3 + 4));
          QuadPart = v127.QuadPart;
        }
      }
      --v16;
      LODWORD(v15) = v15 - 1;
    }
    while ( (_DWORD)v15 );
    v2 = a1;
  }
  v18 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v18 )
  {
    v57 = *(unsigned int *)(v18 + 396);
    v58 = (int)gulPriorityToYieldPriorityBand[v57];
    if ( gulPriorityToYieldPriorityBand[v57] )
    {
      v59 = (__int64 *)(v3 + 1856 + 8 * v58);
      do
      {
        if ( *(v59 - 4) )
          *v59 = QuadPart;
        --v59;
        --v58;
      }
      while ( v58 );
    }
  }
  if ( *(int *)(v3 + 2744) > 0 )
  {
    v19 = *(_QWORD *)(v5 + 392);
    _bittestandset64(&v19, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 392) = v19;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 176) &= ~2u;
    if ( (*(_DWORD *)(v1 + 176) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~8u;
      v153 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiCompleteRewindPacket)(
                             v1,
                             1LL,
                             (LARGE_INTEGER)v11.QuadPart,
                             QuadPart) != 0;
    }
    if ( v126 == *(_QWORD **)(v5 + 200) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 9751LL);
    }
    else if ( (*(_DWORD *)(v1 + 176) & 2) == 0 )
    {
      v20 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
      if ( v20 )
      {
        VidSchiDecrementContextReference(v20, 1);
        *(_QWORD *)(v1 + 496) = 0LL;
      }
      *(_QWORD *)(v1 + 496) = 0LL;
    }
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1696);
    v21 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v21 + 1696) )
      *(_DWORD *)(v3 + 1692) &= ~(1 << v21);
    if ( *(_QWORD *)(v1 + 504) )
    {
      v83 = *(_QWORD *)(v1 + 104);
      v84 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v149 = *(_QWORD *)(v83 + 40);
      v85 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(&v132) - *(_QWORD *)(v1 + 504));
      v86 = (unsigned __int64)v85.QuadPart * (unsigned __int128)0x989680uLL;
      v137 = *((_QWORD *)&v86 + 1);
      if ( is_mul_ok(v85.QuadPart, 0x989680uLL) )
        v87 = v86 / (unsigned __int64)v132.QuadPart;
      else
        v87 = 10000000 * (v85.QuadPart / (unsigned __int64)v132.QuadPart)
            + 10000000 * (v85.QuadPart % (unsigned __int64)v132.QuadPart) / v132.QuadPart;
      v11.QuadPart = 8LL;
      v88 = (unsigned __int64 *)(v84 + 2648);
      v89 = 8LL;
      while ( v87 <= *v88 )
      {
        v11.QuadPart = v11.LowPart - 1;
        --v88;
        if ( --v89 < 0 )
          goto LABEL_135;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v149 + 8LL * (int)v11.LowPart + 2664));
LABEL_135:
      if ( v87 >= *(_QWORD *)(v84 + 2576) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v149 + 2656));
        if ( v87 >= *(_QWORD *)(v84 + 2560) && !*(_BYTE *)(*(_QWORD *)(v83 + 40) + 2624LL) )
        {
          v103 = *(_DWORD *)(v83 + 48);
          if ( (v103 & 8) == 0
            && (v103 & 1) == 0
            && !(unsigned __int8)VidSchIsTDRPending(v84)
            && !*(_BYTE *)(v83 + 164)
            && !_InterlockedCompareExchange((volatile signed __int32 *)(v83 + 160), 0, 0)
            && (*(_DWORD *)(v84 + 2136) & 0x2000) != 0 )
          {
            KeSetTimer((PKTIMER)(v1 + 512), (LARGE_INTEGER)-*(_QWORD *)(v84 + 2568), (PKDPC)(v1 + 576));
            VidSchiUpdateContextStatus(v1, 7LL, 23351LL);
            if ( bTracingEnabled )
            {
              v105 = *(_QWORD *)(v1 + 56);
              if ( !v105 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
                LODWORD(v105) = v1;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_ppxx(
                  v104,
                  (unsigned int)&EventDelayContextScheduling,
                  v11.LowPart,
                  v105,
                  *(_QWORD *)(v149 + 2632),
                  v87,
                  *(_QWORD *)(v84 + 2568));
            }
          }
        }
      }
      *(_QWORD *)(v1 + 504) = 0LL;
    }
    QuadPart = v127.QuadPart;
  }
  if ( *(_BYTE *)(v3 + 1936) )
  {
    if ( *(_QWORD *)(v3 + 1920) )
    {
      VidSchiCheckYieldExitCondition((struct _VIDSCH_NODE *)v3);
      v96 = v153;
      if ( v152 )
        v96 = 1;
      v153 = v96;
    }
    else if ( (~((1 << (*(_BYTE *)(v5 + 168) + 1)) - 1) & *(_DWORD *)(v3 + 1692)) == 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v3,
        QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart);
      v153 = 1;
    }
  }
  v22 = (LONGLONG *)v134;
  v134[2] = *(LARGE_INTEGER *)((char *)v2 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  do
    v23 = (struct VIDMM_ALLOC *)*((_QWORD *)v2 + 13);
  while ( (struct VIDMM_ALLOC *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(v3 + 96),
                                  (signed __int64)v23,
                                  *(_QWORD *)(v3 + 96)) != v23 );
  v24 = *((_QWORD *)v2 + 7);
  if ( v24 )
  {
    v22[3] = *(_QWORD *)(v24 + 104);
    v25 = *(_QWORD **)(v24 + 88);
    v26 = v25[13];
    v27 = *(_QWORD *)(v25[12] + 24LL);
    v28 = v25[19];
    if ( v28 && *(_QWORD *)(v24 + 104) <= v28 )
    {
      if ( !*(_BYTE *)(v26 + 164) )
      {
        v22 = 0LL;
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v26 + 160), 0, 0)
          && (*(_BYTE *)(v27 + 2828) & 1) == 0 )
        {
          v106 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(
                             v26,
                             0LL,
                             (LARGE_INTEGER)v11.QuadPart,
                             QuadPart);
          v106[3] = 281LL;
          v106[4] = 1792LL;
          v106[5] = *(_QWORD *)(v24 + 104);
          v106[6] = v25[19];
          v106[7] = 0LL;
          WdLogEvent5_WdCriticalError(v106);
          JUMPOUT(0x1C0018413LL);
        }
      }
      v107 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
               v26,
               v22,
               (LARGE_INTEGER)v11.QuadPart,
               QuadPart);
      *(_QWORD *)(v107 + 24) = *(_QWORD *)(v24 + 104);
      WdLogEvent5_WdEvent(v107);
    }
    else
    {
      if ( *(_BYTE *)(v26 + 164)
        || (v22 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 160), 0, 0))
        || (*(_BYTE *)(v27 + 2828) & 1) != 0 )
      {
        v29 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
                          v26,
                          v22,
                          (LARGE_INTEGER)v11.QuadPart,
                          QuadPart);
        v29[3] = v24;
        v29[4] = *(_QWORD *)(v24 + 104);
      }
      else
      {
        v29 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdEvent)(
                          v26,
                          0LL,
                          (LARGE_INTEGER)v11.QuadPart,
                          QuadPart);
        v29[3] = v24;
        v29[4] = *(_QWORD *)(v24 + 104);
        v29[5] = v25[19];
      }
      WdLogEvent5_WdEvent(v29);
      *(_QWORD *)(*(_QWORD *)(v24 + 88) + 152LL) = *(_QWORD *)(v24 + 104);
      v22 = *(LONGLONG **)(*(_QWORD *)(v24 + 88) + 104LL);
      if ( *((_DWORD *)v22 + 282) )
        VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v27, (__int64)v22, v11.QuadPart, QuadPart);
    }
    *((_DWORD *)v2 + 23) |= 0x80u;
    v151 = 1;
  }
  v30 = *((_QWORD *)v2 + 8);
  if ( (*((_DWORD *)v2 + 23) & 2) != 0 )
  {
    v61 = *(_QWORD *)(v30 + 104);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdTrace)(
                    v23,
                    v22,
                    (LARGE_INTEGER)v11.QuadPart,
                    QuadPart)
                + 24) = v30;
    for ( i = 0; i < *(_DWORD *)(v30 + 144); ++i )
    {
      v23 = *(struct VIDMM_ALLOC **)(v61 + 8LL * i);
      if ( v23 )
        VIDMM_GLOBAL::RemoveDMAReferences(v23, 1);
    }
    v63 = *(_QWORD *)(v30 + 64);
    if ( v63 )
    {
      if ( *(int *)(v63 + 172) < 1 )
      {
        v108 = *(int *)(v63 + 172);
        v109 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(
                           v23,
                           v22,
                           (LARGE_INTEGER)v11.QuadPart,
                           QuadPart);
        v109[7] = 0LL;
        v109[3] = 270LL;
        v109[4] = 41LL;
        v109[5] = v63;
        v109[6] = v108;
        WdLogEvent5_WdCriticalError(v109);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v63 + 172), 0xFFFFFFFF);
    }
    ++*(_DWORD *)(v30 + 20);
  }
  if ( (*((_DWORD *)v2 + 23) & 1) != 0 )
  {
    v53 = *((_QWORD *)v2 + 7);
    v54 = v53 && *(_DWORD *)(v53 + 48) == 8;
    v55 = *(_QWORD *)(v30 + 136);
    if ( g_IsInternalReleaseOrDbg )
    {
      v56 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdTrace)(
              v23,
              v22,
              (LARGE_INTEGER)v11.QuadPart,
              QuadPart);
      *(_QWORD *)(v56 + 24) = v30;
      *(_QWORD *)(v56 + 32) = *(_QWORD *)(v55 + 16);
    }
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 32), 0xFFFFFFFF) == 1 )
        *(_BYTE *)(v30 + 24) = 0;
    }
    else
    {
      v60 = *(_DWORD *)(v30 + 32);
      if ( v60 > 0 )
        *(_DWORD *)(v30 + 32) = v60 - 1;
      if ( !*(_DWORD *)(v30 + 32) )
        *(_BYTE *)(v30 + 24) = 0;
    }
  }
  v31 = *((_QWORD *)v2 + 7);
  if ( v31 && *(_QWORD *)(v31 + 256) )
  {
    for ( j = 0; j < *(_DWORD *)(v31 + 608); ++j )
    {
      v111 = (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v31 + 256) + 16LL * j);
      if ( *(_QWORD *)v111 )
        VidSchiProcessHistoryBuffer(v2, v111);
    }
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v31);
  }
  v32 = (__int64)v126;
  VidSchiUnwaitMonitoredFences(v126[4]);
  v33 = v126[4];
  v135 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v33 + 8) + 408LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v33 + 1888), &v138);
  v35 = (_QWORD **)(v33 + 1920);
  v36 = *v35;
  if ( *v35 != v35 )
  {
    do
    {
      v112 = (_QWORD *)*v36;
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v34, (__int64)(v36 - 27)) )
      {
        v114 = *v113;
        v115 = (_QWORD *)v113[1];
        if ( *(_QWORD **)(*v113 + 8LL) != v113 || (_QWORD *)*v115 != v113 )
          __fastfail(3u);
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v113 - 26), (struct VIDMM_ALLOC *)(v113 - 27));
      }
      v36 = v112;
    }
    while ( v112 != v35 );
  }
  KeReleaseInStackQueuedSpinLock(&v138);
  v38 = (_QWORD *)v126[145];
  if ( v38 == v126 + 145 )
    goto LABEL_49;
  while ( 1 )
  {
    v64 = v126;
    v65 = v38;
    v38 = (_QWORD *)*v38;
    v66 = v65[2];
    if ( v66 > v126[144] )
      break;
LABEL_104:
    v70 = (_QWORD *)v65[11];
    v71 = v65 + 11;
    if ( v70 != v65 + 11 )
    {
      do
      {
        v72 = v70 - 29;
        v130 = (_QWORD *)*v70;
        v37 = (_QWORD *)*v70;
        v73 = (_QWORD *)v70[1];
        v128 = v70 - 29;
        if ( *(_QWORD **)(*v70 + 8LL) != v70 || (_QWORD *)*v73 != v70 )
          __fastfail(3u);
        *v73 = v37;
        v37[1] = v73;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72[12] + 8LL), 0xFFFFFFFF) == 1 )
        {
          v74 = v72[12];
          v75 = _InterlockedCompareExchange16((volatile signed __int16 *)(v74 + 4), 2, 1);
          if ( bTracingEnabled )
          {
            if ( v75 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              Template_p(v74, &EventCompleteOfferAllocation);
              v72 = v128;
            }
          }
        }
        v71 = v65 + 11;
        v72[29] = 0LL;
        v72[30] = 0LL;
        v70 = v130;
      }
      while ( v130 != v65 + 11 );
      v64 = v126;
    }
    v76 = (_QWORD *)v65[9];
    v77 = v65 + 9;
    if ( v76 != v65 + 9 )
    {
      do
      {
        v90 = (__int64)(v76 - 27);
        v91 = v76;
        v131 = (_QWORD *)*v76;
        v92 = *v76;
        v93 = *(_QWORD **)(v90 + 224);
        v150 = v90;
        if ( *(_QWORD *)(v92 + 8) != v90 + 216 || (_QWORD *)*v93 != v91 )
          __fastfail(3u);
        *v93 = v92;
        *(_QWORD *)(v92 + 8) = v93;
        if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v93, v90) )
        {
          VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v135, v94);
        }
        else
        {
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v95 + 32) + 1888LL), &v139);
          v116 = v126[4] + 1920LL;
          v117 = *(_QWORD **)(v126[4] + 1928LL);
          if ( *v117 != v116 )
            __fastfail(3u);
          *(_QWORD *)(v150 + 216) = v116;
          *(_QWORD *)(v150 + 224) = v117;
          *v117 = v150 + 216;
          *(_QWORD *)(v116 + 8) = v150 + 216;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v139);
        }
        v76 = v131;
        v77 = v65 + 9;
        v64 = v126;
      }
      while ( v131 != v65 + 9 );
      v71 = v65 + 11;
    }
    if ( (_QWORD *)*v77 == v77 && (_QWORD *)*v71 == v71 )
    {
      v78 = *v65;
      v79 = (_QWORD *)v65[1];
      if ( *(_QWORD **)(*v65 + 8LL) != v65 || (_QWORD *)*v79 != v65 )
        __fastfail(3u);
      v80 = bTracingEnabled == 0;
      *v79 = v78;
      *(_QWORD *)(v78 + 8) = v79;
      if ( !v80 )
      {
        v118 = (_QWORD *)v64[1];
        if ( !v118 )
          v118 = v64;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_px(v78, v76, v37, v118, v65[2]);
      }
      v81 = (_QWORD *)v65[3];
      if ( v81 != v65 + 4 && v81 )
        ExFreePoolWithTag(v81, 0);
      ExFreePoolWithTag(v65, 0);
    }
    if ( v38 == v126 + 145 )
    {
      v32 = (__int64)v126;
      goto LABEL_49;
    }
  }
  v37 = (_QWORD *)*((unsigned int *)v65 + 16);
  v67 = 0;
  if ( !(_DWORD)v37 )
  {
LABEL_103:
    v126[144] = v66;
    goto LABEL_104;
  }
  v68 = v65[3];
  while ( 1 )
  {
    v69 = *(_QWORD *)(v68 + 16LL * v67);
    if ( v69 )
    {
      if ( *(_QWORD *)(v69 + 152) < *(_QWORD *)(v68 + 16LL * v67 + 8) )
        break;
    }
    if ( ++v67 >= (unsigned int)v37 )
      goto LABEL_103;
  }
  v32 = (__int64)v126;
LABEL_49:
  v39 = *(_QWORD *)(v5 + 384);
  v40 = v153;
  if ( _bittest64(&v39, *(unsigned __int8 *)(v3 + 4)) )
    v40 = 1;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)v2 + 6), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v129 )
  {
    v119 = v134;
    LOBYTE(v134[4].LowPart) = 1;
    *(_OWORD *)&v119[5].LowPart = *(_OWORD *)(v32 + 168);
    *(_OWORD *)&v119[7].LowPart = *(_OWORD *)(v32 + 184);
    v120 = *(_DWORD *)(v32 + 184);
    if ( (v120 & 4) != 0 )
    {
      *(_DWORD *)(v3 + 1944) = 1;
    }
    else if ( (v120 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 1940) = 1;
    }
    VidSchiMarkDeviceAsError(v32, v129);
    v42 = 13;
  }
  else
  {
    v42 = 9;
  }
  VidSchiProfilePerformanceTick(v42, v5, v3, v41, 0LL, 0LL, (__int64)v2, 0LL);
  v43 = (struct _KEVENT **)(v1 + 368);
  v44 = (KSPIN_LOCK *)(v5 + 1872);
  v146 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1872), &v141);
  if ( *v43 != (struct _KEVENT *)v43 )
  {
    v82 = *v43;
    while ( 1 )
    {
      if ( LODWORD(v82->Header.WaitListHead.Blink) == 4 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&v82[1].Header.Lock + 4LL * LODWORD(v82[1].Header.WaitListHead.Blink) + 996) >= *(_DWORD *)(*(_QWORD *)&v82[1].Header.Lock + 204LL) )
          goto LABEL_125;
      }
      else if ( ((__int64)v82[1].Header.WaitListHead.Flink & 4) != 0 )
      {
        Flink = (int)v82[1].Header.WaitListHead.Blink->Flink;
        HIDWORD(v82[5].Header.WaitListHead.Blink) = Flink;
        if ( Flink )
          goto LABEL_125;
      }
      ++v82[5].Header.LockNV;
      KeSetEvent(v82 + 4, 0, 0);
LABEL_125:
      v82 = *(struct _KEVENT **)&v82->Header.Lock;
      if ( v82 == (struct _KEVENT *)v43 )
      {
        v44 = (KSPIN_LOCK *)(v5 + 1872);
        break;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
  KeLowerIrql(v146);
  v45 = (struct _KEVENT *)(v3 + 408);
  v147 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v44, &v142);
  if ( *(struct _KEVENT **)&v45->Header.Lock == v45 )
    goto LABEL_57;
  v122 = *(struct _KEVENT **)&v45->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v122->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v122[1].Header.Lock + 4LL * LODWORD(v122[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v122[1].Header.Lock + 204LL) )
        goto LABEL_229;
    }
    else if ( ((__int64)v122[1].Header.WaitListHead.Flink & 4) == 0
           || (v123 = (int)v122[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v122[5].Header.WaitListHead.Blink) = v123) == 0) )
    {
LABEL_229:
      ++v122[5].Header.LockNV;
      KeSetEvent(v122 + 4, 0, 0);
    }
    v122 = *(struct _KEVENT **)&v122->Header.Lock;
    if ( v122 != v45 )
      continue;
    break;
  }
  v44 = (KSPIN_LOCK *)(v5 + 1872);
LABEL_57:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v142);
  KeLowerIrql(v147);
  v46 = (struct _KEVENT *)(v5 + 1784);
  v148 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v44, &v143);
  if ( *(struct _KEVENT **)&v46->Header.Lock == v46 )
    goto LABEL_58;
  v97 = *(struct _KEVENT **)&v46->Header.Lock;
  while ( 2 )
  {
    if ( LODWORD(v97->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 4LL * LODWORD(v97[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 204LL) )
        goto LABEL_155;
    }
    else if ( ((__int64)v97[1].Header.WaitListHead.Flink & 4) == 0
           || (v124 = (int)v97[1].Header.WaitListHead.Blink->Flink,
               (HIDWORD(v97[5].Header.WaitListHead.Blink) = v124) == 0) )
    {
LABEL_155:
      ++v97[5].Header.LockNV;
      KeSetEvent(v97 + 4, 0, 0);
    }
    v97 = *(struct _KEVENT **)&v97->Header.Lock;
    if ( v97 != v46 )
      continue;
    break;
  }
  v44 = (KSPIN_LOCK *)(v5 + 1872);
LABEL_58:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v143);
  KeLowerIrql(v148);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1592) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1560), 0, 0);
  if ( v40 )
  {
    *(_QWORD *)(v5 + 1368) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1336), 0, 0);
  }
  v47 = (struct _KEVENT *)*((_QWORD *)v2 + 25);
  if ( v47 )
    KeSetEvent(v47, 0, 0);
  v48 = (struct _KEVENT *)(v5 + 1832);
  v49 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v44, &v144);
  v50 = *(struct _KEVENT **)(v5 + 1832);
  if ( *(struct _KEVENT **)&v48->Header.Lock != v48 )
  {
    while ( LODWORD(v50->Header.WaitListHead.Blink) == 4 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&v50[1].Header.Lock + 4LL * LODWORD(v50[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v50[1].Header.Lock + 204LL) )
        goto LABEL_241;
LABEL_242:
      v50 = *(struct _KEVENT **)&v50->Header.Lock;
      if ( v50 == v48 )
        goto LABEL_63;
    }
    if ( ((__int64)v50[1].Header.WaitListHead.Flink & 4) != 0 )
    {
      v125 = (int)v50[1].Header.WaitListHead.Blink->Flink;
      HIDWORD(v50[5].Header.WaitListHead.Blink) = v125;
      if ( v125 )
        goto LABEL_242;
    }
LABEL_241:
    ++v50[5].Header.LockNV;
    KeSetEvent(v50 + 4, 0, 0);
    goto LABEL_242;
  }
LABEL_63:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v144);
  KeLowerIrql(v49);
  v51 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)v2 + 7);
  v52 = -1;
  if ( v51 )
    v52 = *((_DWORD *)v51 + 38);
  if ( v151 )
  {
    do
      v51 = VidSchiProcessCompletedQueuePacketInternal(v51);
    while ( v51 );
  }
  *((_QWORD *)v2 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v2 + 18) = 16;
  if ( v52 != -1 && (*((_DWORD *)v2 + 23) & 0x10) != 0 )
    VidSchiQueueDeferredVisibilityWorkItem(
      *(struct _VIDSCH_PRESENT_INFO **)(v5 + 8LL * v52 + 2968),
      (struct _VIDSCH_GLOBAL *)v5);
}
