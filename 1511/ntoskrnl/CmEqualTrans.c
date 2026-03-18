/*
 * XREFs of CmEqualTrans @ 0x1403E0784
 * Callers:
 *     CmRmIsKCBVisible @ 0x1403B47C4 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x1403D6958 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1403D6A44 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x1403DB0B4 (CmGetVisibleSubkeyCount.c)
 *     CmpLockIXLockExclusive @ 0x1403DDE20 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1403FDA60 (CmpFindSubKeyByNumberEx.c)
 *     CmRmIsKCBDeleted @ 0x1403FE220 (CmRmIsKCBDeleted.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
 *     CmGetKeyFlags @ 0x1405EBDF8 (CmGetKeyFlags.c)
 * Callees:
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 48)) != 0 )
    return v3 == v4;
  else
    return RtlCompareMemory((const void *)(a1 + 80), (const void *)(a2 + 80), 0x10uLL) == 16;
}
