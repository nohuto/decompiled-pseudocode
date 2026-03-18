/*
 * XREFs of PiSwCloseDevice @ 0x1405391A8
 * Callers:
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     PiSwCloseDecendents @ 0x140538D44 (PiSwCloseDecendents.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140018004 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x140026498 (IoInvalidateDeviceRelations.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT *v5; // rbx
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
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(*(_QWORD *)(Buffer + 112), a2, a3, a4);
    v5 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v5);
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
