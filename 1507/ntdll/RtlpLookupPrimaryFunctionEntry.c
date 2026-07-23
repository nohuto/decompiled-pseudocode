/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x180011488
 * Callers:
 *     RtlpSameFunction @ 0x180011420 (RtlpSameFunction.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  _BYTE *v3; // r8
  int v5; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v3 & 0x20) == 0 )
      break;
    v5 = (unsigned __int8)v3[2];
    if ( (v5 & 1) != 0 )
      ++v5;
    ++v2;
    a1 = &v3[2 * v5 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
