/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x1405C2A9C
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14058417C (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406F1A38 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x1406F40E4 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_1403254D0 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return FirmwareEnvironmentVariable;
}
