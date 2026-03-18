/*
 * XREFs of UsbhPdoPnp_DeviceUsageNotification @ 0x1C00541F0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhRegisterBootDeviceNotification @ 0x1C005770C (UsbhRegisterBootDeviceNotification.c)
 *     UsbhUpdateSqmFlags @ 0x1C006F000 (UsbhUpdateSqmFlags.c)
 *     UsbhPdo_IsDeviceExternal @ 0x1C006F7E8 (UsbhPdo_IsDeviceExternal.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v8; // rbx
  unsigned int Options; // r14d
  unsigned __int8 Lock; // r13
  NTSTATUS Status; // esi
  PIRP v12; // rax
  IRP *v13; // r15
  _IO_STACK_LOCATION *v14; // rax
  _IO_STACK_LOCATION *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-58h] BYREF
  char IsDeviceExternal; // [rsp+98h] [rbp+10h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+18h]

  v6 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options - 1 > 3 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 147), Irp);
      goto LABEL_33;
    }
LABEL_7:
    DeviceObjecta = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v8 + 147));
    v12 = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v13 = v12;
    if ( v12 )
    {
      v12->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v14 = v13->Tail.Overlay.CurrentStackLocation;
      v14[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v14[-1].Context = &Event;
      v14[-1].Control = -32;
      v15 = v13->Tail.Overlay.CurrentStackLocation;
      v15[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v15[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v15[-1].FileObject = CurrentStackLocation->FileObject;
      v15[-1].Parameters.SetLock.Lock = Lock;
      v15[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(DeviceObjecta, v13) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v13->IoStatus.Status;
      IoFreeIrp(v13);
      if ( Status >= 0 )
      {
        if ( Options - 1 <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v8 + 676);
          else
            _InterlockedDecrement(v8 + 676);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v8 + 692);
            else
              _InterlockedDecrement(v8 + 692);
          }
          if ( v8[676] )
            DeviceObject->Flags &= ~0x2000u;
          else
            DeviceObject->Flags |= 0x2000u;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_26;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_31;
LABEL_26:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v8 + 2708) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v17 = UsbhRegisterBootDeviceNotification(DeviceObject, v16, v8 + 680);
        Log(*((_QWORD *)v8 + 147), 256, 1431454276, v17, (__int64)DeviceObject);
      }
      *((_BYTE *)v8 + 2708) = 1;
    }
    goto LABEL_31;
  }
  if ( *((_BYTE *)v8 + 2708) )
    goto LABEL_7;
  Status = -1073741637;
LABEL_31:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_33:
  if ( v8[676] )
  {
    v18 = v8[693];
    if ( (v18 & 0x10) == 0 )
    {
      v8[693] = v18 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
      Status);
  return (unsigned int)Status;
}
