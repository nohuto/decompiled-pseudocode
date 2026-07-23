/*
 * XREFs of IopPowerDispatch @ 0x1401249CC
 * Callers:
 *     <none>
 * Callees:
 *     PoSetPowerState @ 0x14012E694 (PoSetPowerState.c)
 */

__int64 __fastcall IopPowerDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG Options; // edx
  unsigned int Status; // ebx
  _DWORD *SecurityContext; // rcx
  int v9; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MinorFunction )
    goto LABEL_8;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v9 = PoPowerSequence;
    *SecurityContext = PoPowerSequence;
    SecurityContext[1] = v9;
    SecurityContext[2] = v9;
    goto LABEL_5;
  }
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
      goto LABEL_5;
LABEL_8:
    Status = a2->IoStatus.Status;
    goto LABEL_6;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options == 1 )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State);
      goto LABEL_5;
    }
    goto LABEL_8;
  }
LABEL_5:
  Status = 0;
  a2->IoStatus.Status = 0;
LABEL_6:
  pIofCompleteRequest(a2, 0);
  return Status;
}
