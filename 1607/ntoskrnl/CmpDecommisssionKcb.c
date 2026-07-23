/*
 * XREFs of CmpDecommisssionKcb @ 0x14053F6E8
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDecommisssionKcb(unsigned __int64 P)
{
  if ( (*(_DWORD *)(P + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(P);
}
