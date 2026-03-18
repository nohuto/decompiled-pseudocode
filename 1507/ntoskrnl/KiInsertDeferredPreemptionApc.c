/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x14000C7EC
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400ED9BC (KiDeferGroupSchedulingPreemption.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 * Callees:
 *     KiSignalThreadForApc @ 0x14000D028 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14000D1B4 (KiInsertQueueApc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r10

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xAu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x200) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 9u);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
      result = *(_QWORD *)(a2 + 64);
    }
    while ( result );
  }
  if ( !*(_BYTE *)(a2 + 730) && (*(_DWORD *)(a2 + 116) & 0x4000) != 0 )
  {
    *(_BYTE *)(a2 + 730) = 1;
    KiInsertQueueApc(a2 + 648);
    LOBYTE(v7) = 2;
    result = KiSignalThreadForApc(a1, v8, v7);
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  return result;
}
