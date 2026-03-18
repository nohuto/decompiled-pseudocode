/*
 * XREFs of PdcPoPerfOverride @ 0x14066FAC4
 * Callers:
 *     <none>
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x140131E88 (PpmBeginHighPerfRequest.c)
 */

__int64 PdcPoPerfOverride()
{
  __int64 v0; // rdx

  PpmBeginHighPerfRequest();
  return PpmEndHighPerfRequest(1, v0);
}
