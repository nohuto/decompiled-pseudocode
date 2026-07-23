/*
 * XREFs of RtlpTrivialFunction @ 0x1800A5B7C
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpTrivialFunction(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int8 v4; // al
  int v5; // ecx

  v4 = a4[2];
  v5 = 0;
  if ( v4 )
    return 0LL;
  while ( (*a4 & 0x20) != 0 )
  {
    if ( (unsigned int)++v5 > 0x20 )
      RtlRaiseStatus(-1073741569);
    a4 = (_BYTE *)(a2 + *(unsigned int *)&a4[2 * v4 + 12]);
    v4 = a4[2];
    if ( v4 )
      return 0LL;
  }
  return 1LL;
}
