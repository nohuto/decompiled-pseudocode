/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01E5DB8
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014F720 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     InternalSetClipboardData @ 0x1C014F894 (InternalSetClipboardData.c)
 *     CreateScreenPalette @ 0x1C022A6EC (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // [rsp+48h] [rbp+10h]
  __int64 v5; // [rsp+50h] [rbp+18h]

  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 24LL)) >= 0 )
  {
    InternalSetClipboardData((__int64)a1, 9LL, v4, 0, 1);
    GreSetPaletteOwner(v4, 0LL);
    Win32FreePool(v5, v2, v3);
  }
}
