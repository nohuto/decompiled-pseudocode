/*
 * XREFs of ObpReferenceDeviceMap @ 0x140420CA0
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14048845C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     PsReferenceImpersonationToken @ 0x1404A5010 (PsReferenceImpersonationToken.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // r13
  __int64 Process; // rbp
  __int64 ProcessServerSilo; // rsi
  _QWORD *CurrentServerSiloGlobals; // r15
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  signed __int64 v11; // rax
  __int64 v12; // rtt
  PACCESS_TOKEN v14; // rax
  bool v15; // r14
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+80h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v15 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v15 )
      goto LABEL_3;
  }
  else if ( !v15 )
  {
    v14 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v5 = v14;
    if ( !v14 )
      goto LABEL_3;
    if ( *((_QWORD *)v14 + 3) != 999LL )
    {
      if ( (int)SeGetTokenDeviceMap(v14, v16) >= 0 )
      {
        v4 = v16[0];
        if ( v16[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16[0] + 24LL));
          goto LABEL_17;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_17;
      goto LABEL_4;
    }
    v15 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = KeGetCurrentThread();
  --v9->SpecialApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL, 0);
  if ( _InterlockedCompareExchange64(CurrentServerSiloGlobals + 15, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(CurrentServerSiloGlobals + 15, v10, (ULONG_PTR)(CurrentServerSiloGlobals + 15));
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( v15 )
    v4 = *CurrentServerSiloGlobals;
  else
    v4 = *(_QWORD *)(Process + 1072);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
  _m_prefetchw(CurrentServerSiloGlobals + 15);
  v11 = CurrentServerSiloGlobals[15];
  if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = v11 - 16;
  if ( (v11 & 2) != 0
    || (v12 = CurrentServerSiloGlobals[15], v12 != _InterlockedCompareExchange64(CurrentServerSiloGlobals + 15, v3, v11)) )
  {
    ExfReleasePushLock(CurrentServerSiloGlobals + 15);
  }
  KeAbPostRelease((ULONG_PTR)(CurrentServerSiloGlobals + 15));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_17:
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
