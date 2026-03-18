/*
 * XREFs of PdcPoPerfOverride @ 0x1406377C4
 * Callers:
 *     <none>
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x140127004 (PpmBeginHighPerfRequest.c)
 */

__int64 PdcPoPerfOverride()
{
  __int64 v0; // rdx

  PpmBeginHighPerfRequest();
  return PpmEndHighPerfRequest(1, v0);
}
