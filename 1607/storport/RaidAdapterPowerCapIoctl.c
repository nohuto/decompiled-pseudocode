/*
 * XREFs of RaidAdapterPowerCapIoctl @ 0x1C00276E0
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 */

__int64 __fastcall RaidAdapterPowerCapIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // ebx
  _IRP *MasterIrp; // rdi
  signed int v7; // r8d
  unsigned int MdlAddress; // ecx
  __int64 v9; // rax
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x18 || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v7 = -1073741820;
  }
  else if ( *(_DWORD *)&MasterIrp->Type == 1
         && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x18u
         && (MdlAddress = (unsigned int)MasterIrp->MdlAddress, MdlAddress <= 1) )
  {
    v9 = *(_QWORD *)(a1 + 5088);
    if ( v9 && *(_QWORD *)(v9 + 32) )
    {
      v11 = *(_QWORD *)&MasterIrp->Flags;
      v7 = RaidAdapterSetMaxOperationalPower(a1, &v11, MdlAddress == 0);
      if ( v7 >= 0 )
      {
        v3 = 24;
        *(_QWORD *)&MasterIrp->Flags = v11;
      }
    }
    else
    {
      v7 = -1073741637;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  a2->IoStatus.Information = v3;
  return RaidCompleteRequestEx(a2, 0, v7);
}
