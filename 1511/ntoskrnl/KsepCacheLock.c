/*
 * XREFs of KsepCacheLock @ 0x1404F1228
 * Callers:
 *     KseAddHardwareId @ 0x1404F0BC8 (KseAddHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x1404FA868 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14054EF0C (KsepDbCacheInsertDevice.c)
 *     KseQueryDeviceDataList @ 0x14061D040 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x14061D1B4 (KseResetDeviceCache.c)
 *     KseLookupHardwareId @ 0x14061E768 (KseLookupHardwareId.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall KsepCacheLock(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
