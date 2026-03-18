/*
 * XREFs of KiIsKvaShadowDisabled @ 0x140208B74
 * Callers:
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaShadowDisabled()
{
  return ((unsigned __int8)KiFeatureSettings >> 1) & 1;
}
