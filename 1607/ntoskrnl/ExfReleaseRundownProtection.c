/*
 * XREFs of ExfReleaseRundownProtection @ 0x140090490
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400EDE54 (PfFbLogEntryComplete.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     PsReleaseProcessExitSynchronization @ 0x1404AC0D0 (PsReleaseProcessExitSynchronization.c)
 *     ExpCopyProcessInfo @ 0x1404EA2E0 (ExpCopyProcessInfo.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
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
