/*
 * XREFs of RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C005C008
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0057000 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  unsigned int Length; // r10d
  int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // r8d

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v5 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      v7 = -1073741637;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
  }
  else
  {
    if ( Length < 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = -1073741789;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
    if ( Length < 0x10 )
    {
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      a2->IoStatus.Information = 8LL;
    }
    else
    {
      *(_QWORD *)&MasterIrp->Type = 0LL;
      MasterIrp->MdlAddress = 0LL;
      *(_DWORD *)&MasterIrp->Type = 16;
      *(_DWORD *)(&MasterIrp->Size + 1) = 16;
      v6 = *(_QWORD *)(a1 + 24);
      if ( v6 )
      {
        LODWORD(MasterIrp->MdlAddress) = *(_DWORD *)(v6 + 512);
        HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 508LL);
      }
      a2->IoStatus.Information = 16LL;
    }
  }
  v7 = 0;
  return RaidCompleteRequestEx(a2, 0, v7);
}
