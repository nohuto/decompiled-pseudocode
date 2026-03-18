/*
 * XREFs of TR_EndpointHalted @ 0x1C0020484
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C0039300 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 112LL))();
}
