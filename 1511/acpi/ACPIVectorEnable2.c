/*
 * XREFs of ACPIVectorEnable2 @ 0x1C0041240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIVectorEnable2(__int64 a1, _DWORD *a2)
{
  return ACPIVectorEnable(*(_QWORD *)(a1 + 712), a2);
}
