/*
 * XREFs of PopFxChildDeviceActive @ 0x140202344
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     IoControlPnpDeviceActionQueue @ 0x140110C4C (IoControlPnpDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140110C5C (PnpUnlockDeviceActionQueue.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x1404DA508 (IoGetDevicePropertyData.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v14; // [rsp+40h] [rbp-58h] BYREF
  ULONG v15[3]; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  LODWORD(v4) = IoGetDevicePropertyData((PDEVICE_OBJECT)v2[4], &DEVPKEY_Device_ClassGuid, 0, 0, 0x10u, v16, v15, &v14);
  if ( (int)v4 >= 0 && v14 == 13 && v15[0] == 16 )
  {
    v4 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v16[0];
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == v16[0] )
      v4 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - v16[1];
    if ( !v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      IoControlPnpDeviceActionQueue(1);
      v6 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
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
      LODWORD(v4) = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    }
  }
  return v4;
}
