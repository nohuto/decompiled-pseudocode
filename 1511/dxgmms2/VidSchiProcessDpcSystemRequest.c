/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C000EF58
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0007B10 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0020DEC (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C00031A8 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F398 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000F444 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
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
  LARGE_INTEGER v9; // r8
  LARGE_INTEGER v10; // r9
  __int64 v11; // r15
  LARGE_INTEGER v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  struct _KEVENT *v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // r8
  __int64 **v22; // rax
  __int64 v23; // r8
  __int64 **v24; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1824), &LockHandle);
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v11 = *(unsigned int *)(v3 + 1512);
  v12 = v6;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v11 + 1520), 0LL, v1) )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart,
            (LARGE_INTEGER)v9.QuadPart,
            (LARGE_INTEGER)v10.QuadPart);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = v1;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 184) = v1;
  *(_DWORD *)(v3 + 1512) = ((_BYTE)v11 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 908), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2720), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 396),
    v12.QuadPart,
    PerformanceFrequency.QuadPart);
  v14 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1512) + 1520);
  if ( v14 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v14 + 396), v12.QuadPart);
  if ( *(int *)(v3 + 2704) > 0 )
  {
    v15 = *(_QWORD *)(v5 + 360);
    _bittestandset64(&v15, *(unsigned __int16 *)(v3 + 4));
    *(_QWORD *)(v5 + 360) = v15;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 764), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 176) & 1) != 0 )
      *(_DWORD *)(v1 + 176) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, (__int64 *)0x2533);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 396) + 1656);
    v16 = *(unsigned int *)(v1 + 396);
    if ( !*(_DWORD *)(v3 + 4 * v16 + 1656) )
      *(_DWORD *)(v3 + 1652) &= ~(1 << v16);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2732), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2728), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 912), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 112));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 112),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 112)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 904), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2716), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1136), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 760), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, v17, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 368);
  VidSchiSignalRegisteredEvent(v5, v3 + 368);
  VidSchiSignalRegisteredEvent(v5, v5 + 1752);
  *(_QWORD *)(v1 + 344) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 312), 0, 0);
  *(_QWORD *)(v3 + 232) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 200), 0, 0);
  *(_QWORD *)(v5 + 1560) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1528), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 384);
  VidSchiSignalRegisteredEvent(v5, v5 + 1768);
  *(_QWORD *)(v3 + 288) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 256), 0, 0);
  *(_QWORD *)(v5 + 1616) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1584), 0, 0);
  v18 = *(struct _KEVENT **)(a1 + 200);
  if ( v18 )
    KeSetEvent(v18, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v19 = *(_QWORD *)(v3 + 192);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 176) & 1) != 0 )
      {
        v20 = (__int64 *)(v19 + 8);
        v21 = *(__int64 **)(v19 + 8);
        v22 = *(__int64 ***)(v19 + 16);
        if ( v21[1] != v19 + 8 || *v22 != v20 )
          __fastfail(3u);
        *v22 = v21;
        v21[1] = (__int64)v22;
        v23 = 16LL * *(unsigned int *)(v19 + 396) + v3 + 1912;
        v24 = *(__int64 ***)(v23 + 8);
        *v20 = v23;
        *(_QWORD *)(v19 + 16) = v24;
        if ( *v24 != (__int64 *)v23 )
          __fastfail(3u);
        *v24 = v20;
        *(_QWORD *)(v23 + 8) = v20;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v19);
      *(_QWORD *)(v3 + 192) = 0LL;
    }
    *(_QWORD *)(v3 + 344) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 312), 0, 0);
    if ( *(_DWORD *)(v5 + 904) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1336LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1304LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
