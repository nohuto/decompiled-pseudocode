/*
 * XREFs of PpmMediaBufferingWorker @ 0x14010DD50
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x140675CE4 (PpmPdcNotifyMediaBufferingUpdate.c)
 */

void PpmMediaBufferingWorker()
{
  bool v0; // di
  KIRQL v1; // al
  char v2; // bl
  REGHANDLE v3; // rsi
  __int64 v4; // rcx
  BOOL v5; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  while ( 1 )
  {
    v0 = 1;
    v1 = KeAcquireSpinLockRaiseToDpc(&PpmMediaBufferingWork);
    v2 = byte_140304509;
    if ( byte_140304509 == byte_140303D8C )
      break;
    byte_140303D8C = byte_140304509;
    KeReleaseSpinLock(&PpmMediaBufferingWork, v1);
    if ( PpmEtwRegistered )
    {
      v3 = PpmEtwHandle;
      if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_MEDIA_BUFFERING_NOTIFY) )
      {
        UserData.Size = 4;
        UserData.Reserved = 0;
        v5 = v2 != 0;
        UserData.Ptr = (ULONGLONG)&v5;
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
      LOBYTE(v4) = v2;
      PpmPdcMediaEngaged = v2;
      PpmPdcNotifyMediaBufferingUpdate(v4);
    }
  }
  byte_140304508 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v1);
}
