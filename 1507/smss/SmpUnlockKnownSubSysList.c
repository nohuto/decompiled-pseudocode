/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x140006B5C
 * Callers:
 *     SmpTerminateCSR @ 0x140001008 (SmpTerminateCSR.c)
 *     wmain @ 0x140004718 (wmain.c)
 *     SmpReadySubSys @ 0x1400053DC (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140006620 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140006AB4 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x140007BA8 (SmpWaitForSingleSubSys.c)
 *     SmpLoadSubSystem @ 0x1400123A4 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400132D8 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x1400134C8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpUnlockKnownSubSysList(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
