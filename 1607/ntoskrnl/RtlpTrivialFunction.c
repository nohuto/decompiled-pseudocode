/*
 * XREFs of RtlpTrivialFunction @ 0x1401599F0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400B0FB8 (RtlVirtualUnwind.c)
 *     RtlpVirtualUnwind @ 0x1400F125C (RtlpVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpTrivialFunction(__int64 a1, __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  unsigned __int8 v4; // cl
  int v5; // r10d

  v4 = a4[2];
  v5 = 0;
  if ( v4 )
    return 0LL;
  while ( (*a4 & 0x20) != 0 )
  {
    if ( (unsigned int)++v5 > 0x20 )
      RtlRaiseStatus(-1073741569);
    a4 = (_BYTE *)(a2 + *(unsigned int *)&a4[2 * v4 + 12]);
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a4[2];
    if ( v4 )
      return 0LL;
  }
  return 1LL;
}
