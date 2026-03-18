/*
 * XREFs of ObfDereferenceDeviceMap @ 0x140422458
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x140422220 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ObDereferenceDeviceMap @ 0x140460DF0 (ObDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404CAA3C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404CABA0 (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // edi
  bool v3; // zf
  signed __int32 v4; // eax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  unsigned __int64 v12; // rtt
  void *v13; // rcx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rtt

  v1 = *((_DWORD *)P + 6);
  if ( v1 != 1 )
  {
    do
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_3;
    }
    while ( v4 != 1 );
  }
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)P + 8));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(ServerSiloGlobals + 120);
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(ServerSiloGlobals + 120), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    v9[26] |= 1u;
  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
  if ( v1 != 1 )
  {
    _m_prefetchw(v7);
    v14 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    else
      v15 = v14 - 16;
    if ( (v14 & 2) != 0 || (v16 = *v7, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v15, v14)) )
      ExfReleasePushLock(v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_3:
    if ( v1 <= 0 )
      __fastfail(0xEu);
    return;
  }
  *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
  _m_prefetchw(v7);
  v10 = *v7;
  if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = v10 - 16;
  else
    v11 = 0LL;
  if ( (v10 & 2) != 0 || (v12 = *v7, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v7, v11, v10)) )
    ExfReleasePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = (void *)*((_QWORD *)P + 8);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x6D44624Fu);
  ZwClose(*((HANDLE *)P + 2));
  ObfDereferenceObject(*(PVOID *)P);
  ExFreePoolWithTag(P, 0x6D44624Fu);
}
