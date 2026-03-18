/*
 * XREFs of VidSchiProcessDpcCompletedPacket @ 0x1C00022F0
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C00021E0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0001880 (VidSchiDecrementContextReference.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUpdateContextStatus @ 0x1C0002EC0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0003380 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000342C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C00059CC (VidSchiUnwaitMonitoredFences.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000F294 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0010318 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00122EC (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0012370 (-VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0012910 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C0012EA0 (-VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001318C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0015754 (VidSchiCheckYieldExitCondition.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0015EDC (VidSchiCompleteRewindPacket.c)
 *     VidSchiStartNodeYield @ 0x1C001A53C (VidSchiStartNodeYield.c)
 */

void __fastcall VidSchiProcessDpcCompletedPacket(struct _VIDSCH_DMA_PACKET *a1)
{
  signed __int64 v1; // rsi
  char v3; // r12
  __int64 v4; // rdi
  int v5; // r13d
  __int64 v6; // r15
  __int64 v7; // rbp
  int v8; // r14d
  bool v9; // zf
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _VIDSCH_CONTEXT *v15; // rcx
  __int64 v16; // rax
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // r14
  struct _VIDSCH_QUEUE_PACKET *v19; // rcx
  struct _VIDMM_DMA_BUFFER *v20; // r14
  __int64 v21; // r14
  int v22; // r9d
  __int64 v23; // rdx
  struct _KEVENT *v24; // rcx
  struct _VIDSCH_QUEUE_PACKET *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // r8
  unsigned int i; // r12d
  int v31; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  char v34; // [rsp+B0h] [rbp+8h]
  char v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 6);
  v3 = 0;
  v34 = 0;
  v37 = 0;
  v4 = *(_QWORD *)(v1 + 96);
  v5 = 13;
  v6 = *(_QWORD *)(v1 + 104);
  v7 = *(_QWORD *)(v4 + 24);
  if ( *((_DWORD *)a1 + 18) == 18 )
  {
    v36 = 9;
    v8 = 15;
    VidSchiAllowToDebugPageFault(a1);
  }
  else
  {
    v36 = 0;
    v8 = 13;
  }
  v9 = *((_QWORD *)a1 + 7) == 0LL;
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = v8;
  if ( !v9 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 7) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*((_QWORD *)a1 + 7) + 52LL) = v8;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1872), &LockHandle);
  v12 = *(unsigned int *)(v4 + 1480);
  v13 = v4 + 8 * v12;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 1488), 0LL, v1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v13, 0LL, v10, v11);
    *(_QWORD *)(v27 + 24) = v7;
    *(_QWORD *)(v27 + 32) = v6;
    WdLogEvent5_WdAssertion(v27);
  }
  *(_QWORD *)(v4 + 160) = v1;
  *(_DWORD *)(v4 + 1480) = ((_BYTE)v12 + 1) & 0xF;
  if ( (*((_DWORD *)a1 + 23) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 924));
  _InterlockedDecrement((volatile signed __int32 *)(v7 + 900));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2848));
  if ( *(int *)(v4 + 2832) > 0 )
  {
    v14 = *(_QWORD *)(v7 + 352);
    _bittestandset64(&v14, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v7 + 352) = v14;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 764), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v1 + 176) &= ~2u;
    if ( (*(_DWORD *)(v1 + 176) & 8) != 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~8u;
      v37 = VidSchiCompleteRewindPacket(v1, 1LL);
    }
    if ( v6 == *(_QWORD *)(v7 + 176) )
    {
      VidSchiUpdateContextStatus(v1, 0LL, 8628LL);
    }
    else if ( (*(_DWORD *)(v1 + 176) & 2) == 0 )
    {
      v15 = *(struct _VIDSCH_CONTEXT **)(v1 + 496);
      if ( v15 )
      {
        VidSchiDecrementContextReference(v15, 1);
        *(_QWORD *)(v1 + 496) = 0LL;
      }
      *(_QWORD *)(v1 + 496) = 0LL;
    }
    --*(_DWORD *)(v4 + 4LL * *(unsigned int *)(v1 + 396) + 1624);
    v16 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v4 + 4 * v16 + 1624) )
      *(_DWORD *)(v4 + 1620) &= ~(1 << v16);
    VidSchiFinishMeasuringPreemptionTime(v1);
  }
  v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v18 = v17;
  if ( *(_BYTE *)(v4 + 2024) )
  {
    if ( *(_QWORD *)(v4 + 2008) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiCheckYieldExitCondition)(
        v4,
        (LARGE_INTEGER)v17.QuadPart,
        &v35);
      if ( v35 )
      {
        *(_QWORD *)(v7 + 1552) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v7 + 1520), 0, 0);
      }
    }
    else if ( (~((1 << (*(_BYTE *)(v7 + 160) + 1)) - 1) & *(_DWORD *)(v4 + 1620)) == 0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
        v4,
        (LARGE_INTEGER)v17.QuadPart,
        (union _LARGE_INTEGER)PerformanceFrequency.QuadPart);
    }
  }
  *(LARGE_INTEGER *)(v4 + 8LL * *(unsigned int *)(v1 + 396) + 1752) = v18;
  _m_prefetchw((const void *)(v4 + 88));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v4 + 88),
            *((_QWORD *)a1 + 13),
            *(_QWORD *)(v4 + 88)) != *((_QWORD *)a1 + 13) )
    ;
  v19 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
  if ( v19 )
  {
    VidSchiAdvanceContextSubmissionId(v19);
    *((_DWORD *)a1 + 23) |= 0x80u;
    v3 = 1;
    v34 = 1;
  }
  v20 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a1 + 8);
  if ( (*((_DWORD *)a1 + 23) & 2) != 0 )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 408LL),
      *((struct _VIDMM_DMA_BUFFER **)a1 + 8),
      0);
  if ( (*((_DWORD *)a1 + 23) & 1) != 0 )
  {
    v28 = *((_QWORD *)a1 + 7);
    v29 = v28 && *(_DWORD *)(v28 + 48) == 8;
    VIDMM_DMA_POOL::ReleaseBuffer(v19, v20, v29);
  }
  v21 = *((_QWORD *)a1 + 7);
  if ( v21 && *(_QWORD *)(v21 + 248) )
  {
    for ( i = 0; i < *(_DWORD *)(v21 + 600); ++i )
      VidSchiProcessHistoryBuffer(a1, (struct _VIDSCH_HISTORY_BUFFER_DATA *)(*(_QWORD *)(v21 + 248) + 16LL * i));
    VidSchiFreeHistoryBufferStorage((struct _VIDSCH_QUEUE_PACKET *)v21);
    v3 = v34;
  }
  VidSchiUnwaitMonitoredFences(*(_QWORD *)(v6 + 32));
  VidSchiCheckPendingDeviceCommand(v6);
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*((struct _VIDSCH_CONTEXT **)a1 + 6), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v23 = v36;
  if ( v36 )
  {
    v31 = *(_DWORD *)(v6 + 192);
    if ( (v31 & 4) != 0 )
    {
      *(_DWORD *)(v4 + 2032) = 1;
    }
    else if ( (v31 & 8) != 0 )
    {
      *(_DWORD *)(v4 + 2028) = 1;
    }
    VidSchiMarkDeviceAsError(v6, v23);
  }
  else
  {
    v5 = v36 + 9;
  }
  VidSchiProfilePerformanceTick(v5, v7, v4, v22, 0LL, 0LL, (__int64)a1, 0LL);
  VidSchiSignalRegisteredEvent(v7, v1 + 368);
  VidSchiSignalRegisteredEvent(v7, v4 + 336);
  VidSchiSignalRegisteredEvent(v7, v7 + 1800);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v4 + 200) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 168), 0, 0);
  *(_QWORD *)(v7 + 1608) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v7 + 1576), 0, 0);
  if ( v37 )
  {
    *(_QWORD *)(v7 + 1328) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1296), 0, 0);
  }
  v24 = (struct _KEVENT *)*((_QWORD *)a1 + 25);
  if ( v24 )
    KeSetEvent(v24, 0, 0);
  VidSchiSignalRegisteredEvent(v7, v7 + 1848);
  if ( v3 )
  {
    v25 = (struct _VIDSCH_QUEUE_PACKET *)*((_QWORD *)a1 + 7);
    do
      v25 = VidSchiProcessCompletedQueuePacketInternal(v25);
    while ( v25 );
  }
  v26 = *((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 10) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 18) = 16;
  if ( v26 )
  {
    if ( (*((_DWORD *)a1 + 23) & 0x10) != 0 )
      VidSchiQueueDeferredVisibilityWorkItem(
        *(struct _VIDSCH_PRESENT_INFO **)(v7 + 8LL * *(unsigned int *)(v26 + 144) + 2640),
        (struct _VIDSCH_GLOBAL *)v7);
  }
}
