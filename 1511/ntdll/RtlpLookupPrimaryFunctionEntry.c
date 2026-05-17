/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x1800E9CAC
 * Callers:
 *     RtlpSameFunction @ 0x1800A47C4 (RtlpSameFunction.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  int v3; // eax
  _BYTE *v4; // r8

  v2 = 0;
  while ( 1 )
  {
    v4 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v4 & 0x20) == 0 )
      break;
    v3 = (unsigned __int8)v4[2];
    if ( (v3 & 1) != 0 )
      ++v3;
    ++v2;
    a1 = &v4[2 * v3 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
