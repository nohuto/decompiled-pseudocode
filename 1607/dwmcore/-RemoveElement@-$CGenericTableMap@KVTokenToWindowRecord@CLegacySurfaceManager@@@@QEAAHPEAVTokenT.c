/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@QEAAHPEAVTokenToWindowRecord@CLegacySurfaceManager@@@Z @ 0x18011B924
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        void *a2)
{
  return RtlDeleteElementGenericTable(a1, a2);
}
