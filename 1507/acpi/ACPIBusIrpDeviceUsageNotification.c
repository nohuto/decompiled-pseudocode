/*
 * XREFs of ACPIBusIrpDeviceUsageNotification @ 0x1C00688D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C00697E4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIBusIrpDeviceUsageNotification(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int v5; // esi
  __int64 DeviceExtension; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rcx
  unsigned __int8 Lock; // al

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v7 = DeviceExtension;
  if ( CurrentStackLocation->Parameters.Create.Options == 5 )
  {
    if ( !CurrentStackLocation->Parameters.SetLock.Lock && (*(_DWORD *)(DeviceExtension + 904) & 0x40000) != 0 )
    {
      v5 = -1073741811;
      goto LABEL_15;
    }
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(DeviceExtension + 736);
  if ( !v8 )
    goto LABEL_5;
  v9 = *(struct _DEVICE_OBJECT **)(v8 + 712);
  if ( !v9 )
  {
    v5 = -1073741810;
    goto LABEL_15;
  }
  v5 = ACPIInternalSendSynchronousIrp(v9);
  if ( v5 >= 0 )
  {
LABEL_5:
    Lock = CurrentStackLocation->Parameters.SetLock.Lock;
    if ( CurrentStackLocation->Parameters.Create.Options == 2 )
    {
      if ( Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 680));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 680));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 684));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 684));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 3 )
    {
      if ( CurrentStackLocation->Parameters.SetLock.Lock )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 688));
      else
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 688));
    }
    if ( CurrentStackLocation->Parameters.Create.Options == 5 )
    {
      *(_QWORD *)(v7 + 904) ^= (*(_DWORD *)(v7 + 904) ^ ((CurrentStackLocation->Parameters.SetLock.Lock != 0) << 18)) & 0x40000;
      Lock = 0;
    }
    if ( Lock )
      PhysicalDeviceObject->Flags &= ~0x2000u;
    IoInvalidateDeviceState(PhysicalDeviceObject);
  }
LABEL_15:
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v5;
}
