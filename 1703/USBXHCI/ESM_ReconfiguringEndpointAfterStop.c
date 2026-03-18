/*
 * XREFs of ESM_ReconfiguringEndpointAfterStop @ 0x1C0037E30
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C001E794 (Endpoint_OnCancelEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointAfterStop(__int64 a1)
{
  Endpoint_OnCancelEndpointConfigure(*(__int64 **)(a1 + 960));
  return 1000LL;
}
