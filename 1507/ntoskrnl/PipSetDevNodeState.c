/*
 * XREFs of PipSetDevNodeState @ 0x1400CFB9C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14045E340 (PnpProcessAssignResources.c)
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404E3D54 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpRestartDeviceNode @ 0x14058C398 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14058D9C4 (PnpQueryRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     IopFindLegacyDeviceNode @ 0x14067F04C (IopFindLegacyDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140680E54 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1406811D4 (PnpStopDeviceSubtree.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PipProcessRestartPhase2 @ 0x1406973D8 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PipIsDevNodeDNStarted @ 0x1400CFD80 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400CFDB8 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14013175C (PnpRemoveDeviceActionRequests.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v2; // r14d
  int v3; // esi
  char v4; // bp
  unsigned __int8 CurrentIrql; // r15
  unsigned int v8; // r8d
  int IsDevNodeDNStarted; // eax
  __int64 v10; // rcx
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = 0;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v8 = *(_DWORD *)(a1 + 300);
  if ( v8 != a2 )
  {
    v2 = PipAreDriversLoadedWorker(v8, *(unsigned int *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v10 = *(unsigned int *)(a1 + 388);
    v3 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v11;
    *(_DWORD *)(a1 + 300) = a2;
    v4 = 1;
    *(_DWORD *)(a1 + 4 * v10 + 308) = v11;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( (unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v2
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v3) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, v14, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v3 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v15, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 788 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
