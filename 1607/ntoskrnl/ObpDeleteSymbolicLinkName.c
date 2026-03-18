/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x1404EFC88
 * Callers:
 *     ObpDeleteNameCheck @ 0x140406620 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObShutdownSystem @ 0x1406655DC (ObShutdownSystem.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // r15d
  __int64 v3; // r14
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rdi
  unsigned __int64 *v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  int v11; // edx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v3 )
    {
      CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v6 = CurrentServerSiloGlobals;
      --CurrentThread->SpecialApcDisable;
      v7 = (unsigned __int64 *)(CurrentServerSiloGlobals + 120);
      v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
      if ( v9 )
        v9[26] |= 1u;
      v10 = (unsigned int)(v1 - 1);
      v11 = ~(1 << (v1 - 1));
      *(_DWORD *)(v3 + 28) &= v11;
      *(_BYTE *)(v10 + v3 + 32) = 0;
      if ( v3 == *(_QWORD *)v6 )
        *((_DWORD *)v6 + 2) &= v11;
      else
        --*(_DWORD *)&v6[4 * v10 + 12];
      _m_prefetchw(v7);
      v12 = *v7;
      if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v13 = 0LL;
      else
        v13 = v12 - 16;
      if ( (v12 & 2) != 0 || (v14 = *v7, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v13, v12)) )
        ExfReleasePushLock(v7);
      KeAbPostRelease((ULONG_PTR)v7);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}
