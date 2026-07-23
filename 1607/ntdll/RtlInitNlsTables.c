/*
 * XREFs of RtlInitNlsTables @ 0x180087A50
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x180094334 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x180087AC0 (RtlInitCodePageTable.c)
 */

void __cdecl RtlInitNlsTables(
        PUSHORT AnsiNlsBase,
        PUSHORT OemNlsBase,
        PUSHORT LanguageNlsBase,
        PNLSTABLEINFO TableInfo)
{
  __int64 v7; // rcx

  RtlInitCodePageTable(AnsiNlsBase, &TableInfo->AnsiTableInfo);
  RtlInitCodePageTable(OemNlsBase, &TableInfo->OemTableInfo);
  v7 = (unsigned __int16)(LanguageNlsBase[1] + 1);
  TableInfo->UpperCaseTable = LanguageNlsBase + 2;
  TableInfo->LowerCaseTable = &LanguageNlsBase[v7 + 1];
}
