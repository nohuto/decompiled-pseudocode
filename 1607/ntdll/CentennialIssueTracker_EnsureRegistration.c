/*
 * XREFs of CentennialIssueTracker_EnsureRegistration @ 0x180009300
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180009280 (LdrpLogRelativePathWithAlteredSearchError.c)
 * Callees:
 *     EtwEventSetInformation @ 0x18002A160 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18002A3B0 (EtwEventRegister.c)
 */

__int64 CentennialIssueTracker_EnsureRegistration()
{
  unsigned int v0; // ebx
  GUID v2; // xmm0
  GUID ProviderId; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  if ( !_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0) )
  {
    v2 = (GUID)*((_OWORD *)EventInformation - 1);
    qword_18014C528 = 0LL;
    qword_18014C530 = 0LL;
    ProviderId = v2;
    if ( !EtwEventRegister(&ProviderId, (PENABLECALLBACK)TlgEnableCallback, &hProvider, &RegHandle) )
      EtwEventSetInformation(RegHandle, (EVENT_INFO_CLASS)2, EventInformation, *(unsigned __int16 *)EventInformation);
    _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  LOBYTE(v0) = CentennialIssueTracker_InitializedState == 2;
  return v0;
}
