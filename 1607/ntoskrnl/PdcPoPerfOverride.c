/*
 * XREFs of PdcPoPerfOverride @ 0x14066FBA8
 * Callers:
 *     <none>
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x1401323F8 (PpmBeginHighPerfRequest.c)
 */

__int64 PdcPoPerfOverride()
{
  __int64 v0; // rdx

  PpmBeginHighPerfRequest();
  return PpmEndHighPerfRequest(1, v0);
}
