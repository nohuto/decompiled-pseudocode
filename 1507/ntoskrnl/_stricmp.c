/*
 * XREFs of _stricmp @ 0x140171FF4
 * Callers:
 *     ViThunkSnapSharedExportByName @ 0x1407323D0 (ViThunkSnapSharedExportByName.c)
 *     VfCheckImageCompliance @ 0x1407383E8 (VfCheckImageCompliance.c)
 *     HdlspBugCheckProcessing @ 0x140759D1C (HdlspBugCheckProcessing.c)
 *     CmpSearchSectionByName @ 0x1407CF1E8 (CmpSearchSectionByName.c)
 *     CmpSetupConfigurationTree @ 0x1407D7ECC (CmpSetupConfigurationTree.c)
 *     CmpAppendSection @ 0x1407D9680 (CmpAppendSection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return _ascii_stricmp((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
