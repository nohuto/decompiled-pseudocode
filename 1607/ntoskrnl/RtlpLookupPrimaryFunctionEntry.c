/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x140211BB8
 * Callers:
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  _BYTE *v4; // r9
  int v5; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*v4 & 0x20) == 0 )
      break;
    v5 = (unsigned __int8)v4[2];
    if ( (v5 & 1) != 0 )
      ++v5;
    ++v3;
    a1 = &v4[2 * v5 + 4];
    if ( v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
