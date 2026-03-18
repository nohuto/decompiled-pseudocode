/*
 * XREFs of itrp_DELTAC1 @ 0x1C00B47F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C0323E74,
           *(unsigned __int16 *)(qword_1C0323E30 + 148),
           *(unsigned __int16 *)(qword_1C0323E30 + 150));
}
