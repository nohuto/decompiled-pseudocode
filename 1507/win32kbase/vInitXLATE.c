/*
 * XREFs of vInitXLATE @ 0x1C0138A8C
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 vInitXLATE()
{
  __int64 result; // rax
  _DWORD *v1; // rcx

  memset(&xlateTable, 0, 0x100uLL);
  LODWORD(result) = 0;
  xloIdent.cEntries = 256;
  qword_1C0100AA8 = 0LL;
  v1 = &unk_1C0100AE0;
  xloIdent.iUniq = 1;
  *(_QWORD *)&xloIdent.flXlate = 1LL;
  xloIdent.pulXlate = (ULONG *)&unk_1C0100AE0;
  dword_1C0100AB0 = 0;
  qword_1C0100AB8 = 0LL;
  xmmword_1C0100AC0 = 0LL;
  qword_1C0100AD0 = 0LL;
  dword_1C0100AD8 = 0;
  dword_1C0100AB4 = -2;
  do
  {
    *v1 = result;
    result = (unsigned int)(result + 1);
    ++v1;
  }
  while ( (unsigned int)result < 0x100 );
  return result;
}
