/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140579580
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // r8
  char *v6; // rbp
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  unsigned __int64 v11; // rtt

  if ( (unsigned int)(a1 - 1) > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(CurrentServerSiloGlobals + 120);
  v8 = KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  v9 = 0LL;
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *a2 = *(_DWORD *)&v6[4 * (a1 - 1) + 12] != 0;
  _m_prefetchw(v7);
  v10 = *v7;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v9 = v10 - 16;
  if ( (v10 & 2) != 0 || (v11 = *v7, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v9, v10)) )
    ExfReleasePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
