/*
 * XREFs of ndisIovInitVf @ 0x1C00D9B08
 * Callers:
 *     ndisMSetSriovAttributes @ 0x1C00B33AC (ndisMSetSriovAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovInitVf(__int64 a1)
{
  unsigned int v2; // ebx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v5; // rax

  v2 = 0;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 3896) + 76LL) + 1, 0);
  if ( Irp )
  {
    KeInitializeEvent((PRKEVENT)(a1 + 4712), NotificationEvent, 0);
    *(_QWORD *)(a1 + 4696) = Irp;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].DeviceObject = *(_DEVICE_OBJECT **)(a1 + 3896);
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2801671;
    CurrentStackLocation[-1].Parameters.Read.Length = 8;
    Irp->UserBuffer = (void *)(a1 + 4704);
    v5 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = -1073741637;
    v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisIovInvalidateBlockCompletion;
    v5[-1].Context = (void *)a1;
    v5[-1].Control = -32;
    if ( IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 3896), Irp) != 259 )
      KeSetEvent((PRKEVENT)(a1 + 4712), 0, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
