/*
 * XREFs of ACPIBusIrpQueryDeviceRelations @ 0x1C0065790
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C003673C (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0065818 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0072D48 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00796D0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 */

__int64 __fastcall ACPIBusIrpQueryDeviceRelations(void *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 Length; // rdx
  __int64 v5; // rdx
  int v6; // edx
  int TargetRelation; // eax
  unsigned int Status; // ebx
  unsigned __int64 Information; // [rsp+38h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Information = a2->IoStatus.Information;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (_DWORD)Length )
  {
    v5 = (unsigned int)(Length - 1);
    if ( (_DWORD)v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 != 1 )
        {
LABEL_10:
          Status = a2->IoStatus.Status;
          goto LABEL_8;
        }
        TargetRelation = ACPIBusIrpQueryTargetRelation(a1);
      }
      else
      {
        TargetRelation = ACPIBusAndFilterIrpQueryRemovalRelations(a1, (PVOID *)&Information);
      }
    }
    else
    {
      TargetRelation = ACPIBusAndFilterIrpQueryEjectRelations(a1, v5, &Information);
    }
  }
  else
  {
    TargetRelation = ACPIBusIrpQueryBusRelations(a1, Length, &Information);
  }
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation != -1073741637 && !Information )
    {
      a2->IoStatus.Information = 0LL;
      a2->IoStatus.Status = TargetRelation;
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  a2->IoStatus.Status = TargetRelation;
  a2->IoStatus.Information = Information;
LABEL_8:
  IofCompleteRequest(a2, 0);
  return Status;
}
