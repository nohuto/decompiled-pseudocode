/*
 * XREFs of WmipUpdateRegistration @ 0x14053A950
 * Callers:
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012E36C (WmipFindRegEntryByDevice.c)
 *     WmipQueueRegWork @ 0x14053ABD0 (WmipQueueRegWork.c)
 */

__int64 __fastcall WmipUpdateRegistration(__int64 a1)
{
  __int64 RegEntryByDevice; // rax
  __int64 v2; // rdi
  unsigned int v3; // ebx

  RegEntryByDevice = WmipFindRegEntryByDevice(a1);
  v2 = RegEntryByDevice;
  if ( RegEntryByDevice )
  {
    v3 = WmipQueueRegWork(1LL, RegEntryByDevice);
    WmipUnreferenceRegEntry(v2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
