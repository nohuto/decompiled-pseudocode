/*
 * XREFs of ExpSafeWcslen @ 0x14066E97C
 * Callers:
 *     ExpSetBootEntry @ 0x14066E9A4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14066F160 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1406705A0 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1406706F4 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  if ( (unsigned __int64)v2 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v2 - a1;
}
