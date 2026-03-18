/*
 * XREFs of PopIntSteerSetMode @ 0x140167724
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1401399AC (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v3; // eax

  if ( a3 != 4 )
    return 3221225485LL;
  v3 = *a2;
  if ( *a2 == 4 )
  {
    PpmIntSteerDisabled = 1;
  }
  else
  {
    PpmIntSteerDisabled = 0;
    PpmIntSteerMode = v3;
  }
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckReInit();
  PpmCheckCustomRun(4);
  return 0LL;
}
