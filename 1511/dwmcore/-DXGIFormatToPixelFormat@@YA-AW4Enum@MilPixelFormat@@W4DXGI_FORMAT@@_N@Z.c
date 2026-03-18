/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B2D3C
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x180088A20 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x180150970 (-GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1801535D0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, char a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return (unsigned int)(a2 != 0) + 25;
  if ( a1 <= 9 )
    return 0LL;
  result = 11LL;
  if ( a1 <= 11 )
    return (unsigned int)(a2 != 0) + 22;
  switch ( a1 )
  {
    case 87:
      return (unsigned int)(a2 != 0) + 15;
    case 24:
      return 20LL;
    case 28:
      return (unsigned int)(a2 != 0) + 68;
  }
  if ( a1 != 49 )
  {
    if ( a1 == 61 )
      return 8LL;
    if ( a1 == 88 )
      return 14LL;
    return 0LL;
  }
  return result;
}
