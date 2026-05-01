/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x18001F7C0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18001F768 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // eax
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    *a1 = (unsigned __int8)RtlpUserPolicies;
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    {
      v2 = 10;
    }
    else
    {
      if ( !RtlGetNtProductType(&ProductType) || ProductType != NtProductWinNt )
      {
        *a1 = 20;
        return 0LL;
      }
      v2 = 10;
      if ( MEMORY[0x7FFE02E8] > 0x51400u )
        v2 = 20;
    }
    *a1 = v2;
  }
  return 0LL;
}
