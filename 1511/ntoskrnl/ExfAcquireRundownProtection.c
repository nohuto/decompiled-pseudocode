/*
 * XREFs of ExfAcquireRundownProtection @ 0x140079F60
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1400D5490 (ExAcquireRundownProtectionCacheAware.c)
 *     ExpCopyProcessInfo @ 0x1403EBED0 (ExpCopyProcessInfo.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     CmOpenKey @ 0x1404128E0 (CmOpenKey.c)
 *     PsAcquireProcessExitSynchronization @ 0x1404A3654 (PsAcquireProcessExitSynchronization.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExfAcquireRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rtt

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  if ( (RunRef->Count & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v2 = Count;
    Count = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count + 2, Count);
    if ( v2 == Count )
      break;
    if ( (Count & 1) != 0 )
      return 0;
  }
  return 1;
}
