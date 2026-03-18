/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x1404A7A38
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // rsi
  __int64 v1; // rdi
  _KPROCESS *Process; // r13
  PACCESS_TOKEN v3; // rax
  void *v4; // r15
  int TokenDeviceMap; // ebp
  unsigned __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt
  unsigned __int64 *v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsReferencePrimaryToken(Process);
  v4 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  if ( *((_QWORD *)v3 + 3) == 999LL )
  {
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v15);
    v1 = (__int64)v15;
    v6 = *v15;
  }
  else
  {
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v16);
    if ( TokenDeviceMap < 0 )
      goto LABEL_26;
    v6 = v16;
  }
  if ( v6 )
  {
    if ( !v1 )
    {
      PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v17);
      v1 = v17;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (signed __int64 *)(v1 + 120);
    v9 = KeAbPreAcquire(v1 + 120, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 120), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v1 + 120), v9, v1 + 120);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v0 = (void *)Process[1].ActiveProcessors.Bitmap[8];
    Process[1].ActiveProcessors.Bitmap[8] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    _m_prefetchw(v8);
    v11 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v12 = v11 - 16;
    else
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v8, v13 != _InterlockedCompareExchange64(v8, v12, v11)) )
      ExfReleasePushLock((_QWORD *)(v1 + 120));
    KeAbPostRelease(v1 + 120);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_17;
  }
LABEL_26:
  TokenDeviceMap = -1073741767;
LABEL_17:
  if ( v1 )
    PsDereferenceMonitorContextServerSilo(v1);
  ObfDereferenceObject(v4);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
