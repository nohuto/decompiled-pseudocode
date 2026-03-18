/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1401CBE48
 * Callers:
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaShadowDisabled()
{
  return ((unsigned __int8)KiFeatureSettings >> 1) & 1;
}
