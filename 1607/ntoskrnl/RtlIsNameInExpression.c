/*
 * XREFs of RtlIsNameInExpression @ 0x1400814C0
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x140234658 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140234B30 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x140081540 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132944 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
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
