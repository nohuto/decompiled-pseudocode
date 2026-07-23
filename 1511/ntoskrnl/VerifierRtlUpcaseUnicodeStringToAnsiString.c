/*
 * XREFs of VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x1406CF408
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140644AAC (RtlUpcaseUnicodeStringToAnsiString.c)
 *     ViRtlReplaceStringBuffer @ 0x1406CF4E4 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlUpcaseUnicodeStringToAnsiString(_STRING *a1, const UNICODE_STRING *a2, BOOLEAN a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlUpcaseUnicodeStringToAnsiString(a1, a2, a3);
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
