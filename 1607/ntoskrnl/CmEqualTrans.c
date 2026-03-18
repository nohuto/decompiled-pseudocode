/*
 * XREFs of CmEqualTrans @ 0x1403FD9D0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetVisibleSubkeyCount @ 0x1403FBF90 (CmGetVisibleSubkeyCount.c)
 *     CmpLockIXLockExclusive @ 0x1403FCC14 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FCCF4 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpIsKeyStackDeleted @ 0x140405110 (CmpIsKeyStackDeleted.c)
 *     CmpQueryKeyDataFromNode @ 0x140438210 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140439400 (CmpIsKeyDeletedForKeyBody.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     CmGetKCBCacheSecurity @ 0x140440230 (CmGetKCBCacheSecurity.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmRmIsKCBVisible @ 0x1404BB590 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1404BB8EC (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404BB9F4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKeyFlags @ 0x140581514 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // r8
  __int64 v4; // r9

  result = 0;
  if ( a1 && a2 )
  {
    if ( a1 == a2 )
    {
      return 1;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 56);
      if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
        return v3 == v4;
      else
        return PnpCompareGuid((const void *)(a1 + 88), (const void *)(a2 + 88));
    }
  }
  return result;
}
