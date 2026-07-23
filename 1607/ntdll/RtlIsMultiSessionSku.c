/*
 * XREFs of RtlIsMultiSessionSku @ 0x180072070
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007181C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD70 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  BOOLEAN result; // al
  _BYTE JobObjectInformation[32]; // [rsp+30h] [rbp-38h] BYREF

  result = byte_18014F668;
  if ( byte_18014F668 == -1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      NtQueryInformationJobObject(0LL, JobObjectServerSiloUserSharedData, JobObjectInformation, 0x20u, 0LL);
      result = JobObjectInformation[24];
    }
    else
    {
      result = MEMORY[0x7FFE02F1] & 1;
    }
    byte_18014F668 = result;
  }
  return result;
}
