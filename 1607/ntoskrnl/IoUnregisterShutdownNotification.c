/*
 * XREFs of IoUnregisterShutdownNotification @ 0x1403DA0D4
 * Callers:
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmUnlockPagableImageSection @ 0x1400AAC64 (MmUnlockPagableImageSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmLockPagableSectionByHandle @ 0x1404BFFD0 (MmLockPagableSectionByHandle.c)
 */

void __stdcall IoUnregisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // al
  PVOID *v3; // rbx
  KIRQL v4; // bp
  PVOID *v5; // rsi
  PVOID *v6; // rdx
  PVOID **v7; // rax
  PVOID *i; // rbx
  PVOID *v9; // rsi
  PVOID *v10; // rdx
  PVOID **v11; // rax

  MmLockPagableSectionByHandle(ExPageLockHandle);
  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = (PVOID *)IopNotifyShutdownQueueHead;
  v4 = v2;
  while ( v3 != &IopNotifyShutdownQueueHead )
  {
    v5 = v3;
    if ( v3[2] == DeviceObject )
    {
      v6 = (PVOID *)*v3;
      v7 = (PVOID **)v3[1];
      if ( *((PVOID **)*v3 + 1) != v3 || *v7 != v3 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      v3 = (PVOID *)v3[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v5, 0);
    }
    v3 = (PVOID *)*v3;
  }
  for ( i = (PVOID *)IopNotifyLastChanceShutdownQueueHead; i != &IopNotifyLastChanceShutdownQueueHead; i = (PVOID *)*i )
  {
    v9 = i;
    if ( i[2] == DeviceObject )
    {
      v10 = (PVOID *)*i;
      v11 = (PVOID **)i[1];
      if ( *((PVOID **)*i + 1) != i || *v11 != i )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      i = (PVOID *)i[1];
      ObfDereferenceObject(DeviceObject);
      ExFreePoolWithTag(v9, 0);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  MmUnlockPagableImageSection(ExPageLockHandle);
  DeviceObject->Flags &= ~0x800u;
}
