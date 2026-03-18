/*
 * XREFs of EvaluateCurrentStateFromRegistry @ 0x1401B8378
 * Callers:
 *     EvaluateFeature @ 0x1401B83F4 (EvaluateFeature.c)
 * Callees:
 *     QueryFeatureOverride @ 0x1401B8A54 (QueryFeatureOverride.c)
 */

_BOOL8 __fastcall EvaluateCurrentStateFromRegistry(int a1, __int64 a2, int a3, char a4, _BYTE *a5)
{
  BOOL v5; // ebx

  v5 = a3 != 1;
  *a5 = a4;
  QueryFeatureOverride(__ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF);
  return v5;
}
