/*
 * XREFs of PopFxChildDeviceActive @ 0x1402376A0
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     IoControlPnpDeviceActionQueue @ 0x140156FEC (IoControlPnpDeviceActionQueue.c)
 *     PnpUnlockDeviceActionQueue @ 0x140156FFC (PnpUnlockDeviceActionQueue.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 */

void __fastcall PopFxChildDeviceActive(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  ULONG v14; // [rsp+40h] [rbp-58h] BYREF
  ULONG v15[3]; // [rsp+44h] [rbp-54h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1 + 48);
  if ( IoGetDevicePropertyData((PDEVICE_OBJECT)v2[4], &DEVPKEY_Device_ClassGuid, 0, 0, 0x10u, v16, &v14, v15) >= 0
    && v15[0] == 13
    && v14 == 16 )
  {
    v4 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - v16[0];
    if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == v16[0] )
      v4 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - v16[1];
    if ( !v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      IoControlPnpDeviceActionQueue(1);
      v7 = KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0LL, v6);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&PopFxDeviceListLock, v7, (ULONG_PTR)&PopFxDeviceListLock, v8);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      v9 = (__int64 *)v2[1];
      v10 = v2;
      while ( v9 )
      {
        v10 = v9;
        v9 = (__int64 *)v9[1];
      }
      while ( v10 != v2 )
      {
        if ( *((_DWORD *)v10 + 35) == 1 )
        {
          *a2 = v10;
          break;
        }
        v11 = (__int64 *)*v10;
        if ( *v10 )
        {
          do
          {
            v10 = v11;
            v11 = (__int64 *)v11[1];
          }
          while ( v11 );
        }
        else
        {
          v10 = (__int64 *)v10[2];
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
      KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
      PnpUnlockDeviceActionQueue();
      v12 = KeGetCurrentThread();
      v13 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
