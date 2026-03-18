/*
 * XREFs of RtlNtStatusToDosError @ 0x1404BAE20
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1404D67F8 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1404D722C (LocalGetSidForString.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14056366C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 *     LocalConvertAclToString @ 0x1406CA388 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1406CB818 (LocalGetStringForSid.c)
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
