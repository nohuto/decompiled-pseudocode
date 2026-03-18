/*
 * XREFs of NtGdiGetCharSet @ 0x1400FE570
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1400FE588 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
