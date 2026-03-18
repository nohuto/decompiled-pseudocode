/*
 * XREFs of ACPIIoctlRegisterOpRegionHandler @ 0x1C0004540
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00012D0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     RegisterOperationRegionHandler @ 0x1C0065B00 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIIoctlRegisterOpRegionHandler(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi
  __int64 v6; // r10
  _IRP *MasterIrp; // rcx
  int v8; // ebx
  _IRP *v9; // rdx
  _MDL *v10; // rcx
  _MDL *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 704);
  a2->IoStatus.Information = 32LL;
  if ( v3 < 0x20 )
  {
    v8 = -1073741820;
  }
  else if ( v5 < 0x10 )
  {
    v8 = -1073741789;
  }
  else
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1215263297 )
    {
      v8 = RegisterOperationRegionHandler(
             v6,
             *(_DWORD *)&MasterIrp->AllocationProcessorNumber,
             MasterIrp->MdlAddress,
             *(_QWORD *)&MasterIrp->Flags,
             (__int64)MasterIrp->AssociatedIrp.MasterIrp,
             (__int64)&v12);
      if ( v8 < 0 )
      {
        a2->IoStatus.Information = 0LL;
      }
      else
      {
        v9 = a2->AssociatedIrp.MasterIrp;
        v10 = v12;
        *(_DWORD *)&v9->Type = 1215264065;
        v9->MdlAddress = v10;
        a2->IoStatus.Information = 16LL;
      }
    }
    else
    {
      v8 = -1072431089;
    }
  }
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v8;
}
