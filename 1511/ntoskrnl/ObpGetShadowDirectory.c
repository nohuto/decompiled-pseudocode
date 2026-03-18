/*
 * XREFs of ObpGetShadowDirectory @ 0x14041CE20
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, char a2)
{
  int v2; // eax
  signed __int64 v3; // rbx
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  signed __int64 v10; // rax
  unsigned __int64 v11; // rtt
  __int64 result; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 344);
  v3 = 0LL;
  v5 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 0x10) == 0 )
      return *(_QWORD *)(a1 + 312);
    result = 0LL;
    if ( a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v13);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (unsigned __int64 *)(v13 + 120);
    v8 = KeAbPreAcquire(v13 + 120, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v9 = *(_QWORD *)(a1 + 304);
    if ( v9 )
      v5 = *(_QWORD *)(v9 + 8);
    _m_prefetchw(v7);
    v10 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v10 - 16;
    if ( (v10 & 2) != 0 || (v11 = *v7, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v3, v10)) )
      ExfReleasePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    PsDereferenceMonitorContextServerSilo(v13);
    return v5;
  }
  return result;
}
