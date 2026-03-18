/*
 * XREFs of VerifierRtlDuplicateUnicodeString @ 0x1406CF1F4
 * Callers:
 *     <none>
 * Callees:
 *     RtlDuplicateUnicodeString @ 0x1404470E8 (RtlDuplicateUnicodeString.c)
 *     ViRtlReplaceStringBuffer @ 0x1406CF4E4 (ViRtlReplaceStringBuffer.c)
 */

int __fastcall VerifierRtlDuplicateUnicodeString(ULONG a1, const UNICODE_STRING *a2, UNICODE_STRING *a3)
{
  int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlDuplicateUnicodeString(a1, a2, a3);
  v6 = result;
  if ( result >= 0 )
  {
    ViRtlReplaceStringBuffer(a3, &v6, retaddr);
    return v6;
  }
  return result;
}
