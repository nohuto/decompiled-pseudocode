/*
 * XREFs of ?AddRef@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCA@EAAKXZ @ 0x180022600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::AddRef(__int64 a1)
{
  return Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef((Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *)(a1 - 32));
}
