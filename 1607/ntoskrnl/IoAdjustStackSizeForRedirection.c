/*
 * XREFs of IoAdjustStackSizeForRedirection @ 0x1401C87B8
 * Callers:
 *     <none>
 * Callees:
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IoAdjustStackSizeForRedirection(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  int v4; // esi
  KIRQL v7; // al
  char v8; // bl
  KIRQL v9; // bp
  CCHAR StackSize; // al
  char v11; // bl
  PDEVICE_OBJECT AttachedDevice; // r8
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax

  v4 = 0;
  v7 = KeAcquireQueuedSpinLock(0xAuLL);
  v8 = *(_BYTE *)(a2 + 76);
  v9 = v7;
  StackSize = DeviceObject->StackSize;
  if ( StackSize < v8 )
  {
    v11 = v8 - StackSize;
    AttachedDevice = IoGetAttachedDevice(DeviceObject);
    if ( (unsigned __int16)v11 + (unsigned __int16)AttachedDevice->StackSize < 125 )
    {
      while ( AttachedDevice != DeviceObject )
      {
        DeviceObjectExtension = AttachedDevice->DeviceObjectExtension;
        AttachedDevice->StackSize += v11;
        AttachedDevice = DeviceObjectExtension->AttachedTo;
      }
      DeviceObject->StackSize += v11;
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    v11 = 0;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v9);
  if ( v4 >= 0 && a3 )
    *a3 = v11;
  return (unsigned int)v4;
}
