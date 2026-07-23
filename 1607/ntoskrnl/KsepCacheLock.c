/*
 * XREFs of KsepCacheLock @ 0x14050CE94
 * Callers:
 *     KseAddHardwareId @ 0x14050D830 (KseAddHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x140535324 (KsepDbCacheQueryDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14057DF68 (KsepDbCacheInsertDevice.c)
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 *     KseResetDeviceCache @ 0x14065258C (KseResetDeviceCache.c)
 *     KseLookupHardwareId @ 0x140653AC4 (KseLookupHardwareId.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
