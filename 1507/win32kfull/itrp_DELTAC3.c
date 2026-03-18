/*
 * XREFs of itrp_DELTAC3 @ 0x1C00BFB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C03231A4,
           *(_WORD *)(qword_1C0323160 + 148) + 32,
           *(_WORD *)(qword_1C0323160 + 150));
}
