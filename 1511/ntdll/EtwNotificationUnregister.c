/*
 * XREFs of EtwNotificationUnregister @ 0x180047E50
 * Callers:
 *     SbSelectProcedure @ 0x18000EFD0 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x180047DF0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x180047E40 (EtwEventUnregister.c)
 *     SbCleanupTrace @ 0x18005B770 (SbCleanupTrace.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x18007E850 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800C7CF0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800C7D78 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x180047F28 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180047F64 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall EtwNotificationUnregister(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rbx

  v4 = HIWORD(a1);
  if ( !HIWORD(a1) )
    goto LABEL_10;
  v6 = a1 & 0xFFFFFFFFFFFFLL;
  if ( (a1 & 1) != 0 || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive(v6 + 72, a2, a3, a4);
  if ( (_WORD)v4 != _InterlockedCompareExchange16((volatile signed __int16 *)(v6 + 96), 0, v4) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
LABEL_10:
    RtlSetLastWin32Error(6LL);
    return 6LL;
  }
  EtwpRemoveRegistrationFromTable(v6);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 72));
  if ( (*(_WORD *)(v6 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v6 + 88));
  if ( a2 )
    *(_QWORD *)a2 = *(_QWORD *)(v6 + 56);
  EtwpFreeRegistration(v6);
  return 0LL;
}
