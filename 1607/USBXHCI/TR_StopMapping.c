/*
 * XREFs of TR_StopMapping @ 0x1C0028FBC
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C003AF90 (ESM_StoppingMappingOnCancelStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 96LL))();
}
