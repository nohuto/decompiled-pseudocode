/*
 * XREFs of ExpWaitForBootDevices @ 0x14022D1F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KeThawExecution @ 0x140083258 (KeThawExecution.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // edi
  __int64 *v2; // rbx
  KIRQL v3; // al

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      do
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v2 = (__int64 *)v2[1];
        KeReleaseSpinLock(&ExBootDeviceListSpinLock, v3);
      }
      while ( v2 != &ExBootDeviceList
           && (!*((_DWORD *)v2 - 1)
            || !((unsigned __int8 (__fastcall *)(__int64, __int64))v2[5])(v2[4], v2[6])
            || _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) != 1
            || _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) != 1) );
      if ( !ExNumMissingBootDevices )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
