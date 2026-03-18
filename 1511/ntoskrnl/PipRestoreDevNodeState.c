/*
 * XREFs of PipRestoreDevNodeState @ 0x1400DA400
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404A0A7C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140605D40 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1400998AC (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1400998E4 (PipAreDriversLoadedWorker.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipRestoreDevNodeState(__int64 a1)
{
  BOOL v2; // esi
  BOOL IsDevNodeDNStarted; // eax
  __int64 v4; // rcx
  BOOL v5; // edi
  int v6; // r8d
  int v7; // r9d
  KIRQL v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx

  KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v2 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v4 = *(unsigned int *)(a1 + 388);
  v5 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 300) = v6;
  *(_DWORD *)(a1 + 4 * v4 + 308) = v7;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KeReleaseSpinLock(&PnpSpinLock, v8);
  if ( *(_QWORD *)(a1 + 48)
    && (PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v2 || PipIsDevNodeDNStarted(a1) != v5) )
  {
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, v10, 11LL);
    if ( PipIsDevNodeDNStarted(a1) != v5 )
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *(_QWORD *)(a1 + 48), 26LL);
  }
}
