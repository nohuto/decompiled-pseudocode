/*
 * XREFs of ZwUnloadKey2 @ 0x140153BE0
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadHive @ 0x1404BDEE0 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x14074F150 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
