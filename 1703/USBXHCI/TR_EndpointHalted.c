/*
 * XREFs of TR_EndpointHalted @ 0x1C0025454
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C00379C0 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 112LL))();
}
