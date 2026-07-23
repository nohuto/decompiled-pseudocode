/*
 * XREFs of RtlFreeHandle @ 0x180067BB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

BOOLEAN __cdecl RtlFreeHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  BOOLEAN result; // al

  memset(Handle, 0, HandleTable->SizeOfHandleTableEntry);
  *Handle = (_RTL_HANDLE_TABLE_ENTRY)HandleTable->FreeHandles;
  result = 1;
  HandleTable->FreeHandles = Handle;
  return result;
}
