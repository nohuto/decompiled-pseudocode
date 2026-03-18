/*
 * XREFs of VerifierFsRtlIsNameInExpression @ 0x1406C0530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  return pXdvFsRtlIsNameInExpression(Expression, Name, IgnoreCase, UpcaseTable);
}
