/*
 * XREFs of KiIsKvaLeakSimulated @ 0x140208B64
 * Callers:
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 KiIsKvaLeakSimulated()
{
  return ((unsigned __int8)KiFeatureSimulations >> 4) & 1;
}
