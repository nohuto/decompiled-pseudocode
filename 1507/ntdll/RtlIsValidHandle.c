/*
 * XREFs of RtlIsValidHandle @ 0x180052600
 * Callers:
 *     RtlIsValidIndexHandle @ 0x1800525C0 (RtlIsValidIndexHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  return Handle
      && Handle >= HandleTable->CommittedHandles
      && Handle < HandleTable->UnCommittedHandles
      && ((HandleTable->SizeOfHandleTableEntry - 1) & (unsigned int)Handle) == 0
      && (Handle->Flags & 1) != 0;
}
