/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1C01325D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetAutoRotationConvertible @ 0x1C0132624 (xxxSetAutoRotationConvertible.c)
 */

__int64 xxxRefreshDisplayOrientation()
{
  xxxSetAutoRotationConvertible((unsigned __int8)(*(_BYTE *)(gpsi + 2220LL) & 8) >> 3);
  return xxxSetAutoRotationDocked((unsigned __int8)(*(_BYTE *)(gpsi + 2220LL) & 0x10) >> 4);
}
