/*
 * XREFs of RtlpResetDriveEnvironment @ 0x180045F2C
 * Callers:
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCheckRelativeDrive @ 0x180045FCC (RtlpCheckRelativeDrive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlSetEnvironmentVariable @ 0x180046B40 (RtlSetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpResetDriveEnvironment(WCHAR a1)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING Value; // [rsp+30h] [rbp-30h] BYREF
  WCHAR v5; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+42h] [rbp-1Eh]
  __int16 v7; // [rsp+46h] [rbp-1Ah]
  WCHAR SourceString[2]; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+4Ch] [rbp-14h]

  SourceString[1] = a1;
  v9 = 58;
  SourceString[0] = 61;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = a1;
  v6 = 6029370;
  v7 = 0;
  RtlInitUnicodeString(&Value, &v5);
  return RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
}
