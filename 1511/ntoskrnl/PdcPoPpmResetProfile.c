/*
 * XREFs of PdcPoPpmResetProfile @ 0x1406377E4
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x140543790 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x14063D3D8 (PpmDisableProfile.c)
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
