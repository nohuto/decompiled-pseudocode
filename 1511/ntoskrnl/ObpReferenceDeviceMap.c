/*
 * XREFs of ObpReferenceDeviceMap @ 0x14041CF70
 * Callers:
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsEqualCurrentServerSilo @ 0x140079760 (PsEqualCurrentServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     PsGetProcessServerSilo @ 0x14041CF3C (PsGetProcessServerSilo.c)
 *     PsReferenceImpersonationToken @ 0x1404978B0 (PsReferenceImpersonationToken.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // r13
  __int64 Process; // rbp
  void *ProcessServerSilo; // rsi
  struct _KTHREAD *v8; // rax
  unsigned __int64 *v9; // rsi
  __int64 v10; // rdi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rtt
  PACCESS_TOKEN v14; // rax
  bool v15; // r14
  _QWORD *v16; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v17[10]; // [rsp+28h] [rbp-50h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+90h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v15 = !PsEqualCurrentServerSilo((__int64)ProcessServerSilo);
  if ( ProcessServerSilo )
    ObfDereferenceObject(ProcessServerSilo);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 8) == 0 || a1 )
  {
    if ( !v15 )
      goto LABEL_5;
  }
  else if ( !v15 )
  {
    v14 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v5 = v14;
    if ( !v14 )
      goto LABEL_5;
    if ( *((_QWORD *)v14 + 3) != 999LL )
    {
      if ( (int)SeGetTokenDeviceMap(v14, v17) >= 0 )
      {
        v4 = v17[0];
        if ( v17[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v17[0] + 24LL));
          goto LABEL_19;
        }
      }
LABEL_5:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_19;
      goto LABEL_6;
    }
    v15 = 1;
  }
LABEL_6:
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v16);
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = v16 + 15;
  v10 = KeAbPreAcquire((ULONG_PTR)(v16 + 15), 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, v10, (ULONG_PTR)v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( v15 )
    v4 = *v16;
  else
    v4 = *(_QWORD *)(Process + 1072);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
  _m_prefetchw(v9);
  v11 = *v9;
  if ( (*v9 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v11 - 16;
  if ( (v11 & 2) != 0 || (v12 = *v9, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v3, v11)) )
    ExfReleasePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo((__int64)v16);
LABEL_19:
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
