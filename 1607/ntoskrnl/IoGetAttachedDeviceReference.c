/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1400C2790
 * Callers:
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403D183C (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     PnpAsynchronousCall @ 0x1403F0A74 (PnpAsynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x140649E68 (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // bp
  char *v3; // rcx
  _QWORD *v4; // rdx
  struct _DEVICE_OBJECT *i; // rax
  signed __int64 BugCheckParameter4; // rbx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, *((_QWORD *)v3 + 1));
  }
  else
  {
    v4 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v3 + 1), (__int64)v3);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)v3, v4);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)DeviceObject, 0x10uLL, BugCheckParameter4);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 20);
  __writecr8(CurrentIrql);
  return DeviceObject;
}
