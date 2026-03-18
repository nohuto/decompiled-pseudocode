/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C000A860
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhSshResumePort @ 0x1C001EC20 (UsbhSshResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B2B0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC50 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  PIRP v7; // rax
  IRP *v8; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r9d
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x220013u,
         *(PDEVICE_OBJECT *)(v6 + 1208),
         0LL,
         0,
         0LL,
         0,
         1u,
         &Object,
         &IoStatusBlock);
  v8 = v7;
  if ( v7 )
  {
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v8);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v11 = *a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1400074357;
      *(_QWORD *)(v13 + 24) = Status;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
    }
  }
  return (unsigned int)Status;
}
