/*
 * XREFs of ExpWnfEnumerateScopeInstances @ 0x1404AE73C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404ADFA4 (NtDeleteWnfStateName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExpWnfGetHostSiloContext @ 0x140462BB8 (ExpWnfGetHostSiloContext.c)
 */

struct _EX_RUNDOWN_REF *__fastcall ExpWnfEnumerateScopeInstances(unsigned int a1, struct _EX_RUNDOWN_REF *a2)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 *v7; // rbx
  struct _EX_RUNDOWN_REF **v8; // r14
  __int64 v9; // rsi
  struct _EX_RUNDOWN_REF *Count; // rax

  v2 = a1;
  v4 = 0LL;
  if ( a1 == 4 )
    v5 = *(_QWORD *)ExpWnfGetHostSiloContext();
  else
    v5 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 111);
  if ( !v5 )
    return 0LL;
  v6 = 3 * v2 + 4;
  v7 = (unsigned __int64 *)(v5 + 8 * (3 * v2 + 3));
  v8 = (struct _EX_RUNDOWN_REF **)(v5 + 8 * v6);
  v9 = KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v9, (ULONG_PTR)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a2 )
    Count = (struct _EX_RUNDOWN_REF *)a2[4].Count;
  else
    Count = 0LL;
  if ( !Count )
    Count = *v8;
  while ( Count != (struct _EX_RUNDOWN_REF *)v8 )
  {
    v4 = Count - 4;
    if ( ExAcquireRundownProtection(Count - 3) )
      break;
    Count = (struct _EX_RUNDOWN_REF *)v4[4].Count;
    v4 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  if ( a2 )
    ExReleaseRundownProtection(a2 + 1);
  return v4;
}
