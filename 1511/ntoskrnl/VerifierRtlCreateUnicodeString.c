/*
 * XREFs of VerifierRtlCreateUnicodeString @ 0x1406CF154
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUnicodeString @ 0x140447238 (RtlCreateUnicodeString.c)
 *     ViRtlReplaceStringBuffer @ 0x1406CF4E4 (ViRtlReplaceStringBuffer.c)
 */

BOOLEAN __fastcall VerifierRtlCreateUnicodeString(UNICODE_STRING *a1, const WCHAR *a2)
{
  BOOLEAN UnicodeString; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+40h] [rbp+18h] BYREF

  UnicodeString = pXdvRtlCreateUnicodeString(a1, a2);
  if ( UnicodeString )
  {
    v6 = 0;
    ViRtlReplaceStringBuffer(a1, &v6, retaddr);
    if ( v6 < 0 )
      return 0;
  }
  return UnicodeString;
}
