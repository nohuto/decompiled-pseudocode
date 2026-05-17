/*
 * XREFs of CentennialIssueTracker_EnsureRegistration @ 0x180009310
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180009290 (LdrpLogRelativePathWithAlteredSearchError.c)
 * Callees:
 *     EtwEventSetInformation @ 0x18002A170 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 */

__int64 CentennialIssueTracker_EnsureRegistration()
{
  unsigned int v0; // ebx
  __int128 v2; // xmm0
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  if ( !_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0) )
  {
    v2 = *((_OWORD *)off_18014C508 - 1);
    qword_18014C528 = 0LL;
    qword_18014C530 = 0LL;
    v3 = v2;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int128 *, void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID), void *, __int64 *))EtwEventRegister)(
                          &v3,
                          TlgEnableCallback,
                          &hProvider,
                          &qword_18014C520) )
      EtwEventSetInformation(qword_18014C520, 2LL, off_18014C508, *(unsigned __int16 *)off_18014C508);
    _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  LOBYTE(v0) = CentennialIssueTracker_InitializedState == 2;
  return v0;
}
