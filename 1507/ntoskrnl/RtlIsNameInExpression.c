/*
 * XREFs of RtlIsNameInExpression @ 0x1400F80F0
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x140269EE8 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     VerifierFsRtlIsNameInExpression @ 0x140741D24 (VerifierFsRtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400F8170 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400F8690 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
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
