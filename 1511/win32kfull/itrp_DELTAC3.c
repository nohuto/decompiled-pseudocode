/*
 * XREFs of itrp_DELTAC3 @ 0x1C00F82E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C0323E74,
           *(_WORD *)(qword_1C0323E30 + 148) + 32,
           *(_WORD *)(qword_1C0323E30 + 150));
}
