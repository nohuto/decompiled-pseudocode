/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x1800528B4
 * Callers:
 *     RtlpHpLfhOwnerCleanup @ 0x18005277C (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, char a4)
{
  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  if ( (a4 & 1) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64, __int64, bool))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value))(
             a1->Value,
             a2,
             (a4 & 2) != 0);
  else
    return RtlpHpLfhCacheAddSubsegment((__int64)&a1[10], a1, a2, (a4 & 2) != 0);
}
