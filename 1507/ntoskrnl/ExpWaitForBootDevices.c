/*
 * XREFs of ExpWaitForBootDevices @ 0x140262A78
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14020657C (KeThawExecution.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      while ( 1 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExBootDeviceListSpinLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&ExBootDeviceListSpinLock, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExBootDeviceListSpinLock);
        }
        v2 = (__int64 *)v2[1];
        if ( v2 == &ExBootDeviceList )
          break;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&ExBootDeviceListSpinLock, retaddr);
        else
          _InterlockedAnd64(&ExBootDeviceListSpinLock, 0LL);
        __writecr8(CurrentIrql);
        if ( *((_DWORD *)v2 - 1)
          && ((unsigned __int8 (__fastcall *)(__int64, __int64))v2[5])(v2[4], v2[6])
          && _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) == 1 )
        {
          goto LABEL_20;
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&ExBootDeviceListSpinLock, retaddr);
      else
        _InterlockedAnd64(&ExBootDeviceListSpinLock, 0LL);
      __writecr8(CurrentIrql);
LABEL_20:
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
