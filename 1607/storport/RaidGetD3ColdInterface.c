/*
 * XREFs of RaidGetD3ColdInterface @ 0x1C00104A4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0007ED0 (StorPortExtendedFunction.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidSetD3Cold @ 0x1C0010434 (RaidSetD3Cold.c)
 *     RaUnitStartDeviceIrp @ 0x1C0058E58 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidQueryD3ColdInterface @ 0x1C001059C (RaidQueryD3ColdInterface.c)
 */

__int64 __fastcall RaidGetD3ColdInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v7; // rax
  PVOID Pool; // rax
  void *v9; // rbx
  int D3ColdInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)DeviceExtension )
  {
    if ( *(_DWORD *)DeviceExtension != 1 )
      return 3221225485LL;
    v5 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[183];
      goto LABEL_5;
    }
  }
  else
  {
    v4 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[683];
LABEL_5:
      if ( v7 )
      {
        *a2 = v7;
        return 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x48uLL, 0x57506152u, (__int64)DeviceObject);
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  D3ColdInterface = RaidQueryD3ColdInterface(DeviceObject, Pool);
  if ( D3ColdInterface >= 0 )
  {
    *a2 = v9;
    if ( v4 )
    {
      v4[683] = v9;
    }
    else if ( v5 )
    {
      v5[183] = v9;
    }
  }
  else
  {
    ExFreePoolWithTag(v9, 0x57506152u);
  }
  return (unsigned int)D3ColdInterface;
}
