/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x1400EA214
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // r11d
  _BYTE *v5; // r9
  int v6; // eax

  v4 = 0;
  while ( 1 )
  {
    v5 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*v5 & 0x20) == 0 )
      break;
    v6 = (unsigned __int8)v5[2];
    if ( (v6 & 1) != 0 )
      ++v6;
    ++v4;
    a1 = &v5[2 * v6 + 4];
    if ( v4 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
