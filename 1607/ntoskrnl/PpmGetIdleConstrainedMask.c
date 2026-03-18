/*
 * XREFs of PpmGetIdleConstrainedMask @ 0x1401FFA04
 * Callers:
 *     PpmIdlePrepare @ 0x1400DBCB0 (PpmIdlePrepare.c)
 *     PoExecutePerfCheck @ 0x1400DD360 (PoExecutePerfCheck.c)
 *     PpmEstimateIdleDuration @ 0x14013BA50 (PpmEstimateIdleDuration.c)
 *     PpmIdleDurationExpiration @ 0x140200578 (PpmIdleDurationExpiration.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

char __fastcall PpmGetIdleConstrainedMask(_DWORD *a1)
{
  char v1; // di
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  __int64 v7; // r10

  v1 = 0;
  if ( a1 )
  {
    a1[1] = 0;
    *a1 = 1310721;
    memset(a1 + 2, 0, 0xA0uLL);
  }
  if ( KeNumberNodes )
  {
    v3 = KeNodeBlock;
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *v3;
      if ( a1 )
      {
        v6 = *(_WORD *)(v5 + 144);
        v7 = *(_QWORD *)(v5 + 72);
        if ( *(_WORD *)a1 <= v6 )
          *(_WORD *)a1 = v6 + 1;
        *(_QWORD *)&a1[2 * v6 + 2] |= v7;
      }
      if ( *(_QWORD *)(v5 + 72) )
        v1 = 1;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
