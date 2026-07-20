/*
 * XREFs of memcpy_0 @ 0x14000C6BC
 * Callers:
 *     SmpParseToken @ 0x140003980 (SmpParseToken.c)
 *     SmpConfigureEnvironment @ 0x140003AF0 (SmpConfigureEnvironment.c)
 *     SmpConfigureSharedSessionData @ 0x140008740 (SmpConfigureSharedSessionData.c)
 *     SmpCopyListToSharedSection @ 0x140008C00 (SmpCopyListToSharedSection.c)
 *     SmpSaveRegistryValue_U @ 0x14000A480 (SmpSaveRegistryValue_U.c)
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F69C (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpCheckFolderForRedirections @ 0x1400118EC (SmpCheckFolderForRedirections.c)
 *     SmpConfigureS0InitCmd @ 0x140011EC0 (SmpConfigureS0InitCmd.c)
 *     SmpRenameTargetFile @ 0x140012994 (SmpRenameTargetFile.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001393C (BasepGetVolumeDosLetterNameFromNTName.c)
 *     FindFirstFileExW @ 0x1400152E0 (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t MaxCount)
{
  return memcpy(a1, Src, MaxCount);
}
