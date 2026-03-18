/*
 * XREFs of ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18000CF00
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800328A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetRotation(CDxHandleBitmapRealization *this)
{
  switch ( *((_DWORD *)this + 46) )
  {
    case 1:
      return 1LL;
    case 2:
      return 2LL;
    case 3:
      return 3LL;
  }
  if ( *((_DWORD *)this + 46) != 4 )
    return 1LL;
  return 4LL;
}
