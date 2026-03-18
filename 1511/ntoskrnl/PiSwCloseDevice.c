/*
 * XREFs of PiSwCloseDevice @ 0x1404957E8
 * Callers:
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwCloseDescendants @ 0x140496720 (PiSwCloseDescendants.c)
 *     PiSwStopDestroy @ 0x1404967A0 (PiSwStopDestroy.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140090710 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1400D1570 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwBusRelationRemove @ 0x1404944F0 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406114FC (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(_QWORD *a1)
{
  struct _DEVICE_OBJECT *v1; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  _QWORD *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( a1[11] )
  {
    PiSwQueuedCreateInfoFree(a1[11]);
    Buffer[11] = 0LL;
    a1 = Buffer;
  }
  if ( a1[15] )
  {
    *((_DWORD *)a1 + 1) |= 2u;
    v1 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(Buffer[14]);
    v2 = v1;
    if ( v1 )
    {
      IoInvalidateDeviceRelations(v1, SingleBusRelations);
      ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( a1[14] )
      PiSwBusRelationRemove(a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
