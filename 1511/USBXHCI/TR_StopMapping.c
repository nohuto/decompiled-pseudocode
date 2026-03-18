/*
 * XREFs of TR_StopMapping @ 0x1C002898C
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C003A9C0 (ESM_StoppingMappingOnCancelStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 96LL))();
}
