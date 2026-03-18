/*
 * XREFs of rimIoBuildDeviceConfigRequest @ 0x1C0087120
 * Callers:
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

IRP *__fastcall rimIoBuildDeviceConfigRequest(__int64 a1, __int64 a2, const void *a3, ULONG a4)
{
  PIRP Irp; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *v9; // rax
  IRP *result; // rax

  Irp = IoAllocateIrp(*(_BYTE *)(a2 + 76), 0);
  v7 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Create.Options = a4;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 721297;
    v9 = (struct _IRP *)Win32AllocPoolNonPaged();
    v7->AssociatedIrp.MasterIrp = v9;
    if ( v9 )
    {
      memmove(v9, a3, a4);
      v7->UserBuffer = 0LL;
      result = v7;
      v7->Flags = 16;
      return result;
    }
    IoFreeIrp(v7);
  }
  return 0LL;
}
