/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1405810D4
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x140547E40 (NtQuerySystemEnvironmentValueEx.c)
 *     PopCheckShutdownMarker @ 0x1407BA97C (PopCheckShutdownMarker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0E44 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1406B3228 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_1402FD0D0 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return FirmwareEnvironmentVariable;
}
