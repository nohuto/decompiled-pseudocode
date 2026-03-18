/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x1801406D8
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180029EE0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)Buffer + 16);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
