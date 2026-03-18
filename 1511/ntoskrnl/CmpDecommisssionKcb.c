/*
 * XREFs of CmpDecommisssionKcb @ 0x1404C3454
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpDecommisssionKcb(unsigned __int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x80000) != 0 )
    CmpFreeKeyControlBlock(a1);
}
