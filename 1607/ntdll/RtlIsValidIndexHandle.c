/*
 * XREFs of RtlIsValidIndexHandle @ 0x180068290
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x180067B5C (RtlpFreeHandleForAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180068258 (RtlpAtomMapAtomToHandleEntry.c)
 * Callees:
 *     RtlIsValidHandle @ 0x1800682D0 (RtlIsValidHandle.c)
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  _RTL_HANDLE_TABLE_ENTRY *v4; // rbx

  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)HandleTable->CommittedHandles
                               + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !RtlIsValidHandle(HandleTable, v4) )
    return 0;
  *Handle = v4;
  return 1;
}
