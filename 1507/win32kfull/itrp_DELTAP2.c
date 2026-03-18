/*
 * XREFs of itrp_DELTAP2 @ 0x1C00BB9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP2(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C032318C,
           (unsigned __int16)(*(_WORD *)(qword_1C0323160 + 148) + 16),
           *(unsigned __int16 *)(qword_1C0323160 + 150));
}
