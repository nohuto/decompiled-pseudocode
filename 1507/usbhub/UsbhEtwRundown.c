/*
 * XREFs of UsbhEtwRundown @ 0x1C001DE28
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C00287D0 (UsbhEtwEnableCallback.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C0019A0C (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C001AEB0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001C020 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001C128 (UsbhEtwLogDeviceDescription.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquirePdoStateLock @ 0x1C001DFFC (UsbhAcquirePdoStateLock.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E054 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001E124 (UsbhAcquireFdoPnpLock.c)
 */

LONG UsbhEtwRundown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  struct _DEVICE_OBJECT *i; // rdi
  void (__fastcall **p_DeferredRoutine)(_KDPC *, void *, void *, void *); // rbx
  __int64 Flink; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char *j; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  _DWORD *v25; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v6 = (unsigned int)FdoExt(Flink, v0, v1, v2);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, v6 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogHubPastExceptions(&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink, v10, v11, v12);
      v16 = FdoExt(Flink, v13, v14, v15);
      UsbhAcquirePdoStateLock(v17, v16 + 346, 25LL);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        LOBYTE(v19) = 1;
        UsbhEtwLogDeviceInformation((__int64)(j - 1312), &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v19, v20);
        UsbhEtwLogDeviceDescription((__int64)(j - 1312), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION, v22, v23);
      }
      v24 = FdoExt(Flink, v18, v19, v20) + 346;
      v24[34] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v24[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v24 + 132));
    }
    v25 = FdoExt(Flink, v7, v8, v9);
    UsbhReleaseFdoPnpLock(Flink, v25 + 346);
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
