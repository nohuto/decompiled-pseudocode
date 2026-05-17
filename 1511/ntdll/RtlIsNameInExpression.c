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

char __fastcall RtlIsNameInExpression(__int64 a1, UNICODE_STRING *p_UnicodeString, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned __int16 *Buffer; // rbx
  char IsNameInExpressionPrivate; // di
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !(_BYTE)a3 || a4 )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    p_UnicodeString = &UnicodeString;
    LOBYTE(a3) = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, p_UnicodeString, a3, a4);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
