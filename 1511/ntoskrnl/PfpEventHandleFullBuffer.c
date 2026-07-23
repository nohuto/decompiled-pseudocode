/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1400FABF8
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400FAC40 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !stru_140317AD0.Header.SignalState )
  {
    result = LOWORD(stru_140302660.Alignment);
    if ( LOWORD(stru_140302660.Alignment) >= (unsigned int)(2 * KeNumberProcessors_0 + 4) >> 1 )
      return KeSetEvent(&stru_140317AD0, 0, 0);
  }
  return result;
}
