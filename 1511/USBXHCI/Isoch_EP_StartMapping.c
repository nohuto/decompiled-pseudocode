/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C002AE90
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0002DF8 (Isoch_MapTransfers.c)
 *     TR_AttemptStateChange @ 0x1C002846C (TR_AttemptStateChange.c)
 */

__int64 __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  __int64 result; // rax

  _InterlockedExchange((volatile __int32 *)(a1 + 280), 0);
  *(_DWORD *)(a1 + 328) = 0;
  result = TR_AttemptStateChange(a1, 5, 3);
  if ( !(_DWORD)result )
    return Isoch_MapTransfers(a1);
  return result;
}
