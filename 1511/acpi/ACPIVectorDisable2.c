/*
 * XREFs of ACPIVectorDisable2 @ 0x1C0041160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, _DWORD *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 712), a2);
}
