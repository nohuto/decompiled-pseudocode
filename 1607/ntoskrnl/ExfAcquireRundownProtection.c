/*
 * XREFs of ExfAcquireRundownProtection @ 0x14008BD40
 * Callers:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x14008BD00 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     NtEnumerateValueKey @ 0x140438410 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     PsAcquireProcessExitSynchronization @ 0x14049C2E4 (PsAcquireProcessExitSynchronization.c)
 *     ExpCopyProcessInfo @ 0x1404EA2E0 (ExpCopyProcessInfo.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
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
