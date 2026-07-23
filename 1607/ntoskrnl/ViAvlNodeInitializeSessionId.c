/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x1400824BC
 * Callers:
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400137C0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 */

void __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    *(_DWORD *)(a2 + 16) = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    *(_DWORD *)(a2 + 16) = -1;
}
