/*
 * XREFs of itrp_DELTAP1 @ 0x1C00B4820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C0323E5C,
           *(unsigned __int16 *)(qword_1C0323E30 + 148),
           *(unsigned __int16 *)(qword_1C0323E30 + 150));
}
