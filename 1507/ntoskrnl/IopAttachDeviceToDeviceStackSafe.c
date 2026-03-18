/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x1400D19EC
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x14013138C (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140159CF4 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1401F5E0C (IoAttachDeviceByPointer.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x1400D0EF4 (IopGetDeviceAttachmentBase.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     IovAttachDeviceToDeviceStack @ 0x140734A80 (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r14
  KIRQL v7; // r15
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v9; // rbx
  __int64 DeviceAttachmentBase; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int DeviceType; // eax
  int v14; // ecx

  v3 = *(_QWORD *)(a1 + 312);
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, a2);
  AttachedDevice = IoGetAttachedDevice(a2);
  v9 = AttachedDevice;
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || AttachedDevice->StackSize >= 0x7Du )
  {
    v9 = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = AttachedDevice;
    *(_BYTE *)(a1 + 76) = AttachedDevice->StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceAttachmentBase = IopGetDeviceAttachmentBase((__int64)a2);
    if ( DeviceAttachmentBase )
      v12 = *(_QWORD *)(*(_QWORD *)(DeviceAttachmentBase + 312) + 40LL);
    else
      v12 = 0LL;
    if ( v12 && *(int *)(v12 + 396) < 0 )
      PnpRequestDeviceAction(*(PVOID *)(v12 + 32), 8, 0, v11, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v7);
  DeviceType = a2->DeviceType;
  if ( DeviceType <= 0x14 )
  {
    v14 = 1048840;
    if ( _bittest(&v14, DeviceType) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, a2);
    }
  }
  return v9;
}
