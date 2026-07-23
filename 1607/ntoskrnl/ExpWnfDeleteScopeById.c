/*
 * XREFs of ExpWnfDeleteScopeById @ 0x14045FF9C
 * Callers:
 *     ExWnfExitProcess @ 0x14045FD9C (ExWnfExitProcess.c)
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpWnfFindScopeInstance @ 0x1404638C0 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1404ADED0 (ExpWnfFreeScopeInstance.c)
 */

__int64 __fastcall ExpWnfDeleteScopeById(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r14
  unsigned __int64 *v9; // rbx
  _BYTE *v10; // rax
  _BYTE *v11; // rdi
  __int64 ScopeInstance; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax

  result = (__int64)PsGetCurrentServerSiloGlobals();
  v7 = *(_QWORD *)(result + 888);
  if ( v7 )
  {
    v8 = v7 + 24 * v6;
    v9 = (unsigned __int64 *)(v7 + 8 * (3 * v6 + 3));
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v9, 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9);
    if ( v11 )
      v11[26] |= 1u;
    ScopeInstance = ExpWnfFindScopeInstance(v8 + 32, a2, a3);
    v13 = ScopeInstance;
    if ( ScopeInstance )
    {
      v15 = (_QWORD *)(ScopeInstance + 32);
      v16 = *(_QWORD *)(ScopeInstance + 32);
      v17 = *(_QWORD **)(ScopeInstance + 40);
      if ( *(_QWORD **)(v16 + 8) != v15 || (_QWORD *)*v17 != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    result = KeAbPostRelease((ULONG_PTR)v9);
    if ( v13 )
    {
      LOBYTE(v14) = 1;
      return ExpWnfFreeScopeInstance(v13, v14);
    }
  }
  return result;
}
