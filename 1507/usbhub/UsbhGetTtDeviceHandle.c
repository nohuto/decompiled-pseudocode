/*
 * XREFs of UsbhGetTtDeviceHandle @ 0x1C00438B0
 * Callers:
 *     UsbhCreateDevice @ 0x1C000A574 (UsbhCreateDevice.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetTtDeviceHandle(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v8; // rbp
  PIRP v10; // rax
  IRP *v11; // rdx
  _IO_STACK_LOCATION *v12; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v8 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  Log(a1, 4, 1735682096, (__int64)a2, a3);
  if ( ((_DWORD)v8[320] & 1) != 0 )
  {
    Log(a1, 4, 1735682097, (__int64)a2, 0LL);
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = IoBuildDeviceIoControlRequest(0x22043Bu, v8[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    v11 = v10;
    if ( v10 )
    {
      v12 = v10->Tail.Overlay.CurrentStackLocation - 1;
      if ( !v12 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      v12->Parameters.WMI.ProviderId = (unsigned __int64)a2;
      v12->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)a3;
      v12->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a4;
      Status = IofCallDriver(v8[151], v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = Status;
      }
      Log(a1, 4, 1735682136, *a2, Status);
      return (unsigned int)IoStatusBlock.Status;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
