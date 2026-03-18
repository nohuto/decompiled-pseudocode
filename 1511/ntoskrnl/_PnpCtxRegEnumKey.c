/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1405186D4
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1404EEB20 (_CmGetDeviceContainerIdFromBase.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140607250 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140613120 (PiCMEnumerateSubKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406951E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PipHardwareConfigExists @ 0x140783404 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140783EA0 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
