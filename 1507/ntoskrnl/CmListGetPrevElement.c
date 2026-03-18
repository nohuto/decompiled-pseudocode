/*
 * XREFs of CmListGetPrevElement @ 0x140448C64
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 *     CmpSearchKCBForTransChildByName @ 0x140448BF4 (CmpSearchKCBForTransChildByName.c)
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmGetKeyLastWriteTime @ 0x1404F0704 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x140663DA0 (CmGetKeyFlags.c)
 *     CmpGetEffectiveCellType @ 0x140663E18 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
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
