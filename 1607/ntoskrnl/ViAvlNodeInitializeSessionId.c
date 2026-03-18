/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14008435C
 * Callers:
 *     VfAvlReserveNode @ 0x1400842D8 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140013C40 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 */

void __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    *(_DWORD *)(a2 + 16) = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    *(_DWORD *)(a2 + 16) = -1;
}
