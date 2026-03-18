/*
 * XREFs of ACPIVectorDisable2 @ 0x1C00416A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, _DWORD *a2, __int64 a3)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 712), a2, a3);
}
