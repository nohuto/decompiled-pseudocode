/*
 * XREFs of ?GetIids@ContentValueImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800530F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::ContentValueImpl::GetIids(
           (ContentManagement::TargetedContent::ContentValueImpl *)(a1 - 40),
           a2,
           a3);
}
