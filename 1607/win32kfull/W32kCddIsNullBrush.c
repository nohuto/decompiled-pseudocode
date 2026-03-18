/*
 * XREFs of W32kCddIsNullBrush @ 0x1C0125E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddIsNullBrush(__int64 a1)
{
  return *(_DWORD *)(a1 + 128) & 0x100;
}
