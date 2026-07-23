/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1406D7228
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140513264 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14063171C (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140647748 (PiCMEnumerateSubKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA23C (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     PipHardwareConfigExists @ 0x1407CEBD0 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
