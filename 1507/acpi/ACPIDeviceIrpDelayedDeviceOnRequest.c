/*
 * XREFs of ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0037C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIDeviceIrpDelayedDeviceOnRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v5; // rax

  *(_BYTE *)(a1 + 500) = 0;
  if ( a3 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 672));
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.QueryFile.FileInformationClass = *(_OWORD *)&CurrentStackLocation->Parameters.QueryFile.FileInformationClass;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.QueryDeviceRelations + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.QueryDeviceRelations
                                                                                           + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v5 = a2->Tail.Overlay.CurrentStackLocation;
    v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIBuildRegOnRequest;
    v5[-1].Context = ACPIDeviceIrpCompleteRequest;
    v5[-1].Control = -32;
    PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 720), a2);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
