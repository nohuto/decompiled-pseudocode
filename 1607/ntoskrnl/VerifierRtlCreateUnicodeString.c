/*
 * XREFs of VerifierRtlCreateUnicodeString @ 0x14071B20C
 * Callers:
 *     <none>
 * Callees:
 *     ViRtlReplaceStringBuffer @ 0x14071B59C (ViRtlReplaceStringBuffer.c)
 */

char __fastcall VerifierRtlCreateUnicodeString(__int64 a1)
{
  char UnicodeString; // bl
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+40h] [rbp+18h] BYREF

  UnicodeString = pXdvRtlCreateUnicodeString();
  if ( UnicodeString )
  {
    v5 = 0;
    ViRtlReplaceStringBuffer(a1, &v5, retaddr);
    if ( v5 < 0 )
      return 0;
  }
  return UnicodeString;
}
