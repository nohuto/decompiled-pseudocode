/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140534B48
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140461484 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14068D60C (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessHaltDevice @ 0x140693C40 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x1406973D8 (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140534A94 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    PnpAcquireDependencyRelationsLock(1);
    PnpRequestDeviceRemovalWorker(a1, a1, a2, 2, 0);
    PnpReleaseDependencyRelationsLock();
    return PnpSetTargetDeviceRemove(*(PVOID *)(a1 + 32), 1, a3, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
