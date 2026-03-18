/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F0078
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     InternalSetClipboardData @ 0x1C014A1AC (InternalSetClipboardData.c)
 *     CreateScreenPalette @ 0x1C02318A4 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h]
  __int64 v3; // [rsp+50h] [rbp+18h]

  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 24LL)) >= 0 )
  {
    InternalSetClipboardData((__int64)a1, 9u, v2, 0, 1);
    GreSetPaletteOwner(v2, 0LL);
    Win32FreePool(v3);
  }
}
