/*
 * XREFs of NotifyHandler @ 0x1C00401E0
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C003F8F0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     OSNotifyDeviceCheck @ 0x1C003DEA8 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C003DFA4 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C003DFD0 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceWake @ 0x1C003E0AC (OSNotifyDeviceWake.c)
 *     DispatchNotification @ 0x1C003FFC0 (DispatchNotification.c)
 */

__int64 __fastcall NotifyHandler(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // al
  __int64 v8; // r8

  v5 = a2;
  if ( (_DWORD)a2 )
  {
    switch ( (_DWORD)a2 )
    {
      case 1:
        OSNotifyDeviceCheck((__int64)a3);
        break;
      case 2:
        OSNotifyDeviceWake((__int64)a3);
        break;
      case 3:
        OSNotifyDeviceEject((__int64)a3, a2, (__int64)a3, a4);
        break;
    }
  }
  else
  {
    OSNotifyDeviceEnum(a3);
  }
  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(*(_QWORD *)a3 + 96LL);
  if ( v8 && *(_DWORD *)(v8 + 8) == 1599293264 )
    v6 = v8 + 320;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  if ( v6 )
    DispatchNotification(v6 - 320, v5);
  return 0LL;
}
