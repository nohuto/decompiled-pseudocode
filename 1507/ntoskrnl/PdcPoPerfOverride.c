/*
 * XREFs of PdcPoPerfOverride @ 0x1406B75D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x14015A718 (PpmBeginHighPerfRequest.c)
 */

__int64 PdcPoPerfOverride()
{
  __int64 v0; // rdx

  PpmBeginHighPerfRequest();
  return PpmEndHighPerfRequest(1, v0);
}
