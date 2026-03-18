/*
 * XREFs of ?IoBuildDeviceConfigRequest@@YAPEAU_IRP@@KPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C01D42A4
 * Callers:
 *     DeliverConfigRequestWithTimeout @ 0x1C01D4B38 (DeliverConfigRequestWithTimeout.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 */

struct _IRP *__fastcall IoBuildDeviceConfigRequest(__int64 a1, struct _DEVICE_OBJECT *a2, void *a3, unsigned int a4)
{
  size_t v5; // rdi
  PIRP Irp; // rax
  struct _IRP *v7; // rbx
  struct _IRP *result; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP *v10; // rax

  v5 = a4;
  Irp = IoAllocateIrp(a2->StackSize, 0);
  v7 = Irp;
  if ( !Irp )
    return 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Create.Options = v5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 721297;
  v10 = (struct _IRP *)Win32AllocPoolNonPaged(v5, 1751675733LL);
  v7->AssociatedIrp.MasterIrp = v10;
  if ( !v10 )
  {
    IoFreeIrp(v7);
    return 0LL;
  }
  memmove(v10, a3, v5);
  v7->UserBuffer = 0LL;
  result = v7;
  v7->Flags = 16;
  return result;
}
