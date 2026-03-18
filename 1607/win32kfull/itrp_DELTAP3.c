/*
 * XREFs of itrp_DELTAP3 @ 0x1C0118B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C032950C,
           *(_WORD *)(qword_1C03294E0 + 148) + 32,
           *(_WORD *)(qword_1C03294E0 + 150));
}
