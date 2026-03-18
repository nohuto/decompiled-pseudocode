/*
 * XREFs of ESM_ReconfiguringEndpointOnReset @ 0x1C0039730
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019248 (Endpoint_OnResetEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointOnReset(__int64 a1)
{
  Endpoint_OnResetEndpointConfigure(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
