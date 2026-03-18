/*
 * XREFs of RtlNtStatusToDosError @ 0x14049D1D0
 * Callers:
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14068530C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140686B20 (LocalGetStringForSid.c)
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
