/*
 * XREFs of ObDereferenceDeviceMap @ 0x14045FCC0
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x14067F0C0 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 *v5; // rbx
  _BYTE *v6; // rax
  _BYTE *v7; // rdi
  void *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rtt

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(ProcessServerSilo);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(ServerSiloGlobals + 120);
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(ServerSiloGlobals + 120), 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    v7[26] |= 1u;
  v8 = *(void **)(a1 + 1072);
  *(_QWORD *)(a1 + 1072) = 0LL;
  _m_prefetchw(v5);
  v9 = *v5;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v10 = v9 - 16;
  else
    v10 = 0LL;
  if ( (v9 & 2) != 0 || (v11 = *v5, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v10, v9)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v8 )
    ObfDereferenceDeviceMap(v8);
}
