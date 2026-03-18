/*
 * XREFs of IoGetAttachedDeviceReference @ 0x1400CF130
 * Callers:
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     IoBuildPoDeviceNotifyList @ 0x1403EC46C (IoBuildPoDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     PopFxRegisterDevice @ 0x1405AC800 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
 *     VerifierIoGetAttachedDeviceReference @ 0x140741F40 (VerifierIoGetAttachedDeviceReference.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // bp
  char *v3; // rcx
  _QWORD *v4; // rdx
  struct _DEVICE_OBJECT *i; // rax
  signed __int64 BugCheckParameter4; // rbx
  volatile signed __int64 **v7; // rbx
  __int64 v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

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
  v7 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v7, retaddr);
    goto LABEL_11;
  }
  _m_prefetchw(v7);
  v8 = (__int64)*v7;
  if ( *v7 )
    goto LABEL_15;
  if ( v7 != (volatile signed __int64 **)_InterlockedCompareExchange64(v7[1], 0LL, (signed __int64)v7) )
  {
    v8 = KxWaitForLockChainValid((__int64 *)v7);
LABEL_15:
    *v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_11:
  __writecr8(CurrentIrql);
  return DeviceObject;
}
