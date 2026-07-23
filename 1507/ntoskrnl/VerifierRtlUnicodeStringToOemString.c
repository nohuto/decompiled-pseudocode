/*
 * XREFs of VerifierRtlUnicodeStringToOemString @ 0x140752E3C
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringToOemString @ 0x14052844C (RtlUnicodeStringToOemString.c)
 *     ViRtlReplaceStringBuffer @ 0x140752FB0 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlUnicodeStringToOemString(_STRING *a1, const UNICODE_STRING *a2, BOOLEAN a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlUnicodeStringToOemString(a1, a2, a3);
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
