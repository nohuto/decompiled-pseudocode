/*
 * XREFs of Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose @ 0x18009B440
 * Callers:
 *     ?CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x18009A8A4 (-CheckForPosesOverride@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ.c)
 *     ?CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB_WPEAUPoseData@2@@Z @ 0x18009ABA8 (-CheckForPoseOverride@SpatialInteractionController@SpatialInteractionDevices@@CAXPEAUHKEY__@@PEB.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT__anonymous_namespace_::RegistryKeyTraits_::InternalClose(__int64 a1)
{
  return RegCloseKey(*(HKEY *)(a1 + 8)) == 0;
}
