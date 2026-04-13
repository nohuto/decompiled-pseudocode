/*
 * XREFs of _lambda_78183572efa226fa22f190bba0a96e5b_::__lambda_78183572efa226fa22f190bba0a96e5b_ @ 0x18000A53C
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x180059D73 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_78183572efa226fa22f190bba0a96e5b_::__lambda_78183572efa226fa22f190bba0a96e5b_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
