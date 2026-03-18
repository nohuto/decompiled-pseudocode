/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0081DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::TokenQueueTableEntry::Allocate(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return Win32AllocPool();
}
