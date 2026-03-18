/*
 * XREFs of BgkSetDisplayOwnership @ 0x140137CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
