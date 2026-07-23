/*
 * XREFs of PipRestoreDevNodeState @ 0x140084EBC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404837DC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpDeleteLockedDeviceNode @ 0x140485CFC (PnpDeleteLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404864A4 (PnpRequestDeviceRemovalWorker.c)
 *     PnpCancelStopDeviceNode @ 0x14062FFD4 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x140009364 (PipAreDriversLoadedWorker.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
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
