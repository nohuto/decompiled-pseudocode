/*
 * XREFs of _stricmp @ 0x140143F74
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1406B2388 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1406B7EC4 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x1406D6CBC (HdlspBugCheckProcessing.c)
 *     CmpSetupConfigurationTree @ 0x140743B30 (CmpSetupConfigurationTree.c)
 *     CmpSearchSectionByName @ 0x140760968 (CmpSearchSectionByName.c)
 *     CmpAppendSection @ 0x140761D94 (CmpAppendSection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
