/*
 * XREFs of PsGetMonitorContextServerSilo @ 0x1400CEAC0
 * Callers:
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     EtwWriteKMSecurityEvent @ 0x140164310 (EtwWriteKMSecurityEvent.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     EtwpValidateEnableNotification @ 0x1404D5D50 (EtwpValidateEnableNotification.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     ObDereferenceDeviceMap @ 0x14050423C (ObDereferenceDeviceMap.c)
 *     ExpWnfDeleteScopeById @ 0x1405043FC (ExpWnfDeleteScopeById.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 *     ObpGetShadowDirectory @ 0x140510DC0 (ObpGetShadowDirectory.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14053F768 (ExpWnfEnumerateScopeInstances.c)
 *     ObpCreateSymbolicLinkName @ 0x140551904 (ObpCreateSymbolicLinkName.c)
 *     PerfDiagpRestartCKCL @ 0x140558A0C (PerfDiagpRestartCKCL.c)
 *     ObpDeleteSymbolicLinkName @ 0x14055B27C (ObpDeleteSymbolicLinkName.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405BA3D8 (ObIsDosDeviceLocallyMapped.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     EtwpRegisterSecurityProvider @ 0x1405C2950 (EtwpRegisterSecurityProvider.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 *     PspInitializeServerSiloDeferred @ 0x1406C1E74 (PspInitializeServerSiloDeferred.c)
 *     PspNotifySeverSiloDeletion @ 0x1406C2388 (PspNotifySeverSiloDeletion.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 *     EtwpPsProvTraceThread @ 0x1406E4CDC (EtwpPsProvTraceThread.c)
 *     ExpWnfDeleteScopeInstances @ 0x1406FC3FC (ExpWnfDeleteScopeInstances.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PspGetServerSiloForSilo @ 0x1400CEE80 (PspGetServerSiloForSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PsGetMonitorContextServerSilo(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned int v5; // r13d
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  _QWORD *ServerSiloForSilo; // rax
  __int16 v14; // ax
  _DWORD *v15; // rbp
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v19; // rcx
  char *v20; // rdi
  int SessionId; // eax
  __int16 v22; // ax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v25; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  unsigned __int8 AbOrphanedEntrySummary; // al
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *(unsigned int *)(a1 + 120);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a2 == (_QWORD *)-1LL )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      if ( (PspDebugFlags & 2) != 0 )
        __debugbreak();
      v7 = 0LL;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->Process;
      --CurrentThread->KernelApcDisable;
      v11 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&Process[1], v11, &Process[1]);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      v12 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
      if ( v12 == -3LL )
        v12 = Process[2].ActiveProcessors.Bitmap[12];
      ServerSiloForSilo = (_QWORD *)PspGetServerSiloForSilo(v12);
      v7 = ServerSiloForSilo;
      if ( ServerSiloForSilo )
        ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(&Process[1]);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      v14 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(a1);
      }
      v6 = a3;
    }
    LOBYTE(a1) = 1;
  }
  else
  {
    LOBYTE(a1) = 0;
  }
  if ( v7 )
  {
    if ( ((PspDebugFlags & 0x10) != 0 && *(int *)(v7[32] + 112LL) < 1 || *(int *)(v7[32] + 112LL) >= 3)
      && (PspDebugFlags & 0x20) != 0 )
    {
      __debugbreak();
    }
    v15 = (_DWORD *)v7[32];
  }
  else
  {
    v15 = &InfrastructureSiloGlobals;
  }
  if ( (_BYTE)a1 && v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  if ( (unsigned int)v4 >= v15[18] )
  {
    *v6 = 0LL;
    return 3221225485LL;
  }
  if ( !*(_BYTE *)(v8 + 125) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&SiloMonitorNonpagedContextSpinLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&SiloMonitorNonpagedContextSpinLock);
    }
    goto LABEL_39;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  if ( KiAbEnabled )
  {
    v17 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v17, (ULONG_PTR)&SiloMonitorLock, KeGetCurrentIrql(), 0LL);
    --v17->SpecialApcDisable;
    if ( !v17->AbEntrySummary )
    {
      if ( !v17->AbOrphanedEntrySummary )
      {
        v20 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v17, &SiloMonitorLock);
        goto LABEL_73;
      }
      AbOrphanedEntrySummary = v17->AbOrphanedEntrySummary;
      v17->AbOrphanedEntrySummary = 0;
      v17->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v17->AbEntrySummary;
    _BitScanForward((unsigned int *)&v19, AbEntrySummary);
    v17->AbEntrySummary = AbEntrySummary & ~(1 << v19);
    a1 = 96 * v19;
    v20 = (char *)v17->LockEntries + a1;
    if ( v20 )
    {
      if ( (unsigned __int64)&SiloMonitorLock < 0xFFFFF90000000000uLL
        || (unsigned __int64)&SiloMonitorLock >= 0xFFFFF98000000000uLL )
      {
        SessionId = -1;
      }
      else
      {
        SessionId = MmGetSessionIdEx(v17->ApcState.Process);
      }
      *((_DWORD *)v20 + 10) = SessionId;
      a1 = 0x7FFFFFFFFFFFFFFCLL;
      *((_QWORD *)v20 + 4) = (unsigned __int64)&SiloMonitorLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_31:
      v22 = v17->SpecialApcDisable + 1;
      v17->SpecialApcDisable = v22;
      if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery(a1);
      goto LABEL_34;
    }
LABEL_73:
    _interlockedbittestandset((volatile signed __int32 *)&v17->116 + 1, 0xFu);
    goto LABEL_31;
  }
  v20 = 0LL;
LABEL_34:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v20, &SiloMonitorLock);
  if ( v20 )
    v20[26] |= 1u;
  CurrentIrql = 0;
LABEL_39:
  v25 = *(_QWORD *)(*((_QWORD *)v15 + 8) + 8 * v4) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v25 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 48));
    *v6 = v25 + 96;
  }
  else
  {
    *v6 = 0LL;
    v5 = -1073741275;
  }
  if ( *(_BYTE *)(v8 + 125) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&SiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v26);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&SiloMonitorNonpagedContextSpinLock, retaddr);
    else
      _InterlockedAnd64(&SiloMonitorNonpagedContextSpinLock, 0LL);
    __writecr8(CurrentIrql);
  }
  return v5;
}
