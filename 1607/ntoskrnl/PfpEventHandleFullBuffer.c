/*
 * XREFs of PfpEventHandleFullBuffer @ 0x1400EE2A0
 * Callers:
 *     <none>
 * Callees:
 *     PfTFullEventListAdd @ 0x1400EE2E8 (PfTFullEventListAdd.c)
 */

LONG __fastcall PfpEventHandleFullBuffer(_SLIST_ENTRY *a1)
{
  LONG result; // eax

  result = PfTFullEventListAdd(a1);
  if ( !Event.Header.SignalState )
  {
    result = LOWORD(stru_140328220.Alignment);
    if ( LOWORD(stru_140328220.Alignment) >= (unsigned int)(2 * KeNumberProcessors_0 + 4) >> 1 )
      return KeSetEvent(&Event, 0, 0);
  }
  return result;
}
