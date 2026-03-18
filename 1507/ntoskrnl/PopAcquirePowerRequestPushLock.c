/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1404E6210
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400D0F1C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x1400D1B8C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400D1CD0 (PoSetPowerRequestInternal.c)
 *     PopSetSpecialRequest @ 0x140409CAC (PopSetSpecialRequest.c)
 *     PopClearSpecialRequest @ 0x14040A1E8 (PopClearSpecialRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1404E5880 (PopCreateKernelPowerRequest.c)
 *     PopPowerRequestInsertElementNoLock @ 0x1404E5F40 (PopPowerRequestInsertElementNoLock.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     PopAoacExecutionRequiredPowerRequest @ 0x1405569F0 (PopAoacExecutionRequiredPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1405C0E88 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405C17E8 (PopPowerRequestOverrideInitialize.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x1406B0A3C (PopCheckExecutionRequiredPowerRequests.c)
 *     PopCsStateChanged @ 0x1406B0B3C (PopCsStateChanged.c)
 *     PopPowerRequestDeleteEntryNoLock @ 0x1406B0C50 (PopPowerRequestDeleteEntryNoLock.c)
 *     PopGetPowerRequestListInfo @ 0x1406B326C (PopGetPowerRequestListInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  struct _KTHREAD *result; // rax
  __int64 v9; // rdi
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    v5 = KeAbPreAcquire((ULONG_PTR)&PopPowerRequestLock, 0LL, 0LL, a4);
    v7 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopPowerRequestLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&PopPowerRequestLock, v5, (ULONG_PTR)&PopPowerRequestLock, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    result = KeGetCurrentThread();
    qword_14032F7D8 = (__int64)result;
  }
  else
  {
    v9 = KeAbPreAcquire((ULONG_PTR)&PopPowerRequestLock, 0LL, 0LL, a4);
    result = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)&PopPowerRequestLock,
                                  17LL,
                                  0LL);
    if ( result )
      result = (struct _KTHREAD *)ExfAcquirePushLockSharedEx(
                                    &PopPowerRequestLock,
                                    v9,
                                    (ULONG_PTR)&PopPowerRequestLock,
                                    v10);
    if ( v9 )
    {
      result = *(struct _KTHREAD **)(v9 + 32);
      *(_BYTE *)(v9 + 26) |= 1u;
    }
  }
  return result;
}
