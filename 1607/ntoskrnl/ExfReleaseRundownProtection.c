/*
 * XREFs of ExfReleaseRundownProtection @ 0x140090D30
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400EFFD4 (PfFbLogEntryComplete.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 *     NtEnumerateValueKey @ 0x140439540 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     PsReleaseProcessExitSynchronization @ 0x1404C03A0 (PsReleaseProcessExitSynchronization.c)
 *     ExpCopyProcessInfo @ 0x140507350 (ExpCopyProcessInfo.c)
 *     ObpCallPreOperationCallbacks @ 0x140511820 (ObpCallPreOperationCallbacks.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

void __stdcall ExfReleaseRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // r8
  bool v2; // zf
  signed __int64 v3; // rax
  unsigned __int64 v4; // r8

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
  {
LABEL_4:
    v4 = Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) == 1
      && !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 32), 0) )
    {
      KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count - 2, Count);
      v2 = Count == v3;
      Count = v3;
      if ( v2 )
        break;
      if ( (v3 & 1) != 0 )
        goto LABEL_4;
    }
  }
}
