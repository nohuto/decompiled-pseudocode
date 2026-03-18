/*
 * XREFs of TR_EndpointResetFromClient @ 0x1C0020494
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointResetFromClient @ 0x1C0039370 (ESM_NotifyingTransferRingsEndpointResetFromClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EndpointResetFromClient(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 120LL))();
}
