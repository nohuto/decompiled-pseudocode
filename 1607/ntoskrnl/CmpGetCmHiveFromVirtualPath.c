/*
 * XREFs of CmpGetCmHiveFromVirtualPath @ 0x1403E176C
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1403E14A8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140601DC0 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1403E18A0 (CmpGetVirtualizationIDFromFullVirtualPath.c)
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
