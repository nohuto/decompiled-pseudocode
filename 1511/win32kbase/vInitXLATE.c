/*
 * XREFs of vInitXLATE @ 0x1C013C660
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 vInitXLATE()
{
  __int64 result; // rax
  _DWORD *v1; // rcx

  memset(&xlateTable, 0, 0x100uLL);
  LODWORD(result) = 0;
  xloIdent.cEntries = 256;
  qword_1C0103838 = 0LL;
  v1 = &unk_1C0103870;
  xloIdent.iUniq = 1;
  *(_QWORD *)&xloIdent.flXlate = 1LL;
  xloIdent.pulXlate = (ULONG *)&unk_1C0103870;
  dword_1C0103840 = 0;
  qword_1C0103848 = 0LL;
  xmmword_1C0103850 = 0LL;
  qword_1C0103860 = 0LL;
  dword_1C0103868 = 0;
  dword_1C0103844 = -2;
  do
  {
    *v1 = result;
    result = (unsigned int)(result + 1);
    ++v1;
  }
  while ( (unsigned int)result < 0x100 );
  return result;
}
