/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x18004F164
 * Callers:
 *     RtlpHpLfhOwnerCleanup @ 0x180050858 (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhCacheAddSubsegment @ 0x18004EA78 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  if ( (a4 & 1) != 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64, bool))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
             *(_QWORD *)a1,
             a2,
             (a4 & 2) != 0);
  else
    return RtlpHpLfhCacheAddSubsegment(a1 + 80, a1, a2, (a4 & 2) != 0);
}
