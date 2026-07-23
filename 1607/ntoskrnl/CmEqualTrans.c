/*
 * XREFs of CmEqualTrans @ 0x1403FC890
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     CmGetVisibleSubkeyCount @ 0x1403FAE50 (CmGetVisibleSubkeyCount.c)
 *     CmpLockIXLockExclusive @ 0x1403FBAD4 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmGetKCBCacheSecurity @ 0x14043F100 (CmGetKCBCacheSecurity.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmRmIsKCBVisible @ 0x1404A72C0 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1404A761C (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404A7724 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKeyFlags @ 0x1405819C0 (CmGetKeyFlags.c)
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
        return PnpCompareGuid(a1 + 88, a2 + 88);
    }
  }
  return result;
}
