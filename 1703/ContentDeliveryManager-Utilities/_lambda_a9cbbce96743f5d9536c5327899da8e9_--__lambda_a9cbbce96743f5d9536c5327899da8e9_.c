/*
 * XREFs of _lambda_a9cbbce96743f5d9536c5327899da8e9_::__lambda_a9cbbce96743f5d9536c5327899da8e9_ @ 0x18000CA60
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800707AF (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_a9cbbce96743f5d9536c5327899da8e9_::__lambda_a9cbbce96743f5d9536c5327899da8e9_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
