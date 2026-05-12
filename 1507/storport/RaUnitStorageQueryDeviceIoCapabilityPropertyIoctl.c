/*
 * XREFs of RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0050504
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C004C0D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  unsigned int Length; // r10d
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v8; // rax

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v6 = -1073741637;
      return RaidCompleteRequestEx(a2, 0, v6);
    }
  }
  else
  {
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v6 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v6);
    }
    if ( Length >= 0x10 )
    {
      *(_QWORD *)&MasterIrp->Type = 0LL;
      MasterIrp->MdlAddress = 0LL;
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 )
      {
        LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(v8 + 512);
        HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 508LL);
      }
      a2->IoStatus.Information = 16LL;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
    }
  }
  v6 = 0;
  return RaidCompleteRequestEx(a2, 0, v6);
}
