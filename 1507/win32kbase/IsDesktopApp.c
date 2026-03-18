/*
 * XREFs of IsDesktopApp @ 0x1C0010E70
 * Callers:
 *     ShouldSetNoOwner @ 0x1C0010E20 (ShouldSetNoOwner.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopApp(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !gfIgnoreMoshHardening )
    return (*(_BYTE *)(a1 + 776) & 0x30) == 0;
  return result;
}
