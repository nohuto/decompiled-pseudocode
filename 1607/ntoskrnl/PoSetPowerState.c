/*
 * XREFs of PoSetPowerState @ 0x14012E694
 * Callers:
 *     IopPowerDispatch @ 0x1401249CC (IopPowerDispatch.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  int v5; // ebx
  KIRQL v6; // r9
  unsigned int v7; // ecx
  unsigned int v9; // r8d

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type )
  {
    if ( Type == DevicePowerState )
    {
      v5 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
      if ( v5 != State.SystemState )
      {
        v7 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F;
        DeviceObjectExtension->PowerFlags = v7;
        DeviceObjectExtension->PowerFlags = v7 | (16 * (State.SystemState & 0xF));
      }
    }
  }
  else
  {
    v5 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v5 != State.SystemState )
    {
      v9 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
      DeviceObjectExtension->PowerFlags = v9;
      DeviceObjectExtension->PowerFlags = v9 | State.SystemState & 0xF;
    }
  }
  KeReleaseSpinLock(&PopIrpSerialLock, v6);
  return (POWER_STATE)v5;
}
