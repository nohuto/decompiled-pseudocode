/*
 * XREFs of ObfDereferenceDeviceMap @ 0x14041D3D4
 * Callers:
 *     ObDereferenceDeviceMap @ 0x1403E3C30 (ObDereferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ObfDereferenceDeviceMap(PVOID P)
{
  signed __int32 v1; // edi
  bool v3; // zf
  signed __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rtt
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)P + 6);
  if ( v1 == 1 )
  {
LABEL_6:
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v15);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v6 = (unsigned __int64 *)(v15 + 120);
    v7 = KeAbPreAcquire(v15 + 120, 0LL, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v1 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF);
    if ( v1 == 1 )
    {
      *(_QWORD *)(*(_QWORD *)P + 304LL) = 0LL;
      _m_prefetchw(v6);
      v9 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v10 = v9 - 16;
      else
        v10 = 0LL;
      if ( (v9 & 2) != 0 || (v11 = *v6, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v10, v9)) )
        ExfReleasePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      ZwClose(*((HANDLE *)P + 2));
      ObfDereferenceObject(*(PVOID *)P);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      _m_prefetchw(v6);
      v12 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v13 = 0LL;
      else
        v13 = v12 - 16;
      if ( (v12 & 2) != 0 || (v14 = *v6, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v13, v12)) )
        ExfReleasePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    if ( v15 )
      PsDereferenceMonitorContextServerSilo(v15);
  }
  else
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)P + 6, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        break;
      if ( v4 == 1 )
        goto LABEL_6;
    }
  }
  if ( v1 <= 0 )
    __fastfail(0xEu);
}
