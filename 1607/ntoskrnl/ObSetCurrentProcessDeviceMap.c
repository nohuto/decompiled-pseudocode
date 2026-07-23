/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x14048845C
 * Callers:
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // rdi
  unsigned __int64 *CurrentServerSiloGlobals; // rbx
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v3; // rax
  void *v4; // r14
  int TokenDeviceMap; // esi
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rbx
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0LL;
  CurrentServerSiloGlobals = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsReferencePrimaryToken(Process);
  v4 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  if ( *((_QWORD *)v3 + 3) == 999LL )
  {
    CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    v6 = *CurrentServerSiloGlobals;
  }
  else
  {
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v15);
    if ( TokenDeviceMap < 0 )
      goto LABEL_24;
    v6 = v15;
  }
  if ( v6 )
  {
    if ( !CurrentServerSiloGlobals )
      CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = CurrentServerSiloGlobals + 15;
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      v10[26] |= 1u;
    v0 = (void *)Process[1].ActiveProcessors.Bitmap[8];
    Process[1].ActiveProcessors.Bitmap[8] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    _m_prefetchw(v8);
    v11 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v12 = v11 - 16;
    else
      v12 = 0LL;
    if ( (v11 & 2) != 0 || (v13 = *v8, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v12, v11)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_17;
  }
LABEL_24:
  TokenDeviceMap = -1073741767;
LABEL_17:
  ObfDereferenceObject(v4);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
