/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180123DE0
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x18005F010 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

__int64 __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        void **Buffer)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(Buffer + 2);
  return RtlDeleteElementGenericTable(Table, Buffer);
}
