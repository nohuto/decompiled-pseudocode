/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1406FC3FC
 * Callers:
 *     ExWnfServerSiloTerminated @ 0x1406F7718 (ExWnfServerSiloTerminated.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeInstances(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 **v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v14, a4);
  v5 = *v14;
  PsDereferenceMonitorContextServerSilo((__int64)v14);
  if ( v5 )
  {
    v7 = (__int64 **)(v5 + 24 + 24 * v4);
    v8 = (volatile signed __int32 *)(v5 + 8 * (3 * v4 + 2));
    v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, v6);
    v11 = v9;
    if ( _interlockedbittestandset64(v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 8 * (3 * v4 + 2)), v9, v5 + 8 * (3 * v4 + 2), v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    v12 = *v7;
    v13 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    while ( 1 )
    {
      *v7 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v7;
      if ( v12 == (__int64 *)v7 )
        break;
      *v12 = 0LL;
      if ( !(_DWORD)v4 )
        *(_QWORD *)(v5 + 8) = 0LL;
      ExpWnfFreeScopeInstance(v12 - 4, 1);
      v12 = *v7;
      v13 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v13 + 8) != v12 )
        __fastfail(3u);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 8 * (3 * v4 + 2)));
    KeAbPostRelease(v5 + 8 * (3 * v4 + 2));
  }
}
