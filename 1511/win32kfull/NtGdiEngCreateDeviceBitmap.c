/*
 * XREFs of NtGdiEngCreateDeviceBitmap @ 0x1C02AB5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02A9A6C (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HBITMAP __fastcall NtGdiEngCreateDeviceBitmap(__int64 a1, struct tagSIZE a2)
{
  int v2; // eax
  SIZEL v3; // r9
  int v4; // r10d
  DHSURF v5; // r11

  LOBYTE(v2) = ValidUmpdSizl(a2);
  if ( v2 && (unsigned int)(v4 - 1) <= 7 )
    return EngCreateDeviceBitmap(v5, v3, v4 | 0x8000u);
  else
    return 0LL;
}
