/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180106248
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180079DA4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        void **Buffer)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(Buffer + 2);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
