/*
 * XREFs of ExpWnfDeleteScopeInstances @ 0x1406BA3A4
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpWnfFreeScopeInstance @ 0x1404ADED0 (ExpWnfFreeScopeInstance.c)
 */

unsigned __int64 __fastcall ExpWnfDeleteScopeInstances(__int64 a1, unsigned int a2)
{
  unsigned __int64 *v4; // rdi
  struct _EX_RUNDOWN_REF *v5; // rbx
  _BYTE *v6; // rax
  _BYTE *v7; // rsi
  struct _EX_RUNDOWN_REF *Count; // rax
  unsigned __int64 v9; // rcx

  v4 = (unsigned __int64 *)(a1 + 24 + 24LL * a2);
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 32 + 24LL * a2);
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4);
  if ( v7 )
    v7[26] |= 1u;
  Count = (struct _EX_RUNDOWN_REF *)v5->Count;
  v9 = *(_QWORD *)v5->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v5->Count + 8) != v5 || *(struct _EX_RUNDOWN_REF **)(v9 + 8) != Count )
    __fastfail(3u);
  while ( 1 )
  {
    v5->Count = v9;
    *(_QWORD *)(v9 + 8) = v5;
    if ( Count == v5 )
      break;
    Count->Count = 0LL;
    if ( !a2 )
      *(_QWORD *)(a1 + 8) = 0LL;
    ExpWnfFreeScopeInstance(Count - 4, 1);
    Count = (struct _EX_RUNDOWN_REF *)v5->Count;
    v9 = *(_QWORD *)v5->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v5->Count + 8) != v5 || *(struct _EX_RUNDOWN_REF **)(v9 + 8) != Count )
      __fastfail(3u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  return KeAbPostRelease((ULONG_PTR)v4);
}
