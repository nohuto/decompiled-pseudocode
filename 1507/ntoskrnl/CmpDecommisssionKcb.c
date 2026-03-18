/*
 * XREFs of CmpDecommisssionKcb @ 0x14055802C
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDecommisssionKcb(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(a1, a2, a3, a4);
}
