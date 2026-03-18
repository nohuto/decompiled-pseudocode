/*
 * XREFs of WheaConfigureErrorSource @ 0x1403FAEE8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     WheapInitializeDeferredErrorSources @ 0x14015C98C (WheapInitializeDeferredErrorSources.c)
 */

__int64 __fastcall WheaConfigureErrorSource(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (int)a1;
  if ( a1 > 0xB )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = (volatile signed __int32 *)((char *)&WheapSourceConfiguration + 48 * (int)a1);
    v7 = -1073741823;
    v8 = KeAbPreAcquire((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (unsigned __int64 *)&WheapDispatchPtr.ActiveThreadCount,
        v8,
        (ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount,
        v9);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = KeAbPreAcquire((ULONG_PTR)&WheapSourceConfiguration + 48 * v4, 0LL, 0LL, v9);
    v12 = v10;
    if ( _interlockedbittestandset64(v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapSourceConfiguration + 6 * v4,
        v10,
        (ULONG_PTR)&WheapSourceConfiguration + 48 * v4,
        v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    if ( !*((_BYTE *)v6 + 8) )
    {
      *((_DWORD *)v6 + 3) = *(_DWORD *)a2;
      v13 = *(_QWORD *)(a2 + 8);
      if ( v13 )
        *((_QWORD *)v6 + 2) = v13;
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 )
        *((_QWORD *)v6 + 3) = v14;
      v15 = *(_QWORD *)(a2 + 24);
      if ( v15 )
        *((_QWORD *)v6 + 4) = v15;
      v16 = *(_QWORD *)(a2 + 32);
      if ( v16 )
        *((_QWORD *)v6 + 5) = v16;
      _InterlockedOr(v18, 0);
      *((_BYTE *)v6 + 8) = 1;
      if ( WheapInitializationComplete )
        v7 = WheapInitializeDeferredErrorSources(v4);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapSourceConfiguration + 6 * v4);
    KeAbPostRelease((ULONG_PTR)&WheapSourceConfiguration + 48 * v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WheapDispatchPtr.ActiveThreadCount, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&WheapDispatchPtr.ActiveThreadCount);
    KeAbPostRelease((ULONG_PTR)&WheapDispatchPtr.ActiveThreadCount);
  }
  return v7;
}
