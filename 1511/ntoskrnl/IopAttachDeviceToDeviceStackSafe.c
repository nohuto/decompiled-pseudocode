/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x140097FFC
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x140096E90 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x14012638C (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x1401BABD8 (IoAttachDeviceByPointer.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     IopGetDeviceAttachmentBase @ 0x140098944 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     IovAttachDeviceToDeviceStack @ 0x1406B4A80 (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r14
  KIRQL v7; // r15
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v9; // rbx
  __int64 DeviceAttachmentBase; // rax
  __int64 v11; // rcx
  unsigned int DeviceType; // eax
  int v13; // ecx

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
    DeviceAttachmentBase = IopGetDeviceAttachmentBase(a2);
    if ( DeviceAttachmentBase )
      v11 = *(_QWORD *)(*(_QWORD *)(DeviceAttachmentBase + 312) + 40LL);
    else
      v11 = 0LL;
    if ( v11 && *(int *)(v11 + 396) < 0 )
      PnpRequestDeviceAction(*(PVOID *)(v11 + 32), 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v7);
  DeviceType = a2->DeviceType;
  if ( DeviceType <= 0x14 )
  {
    v13 = 1048840;
    if ( _bittest(&v13, DeviceType) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 32))(a1, a2);
    }
  }
  return v9;
}
