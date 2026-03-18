/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x1400C48A4
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x1400C4838 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x14012F930 (IoWMIWriteEvent.c)
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
