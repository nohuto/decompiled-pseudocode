/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1400312FC
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x140031480 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140031620 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r10
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
    LOBYTE(v6) = 2;
    result = KiSignalThreadForApc(a1, v7, v6);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
