/*
 * XREFs of ?GetRotation@CDxHandleYUVBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180190E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetRotation(CDxHandleYUVBitmapRealization *this)
{
  if ( *((_DWORD *)this + 48) != 1 )
  {
    switch ( *((_DWORD *)this + 48) )
    {
      case 2:
        return 2LL;
      case 3:
        return 3LL;
      case 4:
        return 4LL;
    }
  }
  return 1LL;
}
