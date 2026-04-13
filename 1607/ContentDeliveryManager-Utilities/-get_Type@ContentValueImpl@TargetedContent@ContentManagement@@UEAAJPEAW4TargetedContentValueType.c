/*
 * XREFs of ?get_Type@ContentValueImpl@TargetedContent@ContentManagement@@UEAAJPEAW4TargetedContentValueType@23@@Z @ 0x18004B770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentValueImpl::get_Type(
        ContentManagement::TargetedContent::ContentValueImpl *this,
        enum ContentManagement::TargetedContent::TargetedContentValueType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  return 0LL;
}
