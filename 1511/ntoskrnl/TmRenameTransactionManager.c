/*
 * XREFs of TmRenameTransactionManager @ 0x1400011F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_TmRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
