/*
 * XREFs of IoGetAttachedDeviceReference @ 0x14001B010
 * Callers:
 *     PopAllocateIrp @ 0x140121CF4 (PopAllocateIrp.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403A338C (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     PnpAsynchronousCall @ 0x1403D2000 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1404F0558 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1404F179C (IopFilterResourceRequirementsCall.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x14050B798 (WmipGetFilePDO.c)
 *     PopFxRegisterDevice @ 0x14051B960 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x1406159EC (PiControlGetDeviceStack.c)
 *     VfIrpSendSynchronousIrp @ 0x1406BFEA8 (VfIrpSendSynchronousIrp.c)
 *     VerifierIoGetAttachedDeviceReference @ 0x1406C074C (VerifierIoGetAttachedDeviceReference.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  __int64 v1; // r9
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rcx
  volatile __int64 *v5; // r8
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *i; // rax
  signed __int64 BugCheckParameter4; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4);
  }
  else
  {
    v6 = _InterlockedExchange64(v5, (__int64)v4);
    if ( v6 )
      KxWaitForLockOwnerShip(v4);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)DeviceObject, 0x10uLL, BugCheckParameter4);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160, v6, v5, v1);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
