/*
 * XREFs of PopAcquireRwLockExclusive @ 0x140098DC8
 * Callers:
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14011AAA0 (PopThermalSxExit.c)
 *     PopThermalPowerSettingCallback @ 0x140126CDC (PopThermalPowerSettingCallback.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140142C6C (PopThermalUpdateTelemetryClientCount.c)
 *     PpmUpdateIdleDomains @ 0x1401E8C54 (PpmUpdateIdleDomains.c)
 *     PopCoolingTelemetryWorker @ 0x1401E9260 (PopCoolingTelemetryWorker.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PopAcquirePowerRequestPushLock @ 0x140455DB0 (PopAcquirePowerRequestPushLock.c)
 *     PopEsEnterSleepShutdown @ 0x1404F7350 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x1404F8D74 (PopEsExitSleep.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopEsWorker @ 0x14050B87C (PopEsWorker.c)
 *     PopTransitionTelemetryOsState @ 0x14050BE6C (PopTransitionTelemetryOsState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x14054B364 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140632690 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 *     PpmRegisterVetoList @ 0x1406331F8 (PpmRegisterVetoList.c)
 *     PoSetThermalActiveCooling @ 0x1406332BC (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x140633354 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x140633430 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x140633730 (PopOrphanCoolingExtension.c)
 *     PopRundownThermalRequests @ 0x140633974 (PopRundownThermalRequests.c)
 *     PopBatteryAdd @ 0x1406367E0 (PopBatteryAdd.c)
 *     PopBatteryEtwCallback @ 0x140636AE4 (PopBatteryEtwCallback.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PopThermalReadCounters @ 0x140638014 (PopThermalReadCounters.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140638208 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PopPolicyDeviceTargetChange @ 0x14063BAF0 (PopPolicyDeviceTargetChange.c)
 *     PopFanUpdateCsState @ 0x14063BCD8 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x14063BD4C (PopFanUpdateRunningState.c)
 *     PopFanWorker @ 0x14063BDDC (PopFanWorker.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14063C334 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PpmApplyProfile @ 0x14063D2A8 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14063D670 (PpmProfileAcDcUpdate.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall PopAcquireRwLockExclusive(__int64 BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v2; // rsi
  struct _KTHREAD *v3; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  __int16 v8; // ax
  struct _KTHREAD *result; // rax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al

  CurrentThread = KeGetCurrentThread();
  v2 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  if ( !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  v3 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  --v3->SpecialApcDisable;
  if ( !v3->AbEntrySummary )
  {
    if ( !v3->AbOrphanedEntrySummary )
    {
      v6 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, BugCheckParameter2);
      goto LABEL_22;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    v3->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v3->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  BugCheckParameter2 = 96 * v5;
  v6 = (__int64)v3->LockEntries + BugCheckParameter2;
  if ( !v6 )
  {
LABEL_22:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = v3->ApcState.Process, (v11 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v7 = -1;
  }
  else
  {
    v7 = *(_DWORD *)(v11 + 8);
  }
  *(_DWORD *)(v6 + 40) = v7;
  BugCheckParameter2 = 0x7FFFFFFFFFFFFFFCLL;
  *(_QWORD *)(v6 + 32) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v8 = v3->SpecialApcDisable + 1;
  v3->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery(BugCheckParameter2);
LABEL_11:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v6, v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  result = KeGetCurrentThread();
  *(_QWORD *)(v2 + 8) = result;
  return result;
}
