/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C00178CC
 * Callers:
 *     VidSchiProcessDpcDmaPacket @ 0x1C00021E0 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1C0002BD0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000342C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0004824 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00122EC (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0015EDC (VidSchiCompleteRewindPacket.c)
 *     VidSchiRewindPacket @ 0x1C001A004 (VidSchiRewindPacket.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  int v3; // r15d
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  LONG result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

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
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1872), &LockHandle);
  v10 = *(unsigned int *)(v4 + 1480);
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8 * v10 + 1488), 0LL, v2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = v5;
    *(_QWORD *)(v11 + 32) = v2;
    WdLogEvent5_WdAssertion(v11);
  }
  *(_QWORD *)(v4 + 160) = v2;
  *(_DWORD *)(v4 + 1480) = ((_BYTE)v10 + 1) & 0xF;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    *(_QWORD *)(*(_QWORD *)(v12 + 80) + 160LL) = *(_QWORD *)(v12 + 96);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 112), 1u);
    VidSchiRewindPacket(v12, 1LL, 0LL, 1LL);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v5 + 924), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 900), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 2848), 0xFFFFFFFF);
  if ( *(int *)(v4 + 2832) > 0 )
  {
    v13 = *(_QWORD *)(v5 + 352);
    _bittestandset64(&v13, *(unsigned __int16 *)(v4 + 4));
    *(_QWORD *)(v5 + 352) = v13;
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
    v3 = VidSchiCompleteRewindPacket(v2, 1LL);
    VidSchiSetTransferContextRunningTime(v2, 0LL, 1);
    --*(_DWORD *)(v4 + 4LL * *(unsigned int *)(v2 + 396) + 1624);
    v14 = *(unsigned int *)(v2 + 396);
    if ( !*(_DWORD *)(v4 + 4 * v14 + 1624) )
      *(_DWORD *)(v4 + 1620) &= ~(1 << v14);
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
  VidSchiProfilePerformanceTick(11LL, v5, v4, v15, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v2 + 368));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 336));
  VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1800));
  *(_QWORD *)(v2 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 312), 0, 0);
  *(_QWORD *)(v4 + 200) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v4 + 168), 0, 0);
  *(_QWORD *)(v5 + 1608) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v5 + 1576), 0, 0);
  if ( v3 )
  {
    *(_QWORD *)(v5 + 1328) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v5 + 1296), 0, 0);
  }
  return result;
}
