/*
 * XREFs of PopIntSteerSetMode @ 0x140143BA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x1401119F8 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x14056A6F4 (PpmCheckReInit.c)
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
  PpmCheckCustomRun();
  return 0LL;
}
