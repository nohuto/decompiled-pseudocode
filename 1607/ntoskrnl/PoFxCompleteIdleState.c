/*
 * XREFs of PoFxCompleteIdleState @ 0x140131BB4
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWork @ 0x1400BF0DC (PopFxProcessWork.c)
 *     PopPluginComponentIdleState @ 0x140131500 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131D54 (PopDiagTraceFxComponentIdleState.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r8
  int v7[18]; // [rsp+20h] [rbp-48h] BYREF

  v7[0] = 0;
  v3 = a2;
  memset(&v7[2], 0, 0x38uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v3);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF) == 1 )
  {
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v3, *(unsigned int *)(v4 + 152));
    if ( PopPluginComponentIdleState(a1, v3, v5, v7) )
      PopFxProcessWork(0LL, v7, v6);
  }
}
