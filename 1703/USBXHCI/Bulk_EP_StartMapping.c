/*
 * XREFs of Bulk_EP_StartMapping @ 0x1C002AD30
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x1C0002400 (Bulk_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C0025084 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  __int64 result; // rax

  _InterlockedExchange((volatile __int32 *)(a1 + 276), 0);
  *(_DWORD *)(a1 + 304) = 0;
  result = TR_AttemptStateChange(a1, 5, 3);
  if ( !(_DWORD)result )
    return Bulk_MapTransfers(a1);
  return result;
}
