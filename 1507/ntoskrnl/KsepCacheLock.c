/*
 * XREFs of KsepCacheLock @ 0x14054B590
 * Callers:
 *     KseAddHardwareId @ 0x14054B3B8 (KseAddHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x140572240 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheInsertDevice @ 0x1405C6A60 (KsepDbCacheInsertDevice.c)
 *     KseQueryDeviceDataList @ 0x14069BBC4 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x14069BD6C (KseResetDeviceCache.c)
 *     KseLookupHardwareId @ 0x14069D464 (KseLookupHardwareId.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall KsepCacheLock(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL, a4);
  v8 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1, v7);
  if ( v8 )
  {
    result = *(_QWORD *)(v8 + 32);
    *(_BYTE *)(v8 + 26) |= 1u;
  }
  return result;
}
