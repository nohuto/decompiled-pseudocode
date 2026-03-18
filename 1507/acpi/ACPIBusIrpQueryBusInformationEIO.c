/*
 * XREFs of ACPIBusIrpQueryBusInformationEIO @ 0x1C0079690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBusIrpQueryBusInformationEIO(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  GUID *PoolWithTag; // rax

  v2 = 0;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4D706341u);
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 1LL;
    *PoolWithTag = GUID_BUS_TYPE_ISAPNP;
  }
  else
  {
    v2 = -1073741670;
  }
  a2->IoStatus.Status = v2;
  a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
  IofCompleteRequest(a2, 0);
  return v2;
}
