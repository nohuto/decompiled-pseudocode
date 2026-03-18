/*
 * XREFs of RIMHidGetCaps @ 0x1C000BD6C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 (__fastcall **v10)(__int64, __int64); // rdi
  PIRP v11; // rax
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG_PTR v14; // rax
  int v15; // edx
  NTSTATUS Status; // ebx
  GUID *v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1886417746LL);
  v10 = (__int64 (__fastcall **)(__int64, __int64))v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 544) )
    {
      v18 = (GUID *)Win32AllocPoolNonPaged(16LL, 1886417746LL);
      *(_QWORD *)(a1 + 544) = v18;
      if ( !v18 )
        goto LABEL_13;
      *v18 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v12 = v11;
    if ( v11 )
    {
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->RequestorMode = 0;
      v11->IoStatus.Status = -1073741637;
      CurrentStackLocation[-1].MinorFunction = 8;
      v14 = *(_QWORD *)(a1 + 544);
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = v14;
      CurrentStackLocation[-1].Parameters.Create.Options = 65576;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v10;
      Status = IofCallDriver(a2, v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          3,
          32,
          (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids,
          (char)a2);
      }
      else
      {
        Status = v10[4](a3, a4);
      }
      goto LABEL_8;
    }
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      3,
      31,
      (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
LABEL_13:
    Status = -1073741670;
LABEL_8:
    Win32FreePool(v10);
    return (unsigned int)Status;
  }
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    3,
    30,
    (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
  return 3221225626LL;
}
