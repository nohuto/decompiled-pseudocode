/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x1407085C8
 * Callers:
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140015FA4 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140195A80 (memset.c)
 */

PVOID __fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  PVOID result; // rax
  PVOID v3; // rbx

  result = AuthzBasepMemAlloc(0x260uLL, a2, 0x74416553u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}
