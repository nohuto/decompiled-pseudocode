/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C000DA44
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006880 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0024584 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0001048 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0001BA0 (VidSchiDecrementContextReference.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000CCBC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000DEB0 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000DF5C (VidSchiCheckPendingDeviceCommand.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  __int64 v9; // r15
  __int64 QuadPart; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  struct _KEVENT *v16; // rcx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 *v19; // rdx
  __int64 *v20; // r8
  __int64 **v21; // rax
  __int64 v22; // rax
  __int64 **v23; // r8
  __int64 v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1856), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v9 = *(unsigned int *)(v3 + 1552);
  QuadPart = v6.QuadPart;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v9 + 1560), 0LL, v1) )
  {
    v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart);
    *(_QWORD *)(v24 + 24) = v5;
    *(_QWORD *)(v24 + 32) = v1;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v9 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 944), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2760), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 396),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v12 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v12 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v12 + 396));
  if ( *(int *)(v3 + 2744) > 0 )
  {
    v13 = *(_QWORD *)(v5 + 392);
    _bittestandset64(&v13, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 392) = v13;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 176) & 1) != 0 )
      *(_DWORD *)(v1 + 176) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 10416LL, v11);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1696);
    v14 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v14 + 1696) )
      *(_DWORD *)(v3 + 1692) &= ~(1 << v14);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2772), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2768), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 948), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 940), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2756), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1132), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 784), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand(v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, v15, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 368);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1784);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1592) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1560), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1800);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1648) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1616), 0, 0);
  v16 = *(struct _KEVENT **)(a1 + 200);
  if ( v16 )
    KeSetEvent(v16, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v17 = *(_QWORD *)(v3 + 232);
    if ( v17 )
    {
      if ( (*(_DWORD *)(v17 + 176) & 1) != 0 )
      {
        v19 = (__int64 *)(v17 + 8);
        v20 = *(__int64 **)(v17 + 8);
        v21 = *(__int64 ***)(v17 + 16);
        if ( v20[1] != v17 + 8 || *v21 != v19 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = (__int64)v21;
        v22 = v3 + 16 * (*(unsigned int *)(v17 + 396) + 122LL);
        v23 = *(__int64 ***)(v22 + 8);
        if ( *v23 != (__int64 *)v22 )
          __fastfail(3u);
        *v19 = v22;
        *(_QWORD *)(v17 + 16) = v23;
        *v23 = v19;
        *(_QWORD *)(v22 + 8) = v19;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v17, 1);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 940) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1368LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1336LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
