/*
 * XREFs of C3Idle @ 0x1C00043B0
 * Callers:
 *     <none>
 * Callees:
 *     IssueVerw @ 0x1C0002240 (IssueVerw.c)
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00035CC (WriteGenAddr.c)
 */

void __fastcall C3Idle(__int64 a1, int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C000DF3C);
  WriteGenAddr(&dword_1C000DF3C, GenAddr | 2LL);
  if ( qword_1C000DF4C )
  {
    v5 = ReadGenAddr((__int64)&dword_1C000DF48);
    WriteGenAddr(&dword_1C000DF48, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((__int64)&dword_1C000DF54);
  WriteGenAddr(&dword_1C000DF54, v6 | 1);
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C000DF54, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
