/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1400C2744
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1400C26D8 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x14012FEA0 (IoWMIWriteEvent.c)
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
