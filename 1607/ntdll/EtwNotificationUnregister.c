/*
 * XREFs of EtwNotificationUnregister @ 0x180059700
 * Callers:
 *     SbCleanupTrace @ 0x180007510 (SbCleanupTrace.c)
 *     SbSelectProcedure @ 0x18002E9C0 (SbSelectProcedure.c)
 *     EtwUnregisterTraceGuids @ 0x1800596A0 (EtwUnregisterTraceGuids.c)
 *     EtwEventUnregister @ 0x1800596F0 (EtwEventUnregister.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x1800827E4 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpFreeRegistration @ 0x1800597D8 (EtwpFreeRegistration.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180059814 (EtwpRemoveRegistrationFromTable.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
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
