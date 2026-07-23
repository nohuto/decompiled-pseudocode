/*
 * XREFs of VerifierRtlAnsiStringToUnicodeString @ 0x140752BD4
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     ViRtlReplaceStringBuffer @ 0x140752FB0 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlAnsiStringToUnicodeString(UNICODE_STRING *a1, const ANSI_STRING *a2, BOOLEAN a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlAnsiStringToUnicodeString(a1, a2, a3);
  v7 = result;
  if ( result >= 0 )
  {
    if ( a3 )
    {
      ViRtlReplaceStringBuffer(a1, &v7, retaddr);
      return v7;
    }
  }
  return result;
}
