/*
 * XREFs of ?GetIids@ContentCollectionImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180048510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::GetIids(
           (ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 40),
           a2,
           a3);
}
