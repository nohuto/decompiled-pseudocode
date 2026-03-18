/*
 * XREFs of ACPIDockIrpQueryDeviceRelations @ 0x1C0078630
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0065A58 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00786BC (ACPIDockIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIDockIrpQueryDeviceRelations(void *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // rdx
  int TargetRelation; // eax
  unsigned int Status; // ebx
  unsigned __int64 Information; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Information = a2->IoStatus.Information;
  v4 = CurrentStackLocation->Parameters.Read.Length - 1;
  if ( CurrentStackLocation->Parameters.Read.Length == 1 )
  {
    TargetRelation = ACPIDockIrpQueryEjectRelations(a1, v4, &Information);
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_10;
    TargetRelation = ACPIBusIrpQueryTargetRelation(a1, v4, (PVOID *)&Information);
  }
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation != -1073741637 && !Information )
    {
      a2->IoStatus.Information = 0LL;
      a2->IoStatus.Status = TargetRelation;
      goto LABEL_11;
    }
LABEL_10:
    Status = a2->IoStatus.Status;
    goto LABEL_11;
  }
  a2->IoStatus.Status = TargetRelation;
  a2->IoStatus.Information = Information;
LABEL_11:
  IofCompleteRequest(a2, 0);
  return Status;
}
