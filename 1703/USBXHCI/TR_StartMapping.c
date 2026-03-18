/*
 * XREFs of TR_StartMapping @ 0x1C00255F4
 * Callers:
 *     ESM_StartingMapping @ 0x1C00380A0 (ESM_StartingMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_StartMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 88LL))();
}
