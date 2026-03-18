/*
 * XREFs of RIMReadTTMRegistrySettings @ 0x1C0052094
 * Callers:
 *     RIMInitialize @ 0x1C0051F80 (RIMInitialize.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0052118 (rimRegQueryRegistryDWord.c)
 */

__int64 RIMReadTTMRegistrySettings()
{
  __int64 result; // rax
  int v1; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\INPUT");
  result = rimRegQueryRegistryDWord(&DestinationString, L"WakeOnInputDeviceTypes", 6LL);
  v1 = (result & 2) != 0;
  if ( (result & 4) != 0 )
    v1 |= 2u;
  if ( (result & 8) != 0 )
    v1 |= 0x10u;
  if ( (result & 0x10) != 0 )
    v1 |= 4u;
  if ( (result & 0x20) != 0 )
    v1 |= 8u;
  if ( (result & 0x80u) != 0LL )
    v1 |= 0x20u;
  gWakeOnDeviceTypes = v1;
  return result;
}
