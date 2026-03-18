/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02AB820
 * Callers:
 *     NtGdiEngCreateBitmap @ 0x1C02AD310 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceBitmap @ 0x1C02AD600 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02AD640 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidUmpdSizl(struct tagSIZE a1)
{
  bool result; // al

  result = 0;
  if ( a1.cx > 0 && a1.cy > 0 )
    return (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF;
  return result;
}
