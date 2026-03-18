/*
 * XREFs of PpmMediaBufferingWorker @ 0x140105218
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmPdcNotifyMediaBufferingUpdate @ 0x14063D46C (PpmPdcNotifyMediaBufferingUpdate.c)
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
    v2 = byte_1402DEF29;
    if ( byte_1402DEF29 == byte_1402DE2CC )
      break;
    byte_1402DE2CC = byte_1402DEF29;
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
  byte_1402DEF28 = 0;
  KeReleaseSpinLock(&PpmMediaBufferingWork, v1);
}
