/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C00D14DC
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00C0CD0 (NtRIMAddInputObserver.c)
 *     NtRIMRemoveInputObserver @ 0x1C00C0DD0 (NtRIMRemoveInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C00C0E00 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     <none>
 */

__int64 rimObsCheckForObservationPermissions()
{
  unsigned int v0; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+40h] [rbp+8h] BYREF
  ULONG v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  v5 = 8LL;
  v3 = 0;
  v4 = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v5, 8u, &v4) >= 0
    && (v5 & 0x200000000LL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"inputObservation");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v3) >= 0 )
      return v3 != 0;
  }
  return v0;
}
