/*
 * XREFs of ObpGetShadowDirectory @ 0x14066550C
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, char a2)
{
  int v2; // eax
  signed __int64 v3; // rbx
  __int64 v5; // rsi
  char *CurrentServerSiloGlobals; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  signed __int64 v11; // rax
  unsigned __int64 v12; // rtt

  v2 = *(_DWORD *)(a1 + 344);
  v3 = 0LL;
  v5 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 0x10) == 0 || a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (unsigned __int64 *)(CurrentServerSiloGlobals + 120);
    v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v10 = *(_QWORD *)(a1 + 304);
    if ( v10 )
      v5 = *(_QWORD *)(v10 + 8);
    _m_prefetchw(v8);
    v11 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v11 - 16;
    if ( (v11 & 2) != 0 || (v12 = *v8, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v3, v11)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v5;
}
