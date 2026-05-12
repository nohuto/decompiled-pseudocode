/*
 * XREFs of RaUnitQueryDeviceRelationsIrp @ 0x1C004C4A0
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 */

__int64 __fastcall RaUnitQueryDeviceRelationsIrp(__int64 a1, IRP *a2)
{
  _QWORD *Pool; // rax
  unsigned int Status; // edi
  unsigned __int64 v6; // rsi

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    Pool = RaidAllocatePool(PagedPool, 0x10uLL, 0x52446152u, *(_QWORD *)(a1 + 8));
    Status = 0;
    v6 = (unsigned __int64)Pool;
    if ( Pool )
    {
      *(_DWORD *)Pool = 1;
      Pool[1] = *(_QWORD *)(a1 + 8);
      ObfReferenceObject(*(PVOID *)(a1 + 8));
      a2->IoStatus.Information = v6;
    }
    else
    {
      Status = -1073741801;
    }
  }
  else
  {
    Status = a2->IoStatus.Status;
  }
  return RaidCompleteRequestEx(a2, 0, Status);
}
