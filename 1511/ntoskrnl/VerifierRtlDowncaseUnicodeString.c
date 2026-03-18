/*
 * XREFs of VerifierRtlDowncaseUnicodeString @ 0x1406CF1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDowncaseUnicodeString @ 0x1404A638C (RtlDowncaseUnicodeString.c)
 *     ViRtlReplaceStringBuffer @ 0x1406CF4E4 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlDowncaseUnicodeString(UNICODE_STRING *a1, const UNICODE_STRING *a2, BOOLEAN a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlDowncaseUnicodeString(a1, a2, a3);
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
