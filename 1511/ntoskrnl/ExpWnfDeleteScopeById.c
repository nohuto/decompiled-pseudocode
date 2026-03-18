/*
 * XREFs of ExpWnfDeleteScopeById @ 0x1403E3D80
 * Callers:
 *     ExWnfExitProcess @ 0x1403E3D28 (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExpWnfFindScopeInstance @ 0x1403E5F98 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1404B203C (ExpWnfFreeScopeInstance.c)
 */

void __fastcall ExpWnfDeleteScopeById(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 ScopeInstance; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 *v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v17);
  v6 = *v17;
  if ( *v17 )
  {
    v7 = v6 + 24 * v4;
    v8 = (unsigned __int64 *)(v6 + 8 * (3 * v4 + 3));
    v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance(v7 + 32, a2, a3);
    v12 = ScopeInstance;
    if ( ScopeInstance )
    {
      v14 = (_QWORD *)(ScopeInstance + 32);
      v15 = *(_QWORD *)(ScopeInstance + 32);
      v16 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v15 + 8) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v12 )
    {
      LOBYTE(v13) = 1;
      ExpWnfFreeScopeInstance(v12, v13);
    }
  }
  PsDereferenceMonitorContextServerSilo((__int64)v17);
}
