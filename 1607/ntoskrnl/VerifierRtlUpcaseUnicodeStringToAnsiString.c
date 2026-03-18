/*
 * XREFs of VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x14071B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ViRtlReplaceStringBuffer @ 0x14071B59C (ViRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VerifierRtlUpcaseUnicodeStringToAnsiString(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlUpcaseUnicodeStringToAnsiString();
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      ViRtlReplaceStringBuffer(a1, &v7, retaddr);
      return v7;
    }
  }
  return result;
}
