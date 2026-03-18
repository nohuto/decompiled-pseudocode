/*
 * XREFs of PdcPoPpmResetProfile @ 0x14066FAE4
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     PpmEnableProfile @ 0x140577728 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140675B6C (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, char a2)
{
  LONG result; // eax
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
