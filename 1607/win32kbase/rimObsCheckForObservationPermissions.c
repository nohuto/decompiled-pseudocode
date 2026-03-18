/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C00DFE34
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00CE0F0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C00CE1C0 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C00E145C (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C00E1474 (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(unsigned __int8 a1)
{
  unsigned int v1; // ebx
  int v2; // esi
  int v3; // edi
  int v4; // ebp
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 1;
  v2 = a1 & 1;
  v3 = (a1 >> 1) & 1;
  v4 = RIMIsRunningOnMobile();
  if ( !(unsigned int)RIMIsTestSigningOn() )
  {
    if ( !v4 )
      return 0;
    if ( !v2 )
      goto LABEL_9;
    if ( !v3 )
      return 0;
  }
  if ( v2 )
  {
    v7 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputObservation");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v7) < 0 || !v7 )
      v1 = 0;
  }
LABEL_9:
  if ( v3 )
  {
    v7 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputSuppression");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v7) < 0 || !v7 )
      return 0;
  }
  return v1;
}
