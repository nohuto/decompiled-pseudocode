/*
 * XREFs of PoSetPowerState @ 0x140137CC8
 * Callers:
 *     IopPowerDispatch @ 0x140137C54 (IopPowerDispatch.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  int v5; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // ecx
  int v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PopIrpSerialLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PopIrpSerialLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PopIrpSerialLock);
  }
  if ( Type )
  {
    if ( Type != DevicePowerState )
      goto LABEL_9;
    v5 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
    if ( v5 == State.SystemState )
      goto LABEL_9;
    v7 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F;
    DeviceObjectExtension->PowerFlags = v7;
    v8 = 16 * (State.SystemState & 0xF);
    goto LABEL_8;
  }
  v5 = DeviceObjectExtension->PowerFlags & 0xF;
  if ( v5 != State.SystemState )
  {
    v7 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
    DeviceObjectExtension->PowerFlags = v7;
    v8 = State.SystemState & 0xF;
LABEL_8:
    DeviceObjectExtension->PowerFlags = v7 | v8;
  }
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PopIrpSerialLock, retaddr);
  else
    _InterlockedAnd64(&PopIrpSerialLock, 0LL);
  __writecr8(CurrentIrql);
  return (POWER_STATE)v5;
}
