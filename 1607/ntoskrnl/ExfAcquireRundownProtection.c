/*
 * XREFs of ExfAcquireRundownProtection @ 0x14008C5E0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x14008C5A0 (ExAcquireRundownProtectionCacheAware.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 *     NtEnumerateValueKey @ 0x140439540 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     PsAcquireProcessExitSynchronization @ 0x1404B1F04 (PsAcquireProcessExitSynchronization.c)
 *     ExpCopyProcessInfo @ 0x140507350 (ExpCopyProcessInfo.c)
 *     ObReferenceProcessHandleTable @ 0x14050D150 (ObReferenceProcessHandleTable.c)
 *     ObpCallPreOperationCallbacks @ 0x140511820 (ObpCallPreOperationCallbacks.c)
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
