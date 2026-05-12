/*
 * XREFs of RaidAdapterWmiDeferredRoutine @ 0x1C0036300
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     StorPortGetLogicalUnit @ 0x1C0006740 (StorPortGetLogicalUnit.c)
 *     memmove @ 0x1C0015B80 (memmove.c)
 */

PSLIST_ENTRY __fastcall RaidAdapterWmiDeferredRoutine(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  union _SLIST_HEADER *DeviceExtension; // rsi
  char v5; // dl
  struct _DEVICE_OBJECT *v6; // rdi
  __int64 LogicalUnit; // rax
  _DWORD *Pool; // rax
  _DWORD *v9; // rbp

  DeviceExtension = (union _SLIST_HEADER *)DeviceObject->DeviceExtension;
  v5 = *(_BYTE *)(a2 + 32);
  v6 = DeviceObject;
  if ( v5 == -1 )
  {
    if ( (*((_BYTE *)&DeviceExtension[6].HeaderX64 + 8) & 4) == 0 )
      return RaidFreeDeferredItem(DeviceExtension + 92, a2);
  }
  else
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 33);
    LogicalUnit = StorPortGetLogicalUnit((__int64)DeviceObject->DeviceExtension, v5, a3, *(_BYTE *)(a2 + 34));
    if ( !LogicalUnit || (*(_BYTE *)(LogicalUnit + 144) & 0x10) == 0 )
      return RaidFreeDeferredItem(DeviceExtension + 92, a2);
    v6 = *(struct _DEVICE_OBJECT **)(LogicalUnit + 8);
  }
  if ( v6 )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, *(unsigned int *)(a2 + 40), 0x4D576152u, DeviceExtension->Region);
    v9 = Pool;
    if ( Pool )
    {
      memmove(Pool, (const void *)(a2 + 40), *(unsigned int *)(a2 + 40));
      v9[1] = IoWMIDeviceObjectToProviderId(v6);
      *((_QWORD *)v9 + 2) = MEMORY[0xFFFFF78000000014];
      if ( IoWMIWriteEvent(v9) < 0 )
        ExFreePoolWithTag(v9, 0x4D576152u);
    }
  }
  return RaidFreeDeferredItem(DeviceExtension + 92, a2);
}
