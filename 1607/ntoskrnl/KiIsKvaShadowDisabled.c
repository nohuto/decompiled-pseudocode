/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1401D9AC8
 * Callers:
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaShadowDisabled()
{
  return ((unsigned __int8)KiFeatureSettings >> 1) & 1;
}
