/*
 * XREFs of UsbhGetBusInterface @ 0x1C0019140
 * Callers:
 *     UsbhBusIfAddDevice @ 0x1C0016480 (UsbhBusIfAddDevice.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetBusInterface(
        PDEVICE_OBJECT DeviceObject,
        void *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  unsigned __int16 v5; // r14
  void *DeviceExtension; // rdi
  size_t v10; // r15
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // rbx
  PIRP Irp; // rax
  IRP *v14; // rbp
  _IO_STACK_LOCATION *v15; // rax
  NTSTATUS Status; // edi
  void *v17; // rdx
  __int64 v18; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v21; // [rsp+48h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-48h] BYREF

  v5 = a4;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  v10 = (unsigned __int16)a4;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)a4, 0x42554855u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)v10);
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)DeviceExtension + 151) + 76LL), 0);
  v14 = Irp;
  if ( Irp )
  {
    Irp->IoStatus.Status = -1073741637;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    if ( IoSetCompletionRoutineEx(DeviceObject, v14, UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
    {
      CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      CurrentStackLocation[-1].Context = &Event;
      CurrentStackLocation[-1].Control = -32;
    }
    v15 = v14->Tail.Overlay.CurrentStackLocation;
    v15[-1].Parameters.WMI.ProviderId = a3;
    v15[-1].Parameters.QueryInterface.Version = a5;
    *(_WORD *)&v15[-1].MajorFunction = 2075;
    v15[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v12;
    v15[-1].Parameters.CreatePipe.Parameters = 0LL;
    v15[-1].Parameters.QueryInterface.Size = v5;
    Status = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v14->IoStatus.Status;
    }
    if ( Status >= 0 )
    {
      if ( v12[1] < a5 || *v12 < v5 )
      {
        LOBYTE(v21) = 0;
        Status = -1073741811;
        UsbhException((int)DeviceObject, 0, 25, (int)v12, 32, -1073741811, 0, usbfile_busif_c, 162, v21);
        (*((void (__fastcall **)(_QWORD))v12 + 3))(*((_QWORD *)v12 + 1));
      }
      else
      {
        memmove(a2, v12, v10);
      }
    }
    IoFreeIrp(v14);
    ExFreePoolWithTag(v12, 0);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v17 = DeviceObject->DeviceExtension;
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
        *(_DWORD *)v18 = 1769169479;
        *(_QWORD *)(v18 + 24) = Status;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
      }
    }
    return (unsigned int)Status;
  }
  else
  {
    ExFreePoolWithTag(v12, 0);
    return 3221225626LL;
  }
}
