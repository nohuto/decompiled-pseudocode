/*
 * XREFs of VerifierRtlDuplicateUnicodeString @ 0x14071B2AC
 * Callers:
 *     <none>
 * Callees:
 *     ViRtlReplaceStringBuffer @ 0x14071B59C (ViRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VerifierRtlDuplicateUnicodeString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  result = pXdvRtlDuplicateUnicodeString();
  v6 = result;
  if ( (int)result >= 0 )
  {
    ViRtlReplaceStringBuffer(a3, &v6, retaddr);
    return v6;
  }
  return result;
}
