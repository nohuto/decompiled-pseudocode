/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1400F0420
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400F0468 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(struct _SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_1403281E0.Alignment);
    if ( LOWORD(stru_1403281E0.Alignment) >= (unsigned int)(2 * KeNumberProcessors_0 + 4) >> 1 )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
