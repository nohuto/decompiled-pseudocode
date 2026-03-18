/*
 * XREFs of RtlInitNlsTables @ 0x140547798
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1405477F4 (RtlInitCodePageTable.c)
 */

void __stdcall RtlInitNlsTables(
        PUSHORT AnsiTableBase,
        PUSHORT OemTableBase,
        PUSHORT CaseTableBase,
        PNLSTABLEINFO NlsTable)
{
  __int64 v6; // rcx

  RtlInitCodePageTable(AnsiTableBase, &CodePageTable);
  RtlInitCodePageTable(OemTableBase, &InitTableInfo);
  v6 = (unsigned __int16)(CaseTableBase[1] + 1);
  qword_140717720 = (__int64)(CaseTableBase + 2);
  qword_140717728 = (__int64)&CaseTableBase[v6 + 1];
}
