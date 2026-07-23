/*
 * XREFs of ViSuspectDriversLookupEntry @ 0x1407166C4
 * Callers:
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversRemove @ 0x140716490 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversIsLoaded @ 0x1407D1AC0 (VfSuspectDriversIsLoaded.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
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
