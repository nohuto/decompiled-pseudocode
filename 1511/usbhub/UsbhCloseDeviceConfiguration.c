/*
 * XREFs of UsbhCloseDeviceConfiguration @ 0x1C0053604
 * Callers:
 *     UsbhPdoPnp_StopDevice @ 0x1C0054660 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     memset @ 0x1C0029180 (memset.c)
 */

__int64 __fastcall UsbhCloseDeviceConfiguration(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  PDEVICE_OBJECT *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v12; // rdi
  PIRP v13; // rax
  unsigned int Status; // ebx
  NTSTATUS v15; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v6 = (PDEVICE_OBJECT *)FdoExt(a1, a2, (__int64)a3, a4);
  v10 = PdoExt(a2, v7, v8, v9);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x58uLL, 0x42554855u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x58uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(0x220003u, v6[152], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v13 )
  {
    *(_DWORD *)v12 = 88;
    v12[1] = *((_QWORD *)v10 + 144);
    v12[3] = 0LL;
    v13->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v12;
    v15 = IofCallDriver(v6[152], v13);
    Status = v15;
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = v15;
    }
    if ( a3 )
      *a3 = *((_DWORD *)v12 + 1);
  }
  else
  {
    Status = -1073741670;
  }
  ExFreePoolWithTag(v12, 0);
  return Status;
}
