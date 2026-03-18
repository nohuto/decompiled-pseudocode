/*
 * XREFs of UsbhQueryD3ColdSupport @ 0x1C0008F68
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C00090F0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhQueryD3ColdSupport(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v7; // rdi
  PIRP Irp; // rax
  IRP *v10; // rbx
  __int64 v11; // rax
  NTSTATUS Status; // eax
  __int64 v13; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v15[9]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int8 v16; // [rsp+E8h] [rbp+6Fh] BYREF

  v4 = PdoExt(a2);
  v16 = 0;
  v5 = v4;
  memset(v15, 0, sizeof(v15));
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  v7 = AttachedDeviceReference;
  if ( AttachedDeviceReference != a2 )
  {
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v10 = Irp;
    if ( Irp )
    {
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( IoSetCompletionRoutineEx(DeviceObject, v10, UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
      {
        v13 = (__int64)&v10->Tail.Overlay.CurrentStackLocation[-1];
        *(_QWORD *)(v13 + 56) = UsbhDeferIrpCompletion;
        *(_QWORD *)(v13 + 64) = &Event;
        *(_BYTE *)(v13 + 3) = -32;
      }
      v11 = (__int64)&v10->Tail.Overlay.CurrentStackLocation[-1];
      *(_QWORD *)(v11 + 24) = v15;
      *(_QWORD *)(v11 + 8) = &GUID_D3COLD_SUPPORT_INTERFACE;
      *(_WORD *)v11 = 2075;
      *(_QWORD *)(v11 + 32) = v5;
      *(_DWORD *)(v11 + 16) = 65608;
      Status = IofCallDriver(v7, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = v10->IoStatus.Status;
      }
      if ( Status >= 0 )
      {
        if ( v15[6] && ((int (__fastcall *)(_QWORD, unsigned __int8 *))v15[6])(v15[1], &v16) >= 0 && v16 )
          *(_DWORD *)(v5 + 1412) |= 0x800000u;
        if ( v15[3] )
          ((void (__fastcall *)(_QWORD))v15[3])(v15[1]);
      }
      IoFreeIrp(v10);
    }
  }
  ObfDereferenceObject(v7);
  return Log((_DWORD)DeviceObject, 256, 1197634409, (_DWORD)a2, v16);
}
