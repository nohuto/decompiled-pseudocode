/*
 * XREFs of PpmMediaBufferingWorker @ 0x14013258C
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x1406BDBA4 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

__int64 PpmMediaBufferingWorker()
{
  bool v0; // di
  unsigned __int8 CurrentIrql; // si
  char v2; // bl
  REGHANDLE v3; // rsi
  __int64 result; // rax
  __int64 v5; // rcx
  BOOL v6; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  while ( 1 )
  {
    v0 = 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PpmMediaBufferingWork);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmMediaBufferingWork, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmMediaBufferingWork);
    }
    v2 = byte_14032F209;
    if ( byte_14032F209 == byte_14032E88C )
      break;
    byte_14032E88C = byte_14032F209;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PpmMediaBufferingWork, retaddr);
    else
      _InterlockedAnd64(&PpmMediaBufferingWork, 0LL);
    __writecr8(CurrentIrql);
    if ( PpmEtwRegistered )
    {
      v3 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v6 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v6;
        EtwWrite(v3, &PPM_ETW_MEDIA_BUFFERING_NOTIFY, 0LL, 1u, &UserData);
      }
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( !PpmLowPowerProfile )
    {
      if ( v2 )
        v0 = 0;
      else
        v0 = PpmPdcMediaEngaged != 0;
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( v0 )
    {
      LOBYTE(v5) = v2;
      PpmPdcMediaEngaged = v2;
      PpmPdcNotifyMediaBufferingUpdate(v5);
    }
  }
  byte_14032F208 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PpmMediaBufferingWork, retaddr);
  else
    _InterlockedAnd64(&PpmMediaBufferingWork, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
