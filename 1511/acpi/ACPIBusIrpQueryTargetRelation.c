/*
 * XREFs of ACPIBusIrpQueryTargetRelation @ 0x1C0065818
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0065790 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0072BC0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C0078790 (ACPIDockIrpQueryDeviceRelations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBusIrpQueryTargetRelation(PVOID Object, __int64 a2, PVOID *a3)
{
  PVOID PoolWithTag; // rax
  NTSTATUS v6; // edi
  _QWORD *v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x49706341u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v6 = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
  if ( v6 < 0 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
  }
  else
  {
    v7 = *a3;
    *(_DWORD *)v7 = 1;
    v7[1] = Object;
  }
  return (unsigned int)v6;
}
