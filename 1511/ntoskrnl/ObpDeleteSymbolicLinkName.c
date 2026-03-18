/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x1404C4630
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // r14d
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v3 )
    {
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v14);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v5 = (unsigned __int64 *)(v14 + 120);
      v6 = KeAbPreAcquire(v14 + 120, 0LL, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      v8 = v14;
      v9 = (unsigned int)(v1 - 1);
      v10 = ~(1 << (v1 - 1));
      *(_DWORD *)(v3 + 28) &= v10;
      *(_BYTE *)(v9 + v3 + 32) = 0;
      if ( v3 == *(_QWORD *)v8 )
        *(_DWORD *)(v8 + 8) &= v10;
      else
        --*(_DWORD *)(v8 + 4 * v9 + 12);
      _m_prefetchw(v5);
      v11 = *v5;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v12 = 0LL;
      else
        v12 = v11 - 16;
      if ( (v11 & 2) != 0 || (v13 = *v5, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v12, v11)) )
        ExfReleasePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      PsDereferenceMonitorContextServerSilo(v14);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
