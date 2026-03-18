/*
 * XREFs of PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FAAFC
 * Callers:
 *     PnpCollectOpenHandles @ 0x14068E334 (PnpCollectOpenHandles.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x140006BC8 (IoAcquireVpbSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14067D92C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstPdoStack(_QWORD *Object, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rsi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  KIRQL v9; // al
  void *v10; // rbx
  KIRQL v11; // si
  __int64 Irql; // [rsp+48h] [rbp+10h] BYREF

  Irql = a2;
  v4 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  while ( 1 )
  {
    v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(v4, PnpCollectOpenHandlesCallBack, a3);
    if ( v5 )
      break;
    IoAcquireVpbSpinLock((PKIRQL)&Irql);
    v6 = v4[7];
    v7 = 0LL;
    if ( v6 )
    {
      v7 = *(struct _DEVICE_OBJECT **)(v6 + 8);
      if ( v7 )
        ObfReferenceObjectWithTag(*(PVOID *)(v6 + 8), 0x746C6644u);
    }
    KeReleaseQueuedSpinLock(9uLL, Irql);
    if ( v7 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v7);
      v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(DeviceAttachmentBaseRef, PnpCollectOpenHandlesCallBack, a3);
      ObfDereferenceObjectWithTag(DeviceAttachmentBaseRef, 0x746C6644u);
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      if ( v5 )
        break;
    }
    v9 = KeAcquireQueuedSpinLock(0xAuLL);
    v10 = (void *)v4[3];
    v11 = v9;
    LOBYTE(Irql) = v9;
    if ( v10 )
      ObfReferenceObjectWithTag(v10, 0x746C6644u);
    KeReleaseQueuedSpinLock(0xAuLL, v11);
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = v10;
    if ( !v10 )
      return v5;
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
