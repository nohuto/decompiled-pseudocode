/*
 * XREFs of PpmExitCoordinatedIdleState @ 0x1401FF72C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmIdleTransitionStall @ 0x140200924 (PpmIdleTransitionStall.c)
 */

char __fastcall PpmExitCoordinatedIdleState(volatile signed __int32 *a1, bool *a2)
{
  char v4; // di
  signed __int32 v5; // eax
  unsigned __int32 i; // edx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0;
  v4 = 0;
  memset(v8, 0, 0x20uLL);
  v8[1] = PopCoordinatedIdleExitTimeout;
  BYTE4(v8[3]) = 1;
  v8[2] = 0LL;
LABEL_8:
  for ( i = *a1; i; i = v5 )
  {
    if ( (i & 0x4000000) == 0 )
    {
      if ( (i & 0x3000000) != 0x2000000 || ((i >> 12) & 0xFFF) != KeGetPcr()->Prcb.Number )
      {
        PpmIdleTransitionStall(v8);
        goto LABEL_8;
      }
      v4 = 1;
      *a2 = 1;
      return v4;
    }
    v5 = _InterlockedCompareExchange(a1, i & 0xFA000FFF | ((KeGetPcr()->Prcb.Number & 0xFFF | 0x2000) << 12), i);
    if ( i == v5 )
    {
      v4 = 1;
      *a2 = (i & 0xFFF) == KeGetPcr()->Prcb.Number;
      return v4;
    }
  }
  return v4;
}
