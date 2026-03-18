/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14058BF10
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x140537BF4 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140681F74 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140714D74 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     PipHardwareConfigExists @ 0x1407F9B88 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1407FA624 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
