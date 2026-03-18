/*
 * XREFs of TR_StartMapping @ 0x1C0028FAC
 * Callers:
 *     ESM_StartingMapping @ 0x1C003AEE0 (ESM_StartingMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_StartMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 88LL))();
}
