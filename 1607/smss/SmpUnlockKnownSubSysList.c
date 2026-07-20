/*
 * XREFs of SmpUnlockKnownSubSysList @ 0x140004478
 * Callers:
 *     wmain @ 0x14000135C (wmain.c)
 *     SmpReadySubSys @ 0x1400034AC (SmpReadySubSys.c)
 *     SmpHandleConnectionRequest @ 0x140003F40 (SmpHandleConnectionRequest.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400043D0 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x14000484C (SmpWaitForSingleSubSys.c)
 *     SmpTerminateCSR @ 0x140004D8C (SmpTerminateCSR.c)
 *     SmpLoadSubSystem @ 0x1400127B4 (SmpLoadSubSystem.c)
 *     SmpDeleteSubSys @ 0x1400138C8 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140013AB8 (SmpWaitForStatusChange.c)
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
