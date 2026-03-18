/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C0024A50
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C00250A4 (Isoch_MapTransfers.c)
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
