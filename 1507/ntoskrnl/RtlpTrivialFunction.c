/*
 * XREFs of RtlpTrivialFunction @ 0x14017E660
 * Callers:
 *     RtlpVirtualUnwind @ 0x14001B25C (RtlpVirtualUnwind.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = a4[2];
    if ( v4 )
      return 0LL;
  }
  return 1LL;
}
