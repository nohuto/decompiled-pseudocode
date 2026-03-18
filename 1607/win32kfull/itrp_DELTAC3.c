/*
 * XREFs of itrp_DELTAC3 @ 0x1C011CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_DELTAC3(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           dword_1C0329524,
           *(_WORD *)(qword_1C03294E0 + 148) + 32,
           *(_WORD *)(qword_1C03294E0 + 150));
}
