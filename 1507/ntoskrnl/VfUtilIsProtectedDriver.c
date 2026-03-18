/*
 * XREFs of VfUtilIsProtectedDriver @ 0x140737970
 * Callers:
 *     VfDriverEnableVerifier @ 0x140738F7C (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
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
