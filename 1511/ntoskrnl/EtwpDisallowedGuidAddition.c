/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x1404CFA30
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x14003D380 (PsGetCurrentThreadProcessId.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140097288 (PopDiagTraceSystemLatencyUpdate.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopDiagTraceFxRundown @ 0x1401E97C0 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x1401EE73C (PopThermalTraceRundownEvents.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopDiagTracePowerSetting @ 0x140456770 (PopDiagTracePowerSetting.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404CE210 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x1404CE668 (EtwpBuildNotificationPacket.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     PopLoggingInformation @ 0x1406321B8 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x140633974 (PopRundownThermalRequests.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140639008 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140639AD0 (PopDiagTracePlatformRoleRundown.c)
 *     ExTraceTimerResolution @ 0x14066A648 (ExTraceTimerResolution.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, _DWORD *a2)
{
  signed __int64 v3; // rbx
  _QWORD *result; // rax
  __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  _OWORD *v11; // rdi
  __int64 *v12; // rdi
  signed __int64 v13; // rax
  unsigned __int64 v14; // rtt
  __int64 v15; // r15
  unsigned __int8 v16; // r8
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  char v21; // r9
  _OWORD *v22; // [rsp+D0h] [rbp+10h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  result = EtwpFindGuidEntryByGuid(a1, 0);
  v6 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = result + 48;
    v9 = KeAbPreAcquire((ULONG_PTR)(result + 48), 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v6[49] = (__int64)KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v6, 0LL, 0, &v22);
    v11 = v22;
    *(_DWORD *)v22 = 3;
    *(_OWORD *)((char *)v11 + 40) = *(_OWORD *)a1;
    *((_DWORD *)v11 + 9) = PsGetCurrentThreadProcessId();
    if ( !EtwpIsGuidAllowed((__int64)a2, a1) )
    {
      v12 = (__int64 *)v6[5];
LABEL_8:
      while ( v12 != v6 + 5 )
      {
        v15 = (__int64)v12;
        v12 = (__int64 *)*v12;
        v16 = *(_BYTE *)(v15 + 100);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v15 + 40);
          v18 = 0;
          while ( 1 )
          {
            v19 = 32LL * v18;
            if ( *(_DWORD *)(v19 + v17 + 112) )
            {
              if ( *(unsigned __int16 *)(v19 + v17 + 118) == *a2 )
                break;
            }
            if ( ++v18 >= 8u )
              goto LABEL_8;
          }
          v20 = 1 << v18;
          if ( 1 << v18 && (v16 & v20) != 0 )
          {
            v21 = *(_BYTE *)(v15 + 100);
            *(_BYTE *)(v15 + 100) = v16 & ~v20;
            EtwpCalculateUpdateNotification(v15, v20, v16, v21, 2, 0, &v22);
            EtwpSendDataBlock(v15, (__int64)v22);
          }
        }
      }
    }
    v6[49] = 0LL;
    _m_prefetchw(v8);
    v13 = *v8;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v3 = v13 - 16;
    if ( (v13 & 2) != 0 || (v14 = *v8, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v3, v13)) )
      ExfReleasePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry(v6);
  }
  return result;
}
