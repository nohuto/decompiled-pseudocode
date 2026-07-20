/*
 * XREFs of memcpy_0 @ 0x14000CC54
 * Callers:
 *     SmpParseToken @ 0x140002430 (SmpParseToken.c)
 *     SmpConfigureEnvironment @ 0x140004FC0 (SmpConfigureEnvironment.c)
 *     SmpConfigureSharedSessionData @ 0x14000699C (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140006E64 (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x140008F90 (SmpSaveRegistryValue_U.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000FAB0 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCheckFolderForRedirections @ 0x140011CFC (SmpCheckFolderForRedirections.c)
 *     SmpConfigureS0InitCmd @ 0x1400122D0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140012DA4 (SmpRenameTargetFile.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x140014214 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     FindFirstFileExW @ 0x140015BA0 (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
