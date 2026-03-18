/*
 * XREFs of itrp_DELTAP1 @ 0x1C00CD830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAP1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C032950C,
           *(unsigned __int16 *)(qword_1C03294E0 + 148),
           *(unsigned __int16 *)(qword_1C03294E0 + 150));
}
