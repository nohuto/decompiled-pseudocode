/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1406D70F0
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140486454 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140631668 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140647664 (PiCMEnumerateSubKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA104 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
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
