/*
 * XREFs of RtlIsNameInExpression @ 0x1800E76B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800E7754 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800E7C78 (RtlpUpcaseUnicodeStringPrivate.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  NTSTATUS v6; // eax
  unsigned __int16 *Buffer; // rbx
  BOOLEAN IsNameInExpressionPrivate; // di
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !IgnoreCase || UpcaseTable )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(Expression, Name, IgnoreCase, UpcaseTable);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
