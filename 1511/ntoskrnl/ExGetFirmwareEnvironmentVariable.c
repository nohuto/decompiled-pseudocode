/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x14054B5F0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14050CD48 (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14066E12C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140670538 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v9; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( dword_1402D6390 != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return FirmwareEnvironmentVariable;
}
