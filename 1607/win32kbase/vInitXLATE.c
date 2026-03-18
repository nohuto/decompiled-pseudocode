/*
 * XREFs of vInitXLATE @ 0x1C0156918
 * Callers:
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 vInitXLATE()
{
  __int64 result; // rax
  _DWORD *v1; // rcx

  memset(&xlateTable, 0, 0x100uLL);
  LODWORD(result) = 0;
  xloIdent.cEntries = 256;
  qword_1C011AC28 = 0LL;
  v1 = &unk_1C011AC60;
  xloIdent.iUniq = 1;
  *(_QWORD *)&xloIdent.flXlate = 1LL;
  xloIdent.pulXlate = (ULONG *)&unk_1C011AC60;
  dword_1C011AC30 = 0;
  qword_1C011AC38 = 0LL;
  xmmword_1C011AC40 = 0LL;
  qword_1C011AC50 = 0LL;
  dword_1C011AC58 = 0;
  dword_1C011AC34 = -2;
  do
  {
    *v1 = result;
    result = (unsigned int)(result + 1);
    ++v1;
  }
  while ( (unsigned int)result < 0x100 );
  return result;
}
