/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1401CBE38
 * Callers:
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaLeakSimulated()
{
  return ((unsigned __int8)KiFeatureSettings >> 5) & 1;
}
