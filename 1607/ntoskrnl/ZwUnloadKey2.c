/*
 * XREFs of ZwUnloadKey2 @ 0x14015D300
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadHive @ 0x1404ECFBC (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x140617878 (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1407BC3E0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
