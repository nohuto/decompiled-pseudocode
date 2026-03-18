/*
 * XREFs of WmipDeregisterDevice @ 0x140546074
 * Callers:
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x140127AA4 (WmipFindRegEntryByDevice.c)
 */

__int64 __fastcall WmipDeregisterDevice(__int64 a1)
{
  unsigned int v2; // edi
  char *RegEntryByDevice; // rsi
  PVOID *i; // rbx

  v2 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice(a1);
  if ( RegEntryByDevice )
  {
    for ( i = (PVOID *)WmipRegWorkList; i != &WmipRegWorkList; i = (PVOID *)*i )
    {
      if ( i[3] == RegEntryByDevice )
      {
        i[3] = 0LL;
        WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( RegEntryByDevice )
  {
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    WmipDeregisterRegEntry(RegEntryByDevice);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
