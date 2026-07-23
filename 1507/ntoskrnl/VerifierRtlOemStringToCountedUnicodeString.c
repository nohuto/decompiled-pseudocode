/*
 * XREFs of VerifierRtlOemStringToCountedUnicodeString @ 0x140752D1C
 * Callers:
 *     <none>
 * Callees:
 *     RtlOemStringToCountedUnicodeString @ 0x1406C78D8 (RtlOemStringToCountedUnicodeString.c)
 *     ViRtlReplaceStringBuffer @ 0x140752FB0 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlOemStringToCountedUnicodeString(UNICODE_STRING *a1, const OEM_STRING *a2, BOOLEAN a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlOemStringToCountedUnicodeString(a1, a2, a3);
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
