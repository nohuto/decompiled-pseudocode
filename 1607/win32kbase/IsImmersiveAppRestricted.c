/*
 * XREFs of IsImmersiveAppRestricted @ 0x1C0012430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppRestricted(__int64 a1)
{
  return (*(_BYTE *)(a1 + 768) & 0x30) == 16;
}
