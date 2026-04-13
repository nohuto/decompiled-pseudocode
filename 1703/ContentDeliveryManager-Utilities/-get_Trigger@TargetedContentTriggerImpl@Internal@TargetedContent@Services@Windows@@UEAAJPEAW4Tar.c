/*
 * XREFs of ?get_Trigger@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentKnownTrigger@2345@@Z @ 0x180045CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_Trigger(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentKnownTrigger *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 14);
  return 0LL;
}
