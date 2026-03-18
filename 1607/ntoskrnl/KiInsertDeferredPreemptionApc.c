/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1400C9F34
 * Callers:
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CFE18 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiSignalThreadForApc @ 0x1400CA134 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400CA2B4 (KiInsertQueueApc.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xAu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x200) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 9u);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v8);
      result = *(_QWORD *)(a2 + 64);
    }
    while ( result );
  }
  if ( !*(_BYTE *)(a2 + 730) && (*(_DWORD *)(a2 + 116) & 0x4000) != 0 )
  {
    *(_BYTE *)(a2 + 730) = 1;
    KiInsertQueueApc(a2 + 648);
    LOBYTE(v5) = 2;
    result = KiSignalThreadForApc(a1, v6, v5);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
