/*
 * XREFs of UsbhFdoPnp_DeviceUsageNotification @ 0x1C004B0B0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoPnp_DeviceUsageNotification(struct _DEVICE_OBJECT *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Options; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbp
  int Status; // edi
  PIRP v11; // rbx
  _IO_STACK_LOCATION *v12; // rcx
  _IO_STACK_LOCATION *v13; // rax

  Log((__int64)Context, 2, 1715754318, 0LL, (__int64)Irp);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = FdoExt((__int64)Context, v6, v7, v8);
  if ( IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)v9 + 151), Irp) )
    Status = Irp->IoStatus.Status;
  else
    Status = -1073741823;
  if ( Options - 1 <= 2 && Status >= 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v9 + 151) + 48LL) & 0x2000) != 0 )
      Context->Flags |= 0x2000u;
    else
      Context->Flags &= ~0x2000u;
  }
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0
    && (Status >= 0 && Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock || Options == 4) )
  {
    v11 = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v9 + 151) + 76LL), 0);
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v9 + 659, (signed __int64)v11, 0LL) )
    {
      if ( !v11 )
        goto LABEL_21;
      *((_BYTE *)v9 + 5268) = 1;
      byte_1C0066688 = 0;
      v12 = v11->Tail.Overlay.CurrentStackLocation;
      v12[-1].Parameters.Create.Options = 0;
      v12[-1].Parameters.Read.Length = 0;
      v12[-1].MajorFunction = 15;
      v12[-1].Parameters.Read.ByteOffset.LowPart = 2232235;
      if ( IoSetCompletionRoutineEx(Context, v11, UsbhResetNotificationIrpCompletion, Context, 1u, 1u, 1u) < 0 )
      {
        v13 = v11->Tail.Overlay.CurrentStackLocation;
        v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhResetNotificationIrpCompletion;
        v13[-1].Context = Context;
        v13[-1].Control = -32;
      }
      IofCallDriver(*((PDEVICE_OBJECT *)v9 + 151), v11);
      v11 = 0LL;
    }
    if ( v11 )
      IoFreeIrp(v11);
  }
LABEL_21:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
