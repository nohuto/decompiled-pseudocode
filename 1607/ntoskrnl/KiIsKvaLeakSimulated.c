/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1401D9C8C
 * Callers:
 *     KiEnableKvaShadowing @ 0x1403DDF40 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaLeakSimulated()
{
  return ((unsigned __int8)KiFeatureSimulations >> 4) & 1;
}
