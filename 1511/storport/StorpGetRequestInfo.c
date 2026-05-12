/*
 * XREFs of StorpGetRequestInfo @ 0x1C00152C0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  __int64 v6; // rdi
  IRP *MasterIrp; // rdi
  __int64 v8; // rax
  IO_PRIORITY_HINT IoPriorityHint; // eax
  _FILE_OBJECT *OriginalFileObject; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  v4 = 0;
  if ( !a2 || !a3 )
    return 3238002694LL;
  if ( *(_WORD *)a3 != 1 )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 )
    {
      if ( *(_DWORD *)v6 == 523124044 )
      {
        MasterIrp = *(IRP **)(v6 + 768);
        if ( MasterIrp )
          goto LABEL_15;
      }
    }
    MasterIrp = *(IRP **)(a2 + 80);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 48);
    if ( !v8 || *(_DWORD *)v8 != 523124044 )
      goto LABEL_33;
    MasterIrp = *(IRP **)(v8 + 768);
    if ( MasterIrp )
      goto LABEL_15;
    MasterIrp = *(IRP **)(v8 + 176);
  }
  if ( !MasterIrp )
  {
LABEL_33:
    v4 = 1;
    goto LABEL_34;
  }
LABEL_15:
  if ( (MasterIrp->Flags & 8) != 0 )
  {
    MasterIrp = MasterIrp->AssociatedIrp.MasterIrp;
    if ( !MasterIrp )
      goto LABEL_33;
  }
  IoPriorityHint = IoGetIoPriorityHint(MasterIrp);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = IoPriorityHint;
  *(_DWORD *)(a3 + 8) = (MasterIrp->Flags & 1) != 0;
  if ( (MasterIrp->Flags & 0x42) != 0 )
    *(_DWORD *)(a3 + 8) |= 2u;
  OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
  if ( OriginalFileObject )
  {
    if ( (OriginalFileObject->Flags & 0x20) != 0 )
      *(_DWORD *)(a3 + 8) |= 4u;
    if ( (OriginalFileObject->Flags & 0x18000) != 0 )
      *(_DWORD *)(a3 + 8) |= 8u;
    if ( (OriginalFileObject->Flags & 0x10) != 0 )
      *(_DWORD *)(a3 + 8) |= 0x10u;
  }
  CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation )
    goto LABEL_31;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
    *(_DWORD *)(a3 + 16) = CurrentStackLocation->Parameters.Read.Length;
LABEL_32:
    *(_BYTE *)(a3 + 20) = 0;
    goto LABEL_34;
  }
  if ( CurrentStackLocation->MajorFunction != 4 )
  {
LABEL_31:
    *(_QWORD *)(a3 + 12) = 0LL;
    goto LABEL_32;
  }
  *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
  *(_DWORD *)(a3 + 16) = CurrentStackLocation->Parameters.Read.Length;
  *(_BYTE *)(a3 + 20) = 1;
LABEL_34:
  *(_WORD *)(a3 + 2) = 24;
  if ( v4 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_BYTE *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 4) = 2;
  }
  return 0LL;
}
