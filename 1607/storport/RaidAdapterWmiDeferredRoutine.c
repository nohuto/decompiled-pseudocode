/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1C0039420
 * Callers:
 *     <none>
 * Callees:
 *     StorPortGetLogicalUnit @ 0x1C00017B0 (StorPortGetLogicalUnit.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     memmove @ 0x1C001AA40 (memmove.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  union _SLIST_HEADER *DeviceExtension; // rsi
  char v4; // dl
  struct _DEVICE_OBJECT *v5; // rdi
  __int64 LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v8; // rbp

  DeviceExtension = (union _SLIST_HEADER *)DeviceObject->DeviceExtension;
  v4 = *(_BYTE *)(a2 + 32);
  v5 = DeviceObject;
  if ( v4 == -1 )
  {
    if ( (*((_BYTE *)&DeviceExtension[6].HeaderX64 + 8) & 4) == 0 )
      return RaidFreeDeferredItem(DeviceExtension + 92, a2);
  }
  else
  {
    LogicalUnit = StorPortGetLogicalUnit(
                    (__int64)DeviceObject->DeviceExtension,
                    v4,
                    *(_BYTE *)(a2 + 33),
                    *(_BYTE *)(a2 + 34));
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 152) & 0x10) == 0 )
      return RaidFreeDeferredItem(DeviceExtension + 92, a2);
    v5 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v5 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a2 + 40), 0x4D576152u, DeviceExtension->Region);
    v8 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v8[1] = IoWMIDeviceObjectToProviderId(v5);
      *((_QWORD *)v8 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v8) < 0 )
        ExFreePoolWithTag(v8, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem(DeviceExtension + 92, a2);
}
