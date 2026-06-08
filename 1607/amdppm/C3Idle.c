/*
 * XREFs of C3Idle @ 0x1C0003730
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0005E5C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0005EB0 (WriteGenAddr.c)
 *     IssueVerw @ 0x1C00067C0 (IssueVerw.c)
 */

__int64 __fastcall C3Idle(__int64 a1, int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 result; // rax

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr(&dword_1C0009AFC);
  WriteGenAddr(&dword_1C0009AFC, GenAddr | 2LL);
  if ( qword_1C0009B0C )
  {
    v5 = ReadGenAddr(&dword_1C0009B08);
    WriteGenAddr(&dword_1C0009B08, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr(&dword_1C0009B14);
  WriteGenAddr(&dword_1C0009B14, v6 | 1);
  if ( (_WORD)a2 )
  {
    v7 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a2) )
    IssueVerw(HIWORD(a2), v7);
  ReadGenAddr(a1);
  result = WriteGenAddr(&dword_1C0009B14, v6);
  if ( (_WORD)a2 )
  {
    result = (unsigned __int16)a2;
    __writemsr(0x48u, (unsigned __int16)a2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
