/*
 * XREFs of PdcPoPpmResetProfile @ 0x1406B75F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x1405B9C28 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x1406BD9CC (PpmDisableProfile.c)
 */

int __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  int result; // eax
  __int64 v5; // rdx

  result = PpmProfileStatus;
  if ( (PpmProfileStatus & 2) == 0 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( a2 )
      PpmEnableProfile(a1, v5);
    else
      PpmDisableProfile(a1);
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  return result;
}
