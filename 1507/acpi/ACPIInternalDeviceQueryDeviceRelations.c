/*
 * XREFs of ACPIInternalDeviceQueryDeviceRelations @ 0x1C0072BF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0065A58 (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(void *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // edi
  int TargetRelation; // eax
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    TargetRelation = ACPIBusIrpQueryTargetRelation(a1, (__int64)a2, (PVOID *)&v7);
    Status = TargetRelation;
    if ( TargetRelation >= 0 )
    {
      a2->IoStatus.Information = v7;
      a2->IoStatus.Status = TargetRelation;
      goto LABEL_3;
    }
    if ( TargetRelation != -1073741637 )
    {
      a2->IoStatus.Information = 0LL;
      a2->IoStatus.Status = TargetRelation;
      goto LABEL_3;
    }
  }
  Status = a2->IoStatus.Status;
LABEL_3:
  IofCompleteRequest(a2, 0);
  return Status;
}
