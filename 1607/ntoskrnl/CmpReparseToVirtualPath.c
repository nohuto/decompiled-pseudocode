/*
 * XREFs of CmpReparseToVirtualPath @ 0x140601758
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     CmpVirtualPathPresent @ 0x140601D0C (CmpVirtualPathPresent.c)
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
