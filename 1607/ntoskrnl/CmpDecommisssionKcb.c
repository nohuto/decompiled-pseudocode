/*
 * XREFs of CmpDecommisssionKcb @ 0x14053F1A8
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4BDC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049AFB8 (CmpCleanUpKCBCacheTable.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDecommisssionKcb(unsigned __int64 P)
{
  if ( (*(_DWORD *)(P + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(P);
}
