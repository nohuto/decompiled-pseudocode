/*
 * XREFs of PiSwCloseDevice @ 0x1404C3900
 * Callers:
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x1404C6390 (PiSwCloseDescendants.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x14009ECD4 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwBusRelationRemove @ 0x1404C3A38 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1404C3AB4 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x140645918 (PiSwQueuedCreateInfoFree.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(__int64 a1)
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( *(_QWORD *)(a1 + 88) )
  {
    PiSwQueuedCreateInfoFree(*(_QWORD *)(a1 + 88));
    *(_QWORD *)(Buffer + 88) = 0LL;
    a1 = Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*(_QWORD *)(Buffer + 112));
    v2 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
      PiSwBusRelationRemove();
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    return (struct _DEVICE_OBJECT *)PiSwDeviceDereference(Buffer);
  }
  return result;
}
