/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x14032A5D0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x14029582C (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(HSURF a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
