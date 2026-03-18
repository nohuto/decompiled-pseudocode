/*
 * XREFs of ExfReleaseRundownProtection @ 0x1400D0750
 * Callers:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     PsReleaseProcessExitSynchronization @ 0x1404A3EF0 (PsReleaseProcessExitSynchronization.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
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
