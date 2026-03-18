/*
 * XREFs of TR_GetWdfQueue @ 0x1C00102FC
 * Callers:
 *     Endpoint_Create @ 0x1C0052D7C (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
