/*
 * XREFs of KsepCacheLock @ 0x1404E3A3C
 * Callers:
 *     KseAddHardwareId @ 0x1404E3884 (KseAddHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x140534DE4 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14057DABC (KsepDbCacheInsertDevice.c)
 *     KseQueryDeviceDataList @ 0x140652334 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x1406524A8 (KseResetDeviceCache.c)
 *     KseLookupHardwareId @ 0x1406539E0 (KseLookupHardwareId.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall KsepCacheLock(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
