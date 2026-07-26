/*
 * XREFs of ndisSetPowerResume @ 0x1C00DC78C
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetPowerResume(PIRP Irp, __int64 a2, PDEVICE_OBJECT *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v4; // rax

  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetLock + 24) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetLock
                                                                             + 24);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v4 = Irp->Tail.Overlay.CurrentStackLocation;
  v4[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetPowerResumeComplete;
  v4[-1].Context = a3;
  v4[-1].Control = -32;
  IofCallDriver(a3[487], Irp);
  return 259LL;
}
