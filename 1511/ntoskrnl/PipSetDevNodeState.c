/*
 * XREFs of PipSetDevNodeState @ 0x140099720
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PipEnumerateDevice @ 0x1403D0244 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     PnpRestartDeviceNode @ 0x14060388C (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140603CC0 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopFindLegacyDeviceNode @ 0x140604424 (IopFindLegacyDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1406060FC (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14060642C (PnpStopDeviceSubtree.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1400998AC (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400998E4 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400F4378 (PnpRemoveDeviceActionRequests.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
