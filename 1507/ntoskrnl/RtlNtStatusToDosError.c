/*
 * XREFs of RtlNtStatusToDosError @ 0x140529030
 * Callers:
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x14070A0FC (LocalGetStringForSid.c)
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
