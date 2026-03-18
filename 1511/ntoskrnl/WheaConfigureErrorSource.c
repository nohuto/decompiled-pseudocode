/*
 * XREFs of WheaConfigureErrorSource @ 0x1403AA850
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     WheapInitializeDeferredErrorSources @ 0x14012F604 (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(unsigned int a1, __int64 a2)
{
  __int64 v2; // r14
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  signed __int32 v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v2 = (int)a1;
  if ( a1 > 0xB )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 48 * (int)a1);
    v5 = -1073741823;
    v6 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (unsigned __int64 *)&WheapDispatchPtr.ActiveThreadCount,
        v6,
        (ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    v7 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 48 * v2, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64(v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapSourceConfiguration + 6 * v2,
        v7,
        (ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    if ( !*((_BYTE *)v4 + 8) )
    {
      *((_DWORD *)v4 + 3) = *(_DWORD *)a2;
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 )
        *((_QWORD *)v4 + 2) = v9;
      v10 = *(_QWORD *)(a2 + 16);
      if ( v10 )
        *((_QWORD *)v4 + 3) = v10;
      v11 = *(_QWORD *)(a2 + 24);
      if ( v11 )
        *((_QWORD *)v4 + 4) = v11;
      v12 = *(_QWORD *)(a2 + 32);
      if ( v12 )
        *((_QWORD *)v4 + 5) = v12;
      _InterlockedOr(v14, 0);
      *((_BYTE *)v4 + 8) = 1;
      if ( WheapInitializationComplete )
        v5 = WheapInitializeDeferredErrorSources(v2);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 6 * v2);
    KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 48 * v2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapDispatchPtr.ActiveThreadCount);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount);
  }
  return v5;
}
