/*
 * XREFs of UsbhQueryParentHubConfig @ 0x1C0024FC4
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFreeDeviceConfigInfo @ 0x1C00250D8 (UsbhFreeDeviceConfigInfo.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhPropagateUxdState @ 0x1C0057048 (UsbhPropagateUxdState.c)
 */

__int64 __fastcall UsbhQueryParentHubConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT *v5; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  PIRP v8; // rax
  NTSTATUS v9; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v5 = (PDEVICE_OBJECT *)FdoExt(a1, a2, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xCCuLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xCCuLL);
  *v7 = 1;
  v7[1] = 204;
  v8 = IoBuildDeviceIoControlRequest(0x22044Fu, v5[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v8 )
  {
    ExFreePoolWithTag(v7, 0);
    return 3221225626LL;
  }
  v8->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v7;
  v9 = IofCallDriver(v5[151], v8);
  if ( v9 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v9 = 0;
  }
  if ( v9 >= 0 && IoStatusBlock.Status >= 0 && (v7[33] & 1) != 0 )
    UsbhPropagateUxdState(a1, v7 + 34);
  UsbhFreeDeviceConfigInfo(v7);
  return (unsigned int)v9;
}
