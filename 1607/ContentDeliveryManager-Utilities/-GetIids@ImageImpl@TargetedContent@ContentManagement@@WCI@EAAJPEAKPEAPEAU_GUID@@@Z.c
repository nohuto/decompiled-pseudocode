/*
 * XREFs of ?GetIids@ImageImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180053140
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
           (ContentManagement::TargetedContent::ImageImpl *)(a1 - 40),
           a2,
           a3);
}
