/*
 * XREFs of GreDeviceIoControlEx @ 0x1C00665F0
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00662A4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C0066360 (bSetDeviceSessionUsage.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     DrvSetMonitorPowerState @ 0x1C006AB94 (DrvSetMonitorPowerState.c)
 *     DrvWaitForMonitorProcessing @ 0x1C006FAD0 (DrvWaitForMonitorProcessing.c)
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C007F188 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C0083B0C (DrvSetMonitorBrightness.c)
 *     ?DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ @ 0x1C00B9F34 (-DrvUpdateRemoteFxDeviceNameFromLuid@@YAJXZ.c)
 *     DrvSetDeviceMonitorPowerState @ 0x1C00BC44C (DrvSetDeviceMonitorPowerState.c)
 *     DrvSetVideoParameters @ 0x1C00BC654 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C00BD5F0 (EngDeviceIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeviceIoControlEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a7,
        BOOLEAN InternalDeviceIoControl)
{
  unsigned int Status; // ebx
  PIRP v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741822;
  if ( !DeviceObject )
    return 3221225480LL;
  if ( InputBufferLength >= 0x2710000
    || OutputBufferLength >= 0x2710000
    || InputBufferLength + OutputBufferLength >= 0x2710000 )
  {
    return 3221225485LL;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v13 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Object,
          &IoStatusBlock);
  if ( v13 )
  {
    if ( gProtocolType )
      v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v13);
    if ( Status == 259 )
    {
      while ( KeWaitForSingleObject(&Object, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      Status = IoStatusBlock.Status;
    }
    *a7 = IoStatusBlock.Information;
  }
  return Status;
}
