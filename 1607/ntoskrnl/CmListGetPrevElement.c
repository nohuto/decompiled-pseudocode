/*
 * XREFs of CmListGetPrevElement @ 0x1404BBAA0
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x140438210 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x140440230 (CmGetKCBCacheSecurity.c)
 *     CmGetKeyLastWriteTime @ 0x1404BB8EC (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x140581514 (CmGetKeyFlags.c)
 *     CmpGetEffectiveCellType @ 0x14060DD0C (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
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
