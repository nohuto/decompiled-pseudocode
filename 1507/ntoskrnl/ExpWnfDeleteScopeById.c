/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1405043FC
 * Callers:
 *     ExWnfExitProcess @ 0x140504364 (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpWnfFindScopeInstance @ 0x140504504 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeById(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 ScopeInstance; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 *v20; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v20, a4);
  v7 = *v20;
  PsDereferenceMonitorContextServerSilo((__int64)v20);
  if ( v7 )
  {
    v9 = v7 + 24 * v5;
    v10 = (unsigned __int64 *)(v9 + 16);
    v11 = KeAbPreAcquire(v9 + 16, 0LL, 0LL, v8);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance(v9 + 24, a2, a3);
    v15 = ScopeInstance;
    if ( ScopeInstance )
    {
      v17 = (_QWORD *)(ScopeInstance + 32);
      v18 = *(_QWORD *)(ScopeInstance + 32);
      v19 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v18 + 8) != v17 || (_QWORD *)*v19 != v17 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( v15 )
    {
      LOBYTE(v16) = 1;
      ExpWnfFreeScopeInstance(v15, v16);
    }
  }
}
