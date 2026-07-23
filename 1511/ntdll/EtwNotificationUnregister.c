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

ULONG __cdecl EtwNotificationUnregister(REGHANDLE RegHandle, PVOID *Context)
{
  REGHANDLE v2; // rdi
  REGHANDLE v4; // rbx

  v2 = HIWORD(RegHandle);
  if ( !HIWORD(RegHandle) )
    goto LABEL_10;
  v4 = RegHandle & 0xFFFFFFFFFFFFLL;
  if ( (RegHandle & 1) != 0 || HIWORD(RegHandle) != *(_WORD *)((RegHandle & 0xFFFFFFFFFFFFLL) + 0x60) )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (_WORD)v2 != _InterlockedCompareExchange16((volatile signed __int16 *)(v4 + 96), 0, v2) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
LABEL_10:
    RtlSetLastWin32Error(6);
    return 6;
  }
  EtwpRemoveRegistrationFromTable((PRTL_BALANCED_NODE)v4);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
  if ( (*(_WORD *)(v4 + 98) & 0x3FFF) != 0xA )
    NtClose(*(HANDLE *)(v4 + 88));
  if ( Context )
    *Context = *(PVOID *)(v4 + 56);
  EtwpFreeRegistration(v4);
  return 0;
}
