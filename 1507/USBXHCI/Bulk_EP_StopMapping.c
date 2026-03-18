/*
 * XREFs of Bulk_EP_StopMapping @ 0x1C002A0C0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C00200A0 (TR_AttemptStateChange.c)
 */

__int64 __fastcall Bulk_EP_StopMapping(__int64 a1)
{
  __int64 result; // rax

  result = TR_AttemptStateChange(a1, 5, 1);
  if ( (_DWORD)result == 2 )
    return TR_AttemptStateChange(a1, 1, 0);
  return result;
}
