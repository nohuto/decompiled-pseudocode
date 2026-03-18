/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x1C002555C
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C0037C00 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 128LL))();
}
