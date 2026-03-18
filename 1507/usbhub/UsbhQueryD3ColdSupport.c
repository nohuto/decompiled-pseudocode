/*
 * XREFs of UsbhQueryD3ColdSupport @ 0x1C001E2C4
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001E1E0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

void __fastcall UsbhQueryD3ColdSupport(PDEVICE_OBJECT DeviceObject, PDEVICE_OBJECT a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v9; // rdi
  PIRP Irp; // rax
  IRP *v11; // rbx
  __int64 v12; // rax
  NTSTATUS Status; // eax
  __int64 v14; // rax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v16[9]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int8 v17; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = PdoExt((__int64)a2, (__int64)a2, a3, a4);
  v17 = 0;
  v7 = v6;
  memset(v16, 0, sizeof(v16));
  AttachedDeviceReference = IoGetAttachedDeviceReference(a2);
  v9 = AttachedDeviceReference;
  if ( AttachedDeviceReference != a2 )
  {
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    v11 = Irp;
    if ( Irp )
    {
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      if ( IoSetCompletionRoutineEx(DeviceObject, v11, UsbhDeferIrpCompletion, &Event, 1u, 1u, 1u) < 0 )
      {
        v14 = (__int64)&v11->Tail.Overlay.CurrentStackLocation[-1];
        *(_QWORD *)(v14 + 56) = UsbhDeferIrpCompletion;
        *(_QWORD *)(v14 + 64) = &Event;
        *(_BYTE *)(v14 + 3) = -32;
      }
      v12 = (__int64)&v11->Tail.Overlay.CurrentStackLocation[-1];
      *(_QWORD *)(v12 + 24) = v16;
      *(_QWORD *)(v12 + 8) = &GUID_D3COLD_SUPPORT_INTERFACE;
      *(_WORD *)v12 = 2075;
      *(_QWORD *)(v12 + 32) = v7;
      *(_DWORD *)(v12 + 16) = 65608;
      Status = IofCallDriver(v9, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = v11->IoStatus.Status;
      }
      if ( Status >= 0 )
      {
        if ( v16[6] && ((int (__fastcall *)(_QWORD, unsigned __int8 *))v16[6])(v16[1], &v17) >= 0 && v17 )
          v7[353] |= 0x800000u;
        if ( v16[3] )
          ((void (__fastcall *)(_QWORD))v16[3])(v16[1]);
      }
      IoFreeIrp(v11);
    }
  }
  ObfDereferenceObject(v9);
  Log((__int64)DeviceObject, 256, 1197634409, (__int64)a2, v17);
}
