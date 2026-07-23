/*
 * XREFs of RtlDoesNameContainWildCards @ 0x140081B10
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1400815C0 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlDoesNameContainWildCards(PUNICODE_STRING Name)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rax
  wchar_t v3; // cx

  if ( Name->Length )
  {
    Buffer = Name->Buffer;
    for ( i = &Buffer[((unsigned __int64)Name->Length >> 1) - 1]; i >= Buffer; --i )
    {
      v3 = *i;
      if ( *i == 92 )
        break;
      if ( v3 < 0x40u && (byte_14026D5E0[v3] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
