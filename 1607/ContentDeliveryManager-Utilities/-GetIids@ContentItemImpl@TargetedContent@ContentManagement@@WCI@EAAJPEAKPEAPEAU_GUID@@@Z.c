/*
 * XREFs of ?GetIids@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180053220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::ContentItemImpl::GetIids(
           (ContentManagement::TargetedContent::ContentItemImpl *)(a1 - 40),
           a2,
           a3);
}
