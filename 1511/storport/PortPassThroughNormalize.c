/*
 * XREFs of PortPassThroughNormalize @ 0x1C003D1F8
 * Callers:
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C003D0B4 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughValidate @ 0x1C0059540 (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughNormalize(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _IRP *MasterIrp; // rdi
  unsigned int Options; // ebp
  _IRP *v8; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( IoIs32bitProcess(a2) )
  {
    if ( Options < 0x2C )
      return 3221225485LL;
    v8 = a2->AssociatedIrp.MasterIrp;
    if ( v8->Type != 44 )
      return 3221225561LL;
    *(_OWORD *)a1 = *(_OWORD *)&v8->Type;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v8->Flags;
    *(_OWORD *)(a1 + 36) = *(_OWORD *)((char *)&v8->AssociatedIrp.SystemBuffer + 4);
    *(_QWORD *)(a1 + 24) = *(&v8->Flags + 1);
    *(_DWORD *)(a1 + 32) = v8->AssociatedIrp.IrpCount;
  }
  else
  {
    if ( Options < 0x38 )
      return 3221225485LL;
    if ( MasterIrp->Type != 56 )
      return 3221225561LL;
    *(_OWORD *)a1 = *(_OWORD *)&MasterIrp->Type;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&MasterIrp->Flags;
    *(_LIST_ENTRY *)(a1 + 32) = MasterIrp->ThreadListEntry;
    *(_QWORD *)(a1 + 48) = MasterIrp->IoStatus.Pointer;
  }
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    *(_BYTE *)(a1 + 7) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  return 0LL;
}
