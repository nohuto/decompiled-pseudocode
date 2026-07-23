/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1400D7B68
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400D7BB0 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !stru_140367D90.Header.SignalState )
  {
    result = LOWORD(stru_1403503E0.Alignment);
    if ( LOWORD(stru_1403503E0.Alignment) >= (unsigned int)(2 * KeNumberProcessors_0 + 4) >> 1 )
      return KeSetEvent(&stru_140367D90, 0, 0);
  }
  return result;
}
