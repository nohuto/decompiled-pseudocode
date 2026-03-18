/*
 * XREFs of itrp_DELTAC2 @ 0x1C00BAB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC2(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C03231A4,
           (unsigned __int16)(*(_WORD *)(qword_1C0323160 + 148) + 16),
           *(unsigned __int16 *)(qword_1C0323160 + 150));
}
