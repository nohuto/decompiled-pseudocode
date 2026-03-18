/*
 * XREFs of itrp_DELTAP1 @ 0x1C00BC450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C032318C,
           *(unsigned __int16 *)(qword_1C0323160 + 148),
           *(unsigned __int16 *)(qword_1C0323160 + 150));
}
