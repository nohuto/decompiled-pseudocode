/*
 * XREFs of DpiPdoDispatchPower @ 0x1C000EDF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C000EFE4 (DpiCorrectPowerAction.c)
 *     DpiPdoSetDevicePower @ 0x1C00E03AC (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char *DeviceExtension; // rdi
  ULONG Options; // eax
  POWER_STATE v7; // ebx
  POWER_STATE v8; // eax
  unsigned int v9; // eax
  NTSTATUS v10; // esi
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction != 3 )
      goto LABEL_13;
    v10 = 0;
LABEL_12:
    Irp->IoStatus.Status = v10;
    goto LABEL_13;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v7.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( Options == 1 )
  {
    KeEnterCriticalRegion();
    if ( DeviceExtension[483] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    v8.SystemState = *(_DWORD *)(DeviceExtension + 284);
    if ( v7.SystemState > v8.SystemState )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, v7);
      v10 = DpiPdoSetDevicePower(
              DeviceObject,
              (unsigned int)v7.SystemState,
              CurrentStackLocation->Parameters.Create.EaLength);
    }
    else if ( v7.SystemState >= v8.SystemState )
    {
      v10 = 0;
    }
    else
    {
      v9 = DpiCorrectPowerAction(
             DeviceObject,
             HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
             CurrentStackLocation->Parameters.Create.EaLength);
      v10 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v7.SystemState, v9);
      PoSetPowerState(DeviceObject, DevicePowerState, v7);
    }
    if ( DeviceExtension[483] )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 3872LL));
    ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( Options )
      goto LABEL_13;
    *((POWER_STATE *)DeviceExtension + 70) = v7;
    v10 = 0;
  }
  if ( v10 != -1073741637 )
    goto LABEL_12;
LABEL_13:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
