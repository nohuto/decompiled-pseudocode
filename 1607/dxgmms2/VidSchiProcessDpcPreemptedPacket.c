/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C000D694
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006880 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0024584 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C0001090 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000CCBC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000D28C (VidSchiCompleteRewindPacket.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiRewindPacket @ 0x1C000E11C (VidSchiRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000E45C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000E530 (VidSchiSetTransferContextRunningTime.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER *v5; // r13
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  __int64 QuadPart; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // r9
  struct _KEVENT *v21; // rcx
  LONG result; // eax
  __int64 v23; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
  v5 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  memset(v5, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v5->LowPart = 5;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5[1] = v6;
  QuadPart = v6.QuadPart;
  v9 = *(unsigned int *)(v3 + 1552);
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v2) )
  {
    v23 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)((LARGE_INTEGER)v7.QuadPart, 0LL);
    *(_QWORD *)(v23 + 24) = v4;
    *(_QWORD *)(v23 + 32) = v2;
    WdLogEvent5_WdAssertion(v23);
  }
  *(_QWORD *)(v3 + 224) = v2;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
  {
    *(_QWORD *)(*(_QWORD *)(v10 + 88) + 160LL) = *(_QWORD *)(v10 + 104);
    v5[3] = *(LARGE_INTEGER *)(v10 + 104);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 120), 1u);
    VidSchiRewindPacket(v10, 1LL, 0LL, 1LL);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 968));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 944));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2760));
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v2 + 396),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v11 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 + 396);
    v13 = (int)gulPriorityToYieldPriorityBand[v12];
    if ( gulPriorityToYieldPriorityBand[v12] )
    {
      v14 = (__int64 *)(v3 + 1856 + 8 * v13);
      do
      {
        if ( *(v14 - 4) )
          *v14 = QuadPart;
        --v14;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( *(int *)(v3 + 2744) > 0 )
  {
    v15 = *(_QWORD *)(v4 + 392);
    _bittestandset64(&v15, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v4 + 392) = v15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v2 + 176) &= ~8u;
    if ( (*(_DWORD *)(v2 + 176) & 0x20) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x20u;
    if ( (*(_DWORD *)(v2 + 176) & 0x10) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x10u;
    if ( (*(_DWORD *)(v2 + 176) & 0x40) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x40u;
    *(_DWORD *)(v2 + 176) &= ~2u;
    v16 = VidSchiCompleteRewindPacket(v2, 1);
    LOBYTE(v17) = 1;
    v18 = v16;
    VidSchiSetTransferContextRunningTime(v2, 0LL, v17);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v2 + 396) + 1696);
    v19 = *(unsigned int *)(v2 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v19 + 1696) )
      *(_DWORD *)(v3 + 1692) &= ~(1 << v19);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  else
  {
    v18 = 0;
  }
  v5[2] = *(LARGE_INTEGER *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, v20, 0LL, 0LL, a1, 0LL);
  v21 = *(struct _KEVENT **)(a1 + 200);
  if ( v21 )
    KeSetEvent(v21, 0, 0);
  VidSchiSignalRegisteredEvent(v4, v2 + 368);
  VidSchiSignalRegisteredEvent(v4, v3 + 408);
  VidSchiSignalRegisteredEvent(v4, v4 + 1784);
  *(_QWORD *)(v2 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1592) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1560), 0, 0);
  if ( v18 )
  {
    *(_QWORD *)(v4 + 1368) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1336), 0, 0);
  }
  return result;
}
