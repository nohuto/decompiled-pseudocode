/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x14066D1A8
 * Callers:
 *     NtSetSystemEnvironmentValueEx @ 0x140672C68 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14066F738 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140670538 (ExpUnicodeStringToNonpagedWStr.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  int v5; // esi
  int v8; // ebx
  void *v9; // rdi
  unsigned int v10; // ebx

  v5 = a3;
  if ( dword_1402D6390 != 2 )
    return 3221225474LL;
  v8 = a3 != 0 ? a4 : 0;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, v5, v8, a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
