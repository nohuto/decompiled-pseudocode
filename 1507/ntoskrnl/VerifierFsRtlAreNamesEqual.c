/*
 * XREFs of VerifierFsRtlAreNamesEqual @ 0x140741C64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  return pXdvFsRtlAreNamesEqual(ConstantNameA, ConstantNameB, IgnoreCase, UpcaseTable);
}
