/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x140407970
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140407698 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406591BC (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x14040799C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x140407B24 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 */

__int64 __fastcall CmpGetCmHiveFromVirtualPath(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CmpGetVirtualizationIDFromFullVirtualPath(a1, v4);
  if ( (int)result >= 0 )
    return CmpGetMappingHiveForString(v4, a2);
  return result;
}
