/*
 * XREFs of PoFxCompleteIdleState @ 0x140139BA8
 * Callers:
 *     VerifierPoFxCompleteIdleState @ 0x140742390 (VerifierPoFxCompleteIdleState.c)
 * Callees:
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     PopPluginComponentIdleState @ 0x14013939C (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140139C3C (PopDiagTraceFxComponentIdleState.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  signed __int32 v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  int v9[18]; // [rsp+20h] [rbp-48h] BYREF

  v9[0] = 0;
  v3 = a2;
  memset(&v9[2], 0, 0x38uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v3);
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( v5 == 1 )
  {
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v3, *(unsigned int *)(v4 + 152));
    LOBYTE(v5) = PopPluginComponentIdleState(a1, v3, v6, v9);
    if ( (_BYTE)v5 )
      LOBYTE(v5) = PopFxProcessWork(0LL, v9, v7);
  }
  return v5;
}
