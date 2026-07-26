/*
 * XREFs of ndisQueryDriverInterface @ 0x1C00D3B44
 * Callers:
 *     ndisQueryReenumerateSelfInterface @ 0x1C00D3C4C (ndisQueryReenumerateSelfInterface.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00D3CC0 (ndisQueryReferenceBusInterface.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

NTSTATUS __fastcall ndisQueryDriverInterface(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        _WORD *a5)
{
  PIRP v8; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(a5, 0, 0x38uLL);
  *a5 = 56;
  a5[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  v8->RequestorMode = 0;
  v8->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = 56;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
  result = IofCallDriver(DeviceObject, v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
