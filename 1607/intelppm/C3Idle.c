/*
 * XREFs of C3Idle @ 0x1C0005230
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C000132C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0001380 (WriteGenAddr.c)
 *     IssueVerw @ 0x1C0002A50 (IssueVerw.c)
 */

void __fastcall C3Idle(__int64 a1, int a2)
{
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi

  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C000F44C);
  WriteGenAddr(&dword_1C000F44C, GenAddr | 2LL);
  if ( qword_1C000F45C )
  {
    v5 = ReadGenAddr((__int64)&dword_1C000F458);
    WriteGenAddr(&dword_1C000F458, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((__int64)&dword_1C000F464);
  WriteGenAddr(&dword_1C000F464, v6 | 1);
  if ( (_WORD)a2 )
    __writemsr(0x48u, 0LL);
  if ( HIWORD(a2) )
    IssueVerw(SHIWORD(a2));
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C000F464, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
