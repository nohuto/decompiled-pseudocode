/*
 * XREFs of EditionIsHotKey @ 0x1402A7C60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x140203980 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

_BOOL8 __fastcall EditionIsHotKey(__int64 a1, __int64 a2)
{
  return IsHotKey(a1, a2) != 0LL;
}
