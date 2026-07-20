/*
 * XREFs of SmpLockKnownSubSysList @ 0x14000449C
 * Callers:
 *     SmpReadySubSys @ 0x1400034AC (SmpReadySubSys.c)
 *     SmpWaitForSubSysStartup @ 0x1400038CC (SmpWaitForSubSysStartup.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400043D0 (SmpSearchKnownSubSysDatabase.c)
 *     SmpWaitForSingleSubSys @ 0x14000484C (SmpWaitForSingleSubSys.c)
 *     SmpDeleteSubSys @ 0x1400138C8 (SmpDeleteSubSys.c)
 *     SmpWaitForStatusChange @ 0x140013AB8 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpLockKnownSubSysList(char a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4);
}
