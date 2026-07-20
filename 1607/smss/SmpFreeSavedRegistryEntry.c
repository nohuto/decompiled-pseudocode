/*
 * XREFs of SmpFreeSavedRegistryEntry @ 0x140009354
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400050A0 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 *     SmpConfigureSharedSessionData @ 0x14000699C (SmpConfigureSharedSessionData.c)
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpSaveRegistryValue_U @ 0x140008F90 (SmpSaveRegistryValue_U.c)
 *     SmpInitializeDosDevices @ 0x1400091AC (SmpInitializeDosDevices.c)
 *     SmpRecordNewPageFile @ 0x140009478 (SmpRecordNewPageFile.c)
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140009C8C (SmpCleanupStalePageFiles.c)
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
