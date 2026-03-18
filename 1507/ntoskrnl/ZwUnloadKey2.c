/*
 * XREFs of ZwUnloadKey2 @ 0x140182550
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x14055A084 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadHive @ 0x14055A2B0 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407B5D90 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
