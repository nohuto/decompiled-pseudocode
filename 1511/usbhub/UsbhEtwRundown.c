/*
 * XREFs of UsbhEtwRundown @ 0x1C00092A8
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C0027790 (UsbhEtwEnableCallback.c)
 * Callees:
 *     UsbhAcquireFdoPnpLock @ 0x1C00091F4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquirePdoStateLock @ 0x1C000947C (UsbhAcquirePdoStateLock.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00096A0 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C000B4F0 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C000B5F4 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubInformation @ 0x1C000BE7C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C000E9A0 (UsbhEtwLogPortInformation.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

LONG UsbhEtwRundown()
{
  struct _DEVICE_OBJECT *i; // rdi
  void (__fastcall **p_DeferredRoutine)(_KDPC *, void *, void *, void *); // rbx
  __int64 Flink; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  char *j; // r14
  __int64 v8; // rax
  __int64 v9; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v3 = FdoExt(Flink);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, v3 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation(&i[-16].Dpc.DeferredRoutine, &USBHUB_ETW_EVENT_HUB_INFORMATION);
      UsbhEtwLogHubPastExceptions(&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink);
      v4 = FdoExt(Flink);
      UsbhAcquirePdoStateLock(v5, v4 + 1384, 25LL);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        LOBYTE(v6) = 1;
        UsbhEtwLogDeviceInformation(j - 1312, &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v6);
        UsbhEtwLogDeviceDescription(j - 1312, &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v8 = FdoExt(Flink) + 1384;
      *(_DWORD *)(v8 + 136) = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      *(_DWORD *)(v8 + 88) = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v8 + 132));
    }
    v9 = FdoExt(Flink);
    UsbhReleaseFdoPnpLock(Flink, v9 + 1384);
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
