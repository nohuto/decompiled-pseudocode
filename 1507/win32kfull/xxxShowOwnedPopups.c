/*
 * XREFs of xxxShowOwnedPopups @ 0x1C0124300
 * Callers:
 *     <none>
 * Callees:
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 */

__int64 __fastcall xxxShowOwnedPopups(__int64 a1, int a2)
{
  xxxShowOwnedWindows(a1, a2 != 0 ? 3 : 1, 0LL);
  return 1LL;
}
