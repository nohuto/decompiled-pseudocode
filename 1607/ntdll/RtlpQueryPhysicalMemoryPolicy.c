/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18002AEC8
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180029F50 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18002CD30 (RtlGetNtProductType.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    *a1 = (unsigned __int8)RtlpUserPolicies;
    return 0LL;
  }
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    v2 = 10;
  }
  else
  {
    if ( !RtlGetNtProductType(&NtProductType) || NtProductType != NtProductWinNt )
    {
      *a1 = 20;
      return 0LL;
    }
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x51400u )
      v2 = 20;
  }
  *a1 = v2;
  return 0LL;
}
