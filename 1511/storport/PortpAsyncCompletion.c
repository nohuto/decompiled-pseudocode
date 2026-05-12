/*
 * XREFs of PortpAsyncCompletion @ 0x1C003D2E0
 * Callers:
 *     <none>
 * Callees:
 *     PortpCompleteRequestIrp @ 0x1C003D3CC (PortpCompleteRequestIrp.c)
 */

__int64 __fastcall PortpAsyncCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  KIRQL Irql; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  if ( _InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 184) + 32LL) = 0LL;
  }
  else
  {
    IoAcquireCancelSpinLock(&Irql);
    v5 = *(_QWORD *)(v3 + 184);
    v6 = *(_QWORD *)(v5 + 32);
    *(_QWORD *)(v5 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    if ( v6 )
      return 3221225494LL;
  }
  PortpCompleteRequestIrp(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
