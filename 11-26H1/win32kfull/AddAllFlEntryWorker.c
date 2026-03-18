/*
 * XREFs of AddAllFlEntryWorker @ 0x14024F3F8
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, __int64 a2)
{
  void *v2; // rbx
  struct _RTL_QUERY_REGISTRY_TABLE *v4; // rdx

  v2 = (void *)(int)a2;
  v4 = *(struct _RTL_QUERY_REGISTRY_TABLE **)(W32GetSessionState((_DWORD)Path, a2) + 96);
  v4[253].Flags = 4;
  v4[253].Name = 0LL;
  v4[253].EntryContext = v2;
  v4[253].DefaultType = 0;
  v4[253].DefaultData = 0LL;
  v4[253].DefaultLength = 0;
  v4[254].QueryRoutine = 0LL;
  v4[254].Flags = 0;
  v4[254].Name = 0LL;
  v4[253].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)BuildAndLoadLinkedFontRoutine;
  return RtlQueryRegistryValues(0, Path, v4 + 253, 0LL, 0LL);
}
