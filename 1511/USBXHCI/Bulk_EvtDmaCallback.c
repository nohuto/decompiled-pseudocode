/*
 * XREFs of Bulk_EvtDmaCallback @ 0x1C000EEF0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x1C0002420 (Bulk_MapTransfers.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C000EF40 (Bulk_Stage_MapIntoRing.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD *)(*a4 + 40LL);
  a4[7] = a3;
  result = Bulk_Stage_MapIntoRing(a4);
  if ( !_InterlockedXor((volatile signed __int32 *)(v4 + 288), 1u) )
  {
    result = TR_AttemptStateChange(v4, 3LL, 3LL);
    if ( (_DWORD)result == 3 )
      return Bulk_MapTransfers(v4);
  }
  return result;
}
