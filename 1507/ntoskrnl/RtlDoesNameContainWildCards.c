/*
 * XREFs of RtlDoesNameContainWildCards @ 0x1400F8640
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1400F8170 (RtlpIsNameInExpressionPrivate.c)
 *     VerifierFsRtlDoesNameContainWildCards @ 0x140741CC4 (VerifierFsRtlDoesNameContainWildCards.c)
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
      if ( v3 < 0x40u && (byte_140295380[v3] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
