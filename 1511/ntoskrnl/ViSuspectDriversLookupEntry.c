/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x1406C7D20
 * Callers:
 *     VfDriverEnableVerifier @ 0x1406B8A3C (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x1406C7AEC (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x1407856DC (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall ViSuspectDriversLookupEntry(PCUNICODE_STRING String2)
{
  __int64 i; // rbx

  for ( i = VfSuspectDriversList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &VfSuspectDriversList )
      return 0LL;
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), String2, 1u) )
      break;
  }
  return i;
}
