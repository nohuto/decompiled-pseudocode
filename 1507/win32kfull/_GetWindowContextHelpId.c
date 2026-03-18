/*
 * XREFs of _GetWindowContextHelpId @ 0x1C023CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowContextHelpId(__int64 a1)
{
  return GetProp(a1, *(unsigned __int16 *)(gpsi + 1360LL), 1LL);
}
