/*
 * XREFs of ?AddHead@?$TList@VTSSession@@@@QEAAPEAXPEAVTSSession@@@Z @ 0x18003EE74
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall TList<TSSession>::AddHead(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  _QWORD *result; // rax

  v3 = operator new(0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return 0LL;
  v4[2] = a2;
  *v4 = qword_1800E68A0;
  v4[1] = 0LL;
  if ( qword_1800E68A0 )
    *((_QWORD *)qword_1800E68A0 + 1) = v4;
  else
    qword_1800E68A8 = (__int64)v4;
  ++dword_1800E68B0;
  result = v4;
  qword_1800E68A0 = v4;
  return result;
}
