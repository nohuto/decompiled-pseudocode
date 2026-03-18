/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x1406C9C70
 * Callers:
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695A80 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14000F2A0 (AuthzBasepMemAlloc.c)
 *     memset @ 0x1401715C0 (memset.c)
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
