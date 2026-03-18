/*
 * XREFs of PipSetDevNodeState @ 0x14000962C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 *     PipProcessStartPhase2 @ 0x1404E7068 (PipProcessStartPhase2.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14062E0BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140630334 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x140630728 (PnpStopDeviceSubtree.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PipProcessRestartPhase2 @ 0x14064DF9C (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x1400097B8 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400097F0 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400B59B0 (PnpRemoveDeviceActionRequests.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r14d
  int v5; // edi
  char v6; // bp
  KIRQL v7; // al
  unsigned int v8; // r8d
  KIRQL v9; // r9
  int IsDevNodeDNStarted; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v8, *(unsigned int *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v12;
    v6 = 1;
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLock(&PnpSpinLock, v9);
  if ( v6
    && *(_QWORD *)(a1 + 48)
    && ((unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v4
     || (unsigned int)PipIsDevNodeDNStarted(a1) != v5) )
  {
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, v14, 11LL);
    if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v5 )
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v15, *(_QWORD *)(a1 + 48), 26LL);
  }
  if ( a2 == 788 )
    PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
}
