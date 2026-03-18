/*
 * XREFs of EtwpAddKmRegEntry @ 0x14054C94C
 * Callers:
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     MmIsSessionAddress @ 0x14004ED20 (MmIsSessionAddress.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400ED4D4 (PopDiagTraceSystemLatencyUpdate.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PopDiagTraceFxRundown @ 0x140237234 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14023CD24 (PopThermalTraceRundownEvents.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopTransitionTelemetryOsState @ 0x1405825E0 (PopTransitionTelemetryOsState.c)
 *     PopLoggingInformation @ 0x1406B06C4 (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x1406B2D44 (PopRundownThermalRequests.c)
 *     PopRundownPowerSettings @ 0x1406B5520 (PopRundownPowerSettings.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406B90FC (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopDiagTracePlatformRoleRundown @ 0x1406B9BC4 (PopDiagTracePlatformRoleRundown.c)
 *     ExTraceTimerResolution @ 0x1406EDBEC (ExTraceTimerResolution.c)
 */

__int64 __fastcall EtwpAddKmRegEntry(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v8; // edi
  _BYTE *PoolWithTag; // rax
  _BYTE *v11; // rbx
  __int64 v12; // rcx

  v8 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x52777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v11[98] = 1;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    *((_QWORD *)v11 + 4) = BugCheckParameter2;
    if ( a2 == 2 )
      v11[98] |= 8u;
    if ( a3 )
    {
      *((_QWORD *)v11 + 11) = a3;
      *((_QWORD *)v11 + 10) = a4;
      if ( MmIsSessionAddress(a3) )
      {
        v11[98] |= 0x10u;
        *((_DWORD *)v11 + 14) = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      }
    }
    v12 = *(_QWORD *)(BugCheckParameter2 + 40);
    *(_QWORD *)v11 = v12;
    *((_QWORD *)v11 + 1) = BugCheckParameter2 + 40;
    if ( *(_QWORD *)(v12 + 8) != BugCheckParameter2 + 40 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = v11;
    *(_QWORD *)(BugCheckParameter2 + 40) = v11;
    *((_QWORD *)v11 + 3) = v11 + 16;
    *((_QWORD *)v11 + 2) = v11 + 16;
    v11[98] |= 0x80u;
    *a5 = v11;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
