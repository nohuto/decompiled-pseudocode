/*
 * XREFs of RtlNtStatusToDosError @ 0x1404A6B50
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404B9DFC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  _DWORD *Teb; // rdx

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
