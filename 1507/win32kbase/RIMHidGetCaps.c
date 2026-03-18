/*
 * XREFs of RIMHidGetCaps @ 0x1C0077BE8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  __int64 (__fastcall **v9)(__int64, __int64); // rdi
  PIRP v10; // rax
  IRP *v11; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v13; // rax
  NTSTATUS Status; // ebx
  GUID *v16; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged();
  v9 = (__int64 (__fastcall **)(__int64, __int64))v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 504) )
    {
      v16 = (GUID *)Win32AllocPoolNonPaged();
      *(_QWORD *)(a1 + 504) = v16;
      if ( !v16 )
        goto LABEL_11;
      *v16 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v11 = v10;
    if ( v10 )
    {
      CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
      v10->RequestorMode = 0;
      v10->IoStatus.Status = -1073741637;
      CurrentStackLocation[-1].MinorFunction = 8;
      v13 = *(_QWORD *)(a1 + 504);
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = v13;
      CurrentStackLocation[-1].Parameters.Create.Options = 65576;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v9;
      Status = IofCallDriver(a2, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x1Fu,
          (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids,
          a2);
      else
        Status = v9[4](a3, a4);
      goto LABEL_8;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Eu,
      (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
LABEL_11:
    Status = -1073741670;
LABEL_8:
    Win32FreePool();
    return (unsigned int)Status;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    0x1Du,
    (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
  return 3221225626LL;
}
