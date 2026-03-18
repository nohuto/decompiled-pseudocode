/*
 * XREFs of CmEqualTrans @ 0x140449EE8
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmGetVisibleSubkeyCount @ 0x140446FB4 (CmGetVisibleSubkeyCount.c)
 *     CmpLockIXLockExclusive @ 0x140447FF0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmGetKeyLastWriteTime @ 0x1404F0704 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404F07F0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmRmIsKCBVisible @ 0x140553834 (CmRmIsKCBVisible.c)
 *     CmGetKeyFlags @ 0x140663DA0 (CmGetKeyFlags.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
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
