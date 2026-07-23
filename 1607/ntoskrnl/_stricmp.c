/*
 * XREFs of _stricmp @ 0x14014D904
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1406FE014 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x140703D48 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140722CBC (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1407A8C5C (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x1407AC78C (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x1407AF270 (CmpAppendSection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
