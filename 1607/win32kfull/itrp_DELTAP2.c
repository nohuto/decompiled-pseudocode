/*
 * XREFs of itrp_DELTAP2 @ 0x1C00D0570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP2(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C032950C,
           *(_WORD *)(qword_1C03294E0 + 148) + 16,
           *(_WORD *)(qword_1C03294E0 + 150));
}
