/*
 * XREFs of RtlIsMultiSessionSku @ 0x180072080
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18007182C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18002CD80 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationJobObject @ 0x1800A8AF0 (NtQueryInformationJobObject.c)
 */

char RtlIsMultiSessionSku()
{
  char result; // al
  _BYTE v1[32]; // [rsp+30h] [rbp-38h] BYREF

  result = byte_18014F668;
  if ( byte_18014F668 == -1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      NtQueryInformationJobObject(0LL, 39LL, v1, 32LL, 0LL);
      result = v1[24];
    }
    else
    {
      result = MEMORY[0x7FFE02F1] & 1;
    }
    byte_18014F668 = result;
  }
  return result;
}
