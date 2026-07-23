/*
 * XREFs of PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD67C
 * Callers:
 *     PnpCollectOpenHandles @ 0x14064299C (PnpCollectOpenHandles.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CF44 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstPdoStack(_QWORD *Object, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rsi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  __int64 v10; // rdx
  KIRQL v11; // al
  void *v12; // rbx
  KIRQL v13; // si
  __int64 Irql; // [rsp+48h] [rbp+10h] BYREF

  Irql = a2;
  v4 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  while ( 1 )
  {
    v6 = PnpHandleEnumerateHandlesAgainstDeviceObject(v4, v5, a3);
    if ( v6 )
      break;
    IoAcquireVpbSpinLock((PKIRQL)&Irql);
    v7 = v4[7];
    v8 = 0LL;
    if ( v7 )
    {
      v8 = *(struct _DEVICE_OBJECT **)(v7 + 8);
      if ( v8 )
        ObfReferenceObjectWithTag(*(PVOID *)(v7 + 8), 0x746C6644u);
    }
    KeReleaseQueuedSpinLock(9uLL, Irql);
    if ( v8 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v8);
      v6 = PnpHandleEnumerateHandlesAgainstDeviceObject(DeviceAttachmentBaseRef, v10, a3);
      ObfDereferenceObjectWithTag(DeviceAttachmentBaseRef, 0x746C6644u);
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      if ( v6 )
        break;
    }
    v11 = KeAcquireQueuedSpinLock(0xAuLL);
    v12 = (void *)v4[3];
    v13 = v11;
    LOBYTE(Irql) = v11;
    if ( v12 )
      ObfReferenceObjectWithTag(v12, 0x746C6644u);
    KeReleaseQueuedSpinLock(0xAuLL, v13);
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = v12;
    if ( !v12 )
      return v6;
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v6;
}
