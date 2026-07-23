/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1800E765C
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1800E7754 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesNameContainWildCards(PUNICODE_STRING Expression)
{
  unsigned __int16 *Buffer; // r8
  unsigned __int16 *i; // rdx

  if ( Expression->Length )
  {
    Buffer = Expression->Buffer;
    for ( i = &Buffer[((unsigned __int64)Expression->Length >> 1) - 1]; i >= Buffer && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_18011C670[*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
