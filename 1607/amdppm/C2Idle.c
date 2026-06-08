/*
 * XREFs of C2Idle @ 0x1C00035E0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0005E5C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0005EB0 (WriteGenAddr.c)
 *     IssueVerw @ 0x1C00067C0 (IssueVerw.c)
 */

__int64 __fastcall C2Idle(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int GenAddr; // eax
  int v5; // eax
  __int64 result; // rax

  v2 = a2;
  if ( _InterlockedExchange(&ProcBmRldSet, 0) == 1 )
  {
    GenAddr = ReadGenAddr(&dword_1C0009AFC);
    WriteGenAddr(&dword_1C0009AFC, GenAddr & 0xFFFFFFFD);
    if ( qword_1C0009B0C )
    {
      v5 = ReadGenAddr(&dword_1C0009B08);
      WriteGenAddr(&dword_1C0009B08, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    IssueVerw(HIWORD(v2), a2);
  result = ReadGenAddr(a1);
  if ( (_WORD)v2 )
  {
    result = (unsigned __int16)v2;
    __writemsr(0x48u, (unsigned __int16)v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
