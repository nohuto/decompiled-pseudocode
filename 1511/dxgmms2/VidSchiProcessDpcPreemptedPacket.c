/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C000EC2C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0007B10 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0020DEC (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00031A8 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiCompleteRewindPacket @ 0x1C000E330 (VidSchiCompleteRewindPacket.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F398 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000F444 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiRewindPacket @ 0x1C000F53C (VidSchiRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000F5D4 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F790 (VidSchiSetTransferContextRunningTime.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00132F0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  int v3; // r12d
  __int64 v4; // rdi
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // r8
  LARGE_INTEGER v10; // r9
  __int64 v11; // r14
  LARGE_INTEGER v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  LONG result; // eax
  __int64 v21; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1824), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v11 = *(unsigned int *)(v4 + 1512);
  v12 = v6;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v11 + 1520), 0LL, v2) )
  {
    v21 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart,
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v10.QuadPart);
    *(_QWORD *)(v21 + 24) = v5;
    *(_QWORD *)(v21 + 32) = v2;
    WdLogEvent5_WdAssertion(v21);
  }
  *(_QWORD *)(v4 + 184) = v2;
  *(_DWORD *)(v4 + 1512) = ((_BYTE)v11 + 1) & 0xF;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    *(_QWORD *)(*(_QWORD *)(v13 + 80) + 160LL) = *(_QWORD *)(v13 + 96);
    _InterlockedAdd((volatile signed __int32 *)(v13 + 112), 1u);
    VidSchiRewindPacket(v13, 1LL, 0LL, 1LL);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 932));
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 908));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 2720));
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v4,
    *(_DWORD *)(v2 + 396),
    v12.QuadPart,
    PerformanceFrequency.QuadPart);
  v14 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1512) + 1520);
  if ( v14 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v4, *(_DWORD *)(v14 + 396), v12.QuadPart);
  if ( *(int *)(v4 + 2704) > 0 )
  {
    v15 = *(_QWORD *)(v5 + 360);
    _bittestandset64(&v15, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v5 + 360) = v15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 764), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v2 + 176) &= ~8u;
    if ( (*(_DWORD *)(v2 + 176) & 0x20) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x20u;
    if ( (*(_DWORD *)(v2 + 176) & 0x10) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x10u;
    if ( (*(_DWORD *)(v2 + 176) & 0x40) != 0 )
      *(_DWORD *)(v2 + 176) &= ~0x40u;
    *(_DWORD *)(v2 + 176) &= ~2u;
    v16 = VidSchiCompleteRewindPacket(v2, 1LL);
    LOBYTE(v17) = 1;
    v3 = v16;
    VidSchiSetTransferContextRunningTime(v2, 0LL, v17);
    --*(_DWORD *)(v4 + 4LL * *(unsigned int *)(v2 + 396) + 1656);
    v18 = *(unsigned int *)(v2 + 396);
    if ( !*(_DWORD *)(v4 + 4 * v18 + 1656) )
      *(_DWORD *)(v4 + 1652) &= ~(1 << v18);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  _m_prefetchw((const void *)(v4 + 88));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v4 + 88),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v4 + 88)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v5, v4, v19, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v2 + 368);
  VidSchiSignalRegisteredEvent(v5, v4 + 368);
  VidSchiSignalRegisteredEvent(v5, v5 + 1752);
  *(_QWORD *)(v2 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 312), 0, 0);
  *(_QWORD *)(v4 + 232) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 200), 0, 0);
  *(_QWORD *)(v5 + 1560) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v5 + 1528), 0, 0);
  if ( v3 )
  {
    *(_QWORD *)(v5 + 1336) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v5 + 1304), 0, 0);
  }
  return result;
}
