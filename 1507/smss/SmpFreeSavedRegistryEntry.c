/*
 * XREFs of SmpFreeSavedRegistryEntry @ 0x14000A848
 * Callers:
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 *     SmpConfigureSharedSessionData @ 0x140008740 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400093D0 (SmpInitializeKnownDlls.c)
 *     SmpSaveRegistryValue_U @ 0x14000A480 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x14000A6A0 (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x14000AB00 (SmpRecordNewPageFile.c)
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000B1A8 (SmpCleanupStalePageFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpFreeSavedRegistryEntry(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rax

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v2 != a1 )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  return SmpDeallocSavedRegistryEntry(a1);
}
