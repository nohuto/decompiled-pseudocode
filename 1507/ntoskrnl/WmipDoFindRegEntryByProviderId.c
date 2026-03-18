/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1400CF0DC
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1400CF03C (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x1401226E4 (IoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *i; // rdx

  for ( i = WmipInUseRegEntryHead; i != (_DWORD *)&WmipInUseRegEntryHead; i = *(_DWORD **)i )
  {
    if ( i[14] == a1 && (int)i[12] >= 0 )
      return i;
  }
  return 0LL;
}
