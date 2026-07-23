/*
 * XREFs of CmpReparseToVirtualPath @ 0x14060180C
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpVirtualPathPresent @ 0x140601DC0 (CmpVirtualPathPresent.c)
 */

char __fastcall CmpReparseToVirtualPath(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  if ( *(char *)(a1 + 178) < 0 && (int)CmRealKCBToVirtualPath(a1, 0LL, a3) >= 0 )
  {
    if ( (unsigned __int8)CmpVirtualPathPresent(a3) )
      return 1;
    RtlFreeAnsiString(a3);
  }
  return 0;
}
