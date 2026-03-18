/*
 * XREFs of CmListGetPrevElement @ 0x1403DF088
 * Callers:
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmGetKeyLastWriteTime @ 0x1403D6958 (CmGetKeyLastWriteTime.c)
 *     CmpSearchKCBForTransChildByName @ 0x1403DF018 (CmpSearchKCBForTransChildByName.c)
 *     CmpQueryKeyDataFromNode @ 0x1403FCE20 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
 *     CmGetKeyFlags @ 0x1405EBDF8 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( !*a2 )
    *a2 = *(_QWORD *)(a1 + 8);
  v3 = *a2;
  if ( a1 == *a2 )
    return 0LL;
  result = v3 - 32;
  *a2 = *(_QWORD *)(v3 + 8);
  return result;
}
