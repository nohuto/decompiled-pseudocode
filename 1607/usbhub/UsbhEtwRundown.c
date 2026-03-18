/*
 * XREFs of UsbhEtwRundown @ 0x1C001E844
 * Callers:
 *     UsbhEtwEnableCallback @ 0x1C0027E10 (UsbhEtwEnableCallback.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C001BAA8 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D1D0 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C001DC1C (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001DD90 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E6C8 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001E9FC (UsbhReleaseFdoPnpLock.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001EA4C (UsbhAcquireFdoPnpLock.c)
 */

LONG UsbhEtwRundown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  struct _DEVICE_OBJECT *i; // rdi
  __int64 Flink; // rsi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rbx
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD **v20; // rbp
  _QWORD *j; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rax
  _DWORD *v25; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v5 = (unsigned int)FdoExt(Flink, v0, v1, v2);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, v5 + 1384, 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogHubPastExceptions((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink, v9, v10, v11);
      v15 = FdoExt(Flink, v12, v13, v14) + 346;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v15[34] = 1;
      v20 = (_QWORD **)(&i[-2].Reserved + 1);
      *((_BYTE *)v15 + 132) = v16;
      v15[22] = 2018460752;
      v15[23] = 25;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v15;
      *((_QWORD *)v15 + 3) = KeGetCurrentThread();
      for ( j = *v20; j != v20; j = (_QWORD *)*j )
      {
        LOBYTE(v18) = 1;
        UsbhEtwLogDeviceInformation((__int64)(j - 164), &USBHUB_ETW_EVENT_DEVICE_INFORMATION, v18, v19);
        UsbhEtwLogDeviceDescription((__int64)(j - 164), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION, v22, v23);
      }
      v24 = FdoExt(Flink, v17, v18, v19) + 346;
      v24[34] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v24[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, *((_BYTE *)v24 + 132));
    }
    v25 = FdoExt(Flink, v6, v7, v8);
    UsbhReleaseFdoPnpLock(Flink, v25 + 346);
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
