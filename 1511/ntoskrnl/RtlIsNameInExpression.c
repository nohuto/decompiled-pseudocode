/*
 * XREFs of RtlIsNameInExpression @ 0x1400C2CC0
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x14021A394 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14021A86C (AuthzBasepCompareUnicodeStringOperands.c)
 *     VerifierFsRtlIsNameInExpression @ 0x1406C0530 (VerifierFsRtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400C2D40 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400C3240 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  wchar_t *Buffer; // rdi
  BOOLEAN IsNameInExpressionPrivate; // bl
  NTSTATUS v9; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( IgnoreCase && !UpcaseTable )
  {
    v9 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v9 < 0 )
      RtlRaiseStatus(v9);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  else
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(Expression, Name, IgnoreCase, UpcaseTable);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
