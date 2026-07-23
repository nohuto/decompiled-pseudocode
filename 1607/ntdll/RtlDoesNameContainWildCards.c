/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800F083C
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1800F0934 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  wchar_t *Buffer; // r8
  wchar_t *i; // rdx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_180127040[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
