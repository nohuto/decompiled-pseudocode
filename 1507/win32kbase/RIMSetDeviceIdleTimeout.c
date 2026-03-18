/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C00750A0
 * Callers:
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(__int64 a1, __int64 a2)
{
  NTSTATUS Status; // ebx
  _DWORD *v3; // rax
  struct _FILE_OBJECT *v4; // rbp
  void *v5; // rsi
  PIRP v6; // rax
  struct _DEVICE_OBJECT *v7; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  PVOID v12; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  Status = RIMGetDeviceObjectPointer(a1 + 208, a2, 3LL, &Handle, &v12, &Object);
  if ( Status >= 0 )
  {
    ObfReferenceObject(Object);
    v3 = (_DWORD *)Win32AllocPoolNonPaged();
    v4 = (struct _FILE_OBJECT *)v12;
    v5 = v3;
    if ( v3 )
    {
      *v3 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v6 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v5, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      if ( v6 )
      {
        v7 = (struct _DEVICE_OBJECT *)Object;
        v6->Tail.Overlay.CurrentStackLocation[-1].FileObject = v4;
        Status = IofCallDriver(v7, v6);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x39u,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
        Status = -1073741668;
      }
      Win32FreePool();
    }
    if ( Status < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x3Au,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
    ObfDereferenceObject(v4);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
