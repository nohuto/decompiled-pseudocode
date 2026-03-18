/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x1C0029068
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeStopped @ 0x1C003A7A0 (ESM_CheckingIfEndpointShouldBeStopped.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 144LL))();
}
