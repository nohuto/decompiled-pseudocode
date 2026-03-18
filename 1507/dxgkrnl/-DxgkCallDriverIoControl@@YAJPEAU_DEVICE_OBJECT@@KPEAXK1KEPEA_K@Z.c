/*
 * XREFs of ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C00D6540
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00D6350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0185310 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DxgkCallDriverIoControl(
        PDEVICE_OBJECT DeviceObject,
        __int64 IoControlCode,
        PVOID InputBuffer,
        __int64 InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  ULONG v6; // edi
  ULONG v8; // ebp
  IRP *v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v6 = InputBufferLength;
  v8 = IoControlCode;
  if ( KeGetCurrentIrql() )
  {
    v12 = WdLogNewEntry5_WdAssertion(DeviceObject, IoControlCode, InputBuffer, InputBufferLength);
    *(_QWORD *)(v12 + 24) = 40LL;
    WdLogEvent5_WdAssertion(v12);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          v8,
          DeviceObject,
          InputBuffer,
          v6,
          OutputBuffer,
          OutputBufferLength,
          1u,
          &Event,
          &IoStatusBlock);
  if ( !v10 )
    return -1073741801;
  result = IofCallDriver(DeviceObject, v10);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
