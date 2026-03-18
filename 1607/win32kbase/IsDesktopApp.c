/*
 * XREFs of IsDesktopApp @ 0x1C00780C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDesktopApp(__int64 a1)
{
  return (*(_BYTE *)(a1 + 768) & 0x30) == 0;
}
