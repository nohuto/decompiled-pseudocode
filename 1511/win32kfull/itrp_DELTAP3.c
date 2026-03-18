/*
 * XREFs of itrp_DELTAP3 @ 0x1C00F8DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C0323E5C,
           *(_WORD *)(qword_1C0323E30 + 148) + 32,
           *(_WORD *)(qword_1C0323E30 + 150));
}
