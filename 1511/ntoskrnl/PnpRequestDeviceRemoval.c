/*
 * XREFs of PnpRequestDeviceRemoval @ 0x14049EA8C
 * Callers:
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PiProcessQueryDeviceState @ 0x1404ECBB8 (PiProcessQueryDeviceState.c)
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14060DBD0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessHaltDevice @ 0x140614DD8 (PiProcessHaltDevice.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PnpSetTargetDeviceRemove @ 0x14049EB40 (PnpSetTargetDeviceRemove.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14049F150 (PnpRequestDeviceRemovalWorker.c)
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
