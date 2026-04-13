/*
 * XREFs of ?GetIids@ImageImpl@TargetedContent@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800532D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ImageImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::ImageImpl::GetIids(
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 48),
           a2,
           a3);
}
