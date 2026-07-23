/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140702EA4
 * Callers:
 *     VfDriverEnableVerifier @ 0x140704AF8 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall VfUtilIsProtectedDriver(PCUNICODE_STRING String2)
{
  unsigned int v2; // ebx

  v2 = 0;
  while ( !RtlEqualUnicodeString((PCUNICODE_STRING)&VfProtectedDriverNames[2 * v2], String2, 1u) )
  {
    if ( ++v2 >= 0x12 )
      return 0LL;
  }
  return 1LL;
}
