/*
 * XREFs of AddAllFlEntryWorker @ 0x1C000F51C
 * Callers:
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, int a2)
{
  SharedQueryTable.Flags = 4;
  SharedQueryTable.Name = 0LL;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)BuildAndLoadLinkedFontRoutine;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C03232E8 = 0LL;
  dword_1C03232F0 = 0;
  qword_1C03232F8 = 0LL;
  SharedQueryTable.EntryContext = (PVOID)a2;
  return RtlQueryRegistryValues(0, Path, &SharedQueryTable, 0LL, 0LL);
}
