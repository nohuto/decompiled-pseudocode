/*
 * XREFs of PopFxChildDeviceActive @ 0x1401E9B40
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoControlPnpDeviceActionQueue @ 0x140124618 (IoControlPnpDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x1404594A0 (IoGetDevicePropertyData.c)
 */

int __fastcall PopFxChildDeviceActive(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rcx
  ULONG v11; // [rsp+40h] [rbp-58h] BYREF
  ULONG v12[3]; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  LODWORD(v4) = IoGetDevicePropertyData((PDEVICE_OBJECT)v2[4], &DEVPKEY_Device_ClassGuid, 0, 0, 0x10u, v13, &v11, v12);
  if ( (int)v4 >= 0 && v12[0] == 13 && v11 == 16 )
  {
    v4 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v13[0];
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == v13[0] )
      v4 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - v13[1];
    if ( !v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      IoControlPnpDeviceActionQueue(1);
      v6 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v6, (ULONG_PTR)&PopFxDeviceListLock);
      if ( v6 )
        *(_BYTE *)(v6 + 26) |= 1u;
      v7 = (__int64 *)v2[1];
      v8 = v2;
      while ( v7 )
      {
        v8 = v7;
        v7 = (__int64 *)v7[1];
      }
      while ( v8 != v2 )
      {
        if ( *((_DWORD *)v8 + 35) == 1 )
        {
          *a2 = v8;
          break;
        }
        v9 = (__int64 *)*v8;
        if ( *v8 )
        {
          do
          {
            v8 = v9;
            v9 = (__int64 *)v9[1];
          }
          while ( v9 );
        }
        else
        {
          v8 = (__int64 *)v8[2];
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
      KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
      PnpUnlockDeviceActionQueue();
      LODWORD(v4) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v4;
}
