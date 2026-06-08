/*
 * XREFs of PepSetTimeWindow @ 0x1C00027E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PepSetTimeWindow(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 28) = a2;
}
