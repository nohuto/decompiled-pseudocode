/*
 * XREFs of PnpRequestDeviceRemoval @ 0x1404C3E90
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1403F13A8 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x1404E7068 (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140641FDC (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessHaltDevice @ 0x140649834 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x14064DF9C (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x1404C3F44 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    LOBYTE(v8) = a2;
    PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
    PnpReleaseDependencyRelationsLock();
    return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
