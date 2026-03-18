/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@KVTokenToWindowRecord@CLegacySurfaceManager@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800B47A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGenericTableMap<unsigned long,CLegacySurfaceManager::TokenToWindowRecord>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           ByteSize);
}
