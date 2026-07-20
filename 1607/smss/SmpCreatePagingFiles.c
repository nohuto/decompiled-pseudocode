/*
 * XREFs of SmpCreatePagingFiles @ 0x1400099F0
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000A320 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpCreateVolumeDescriptors @ 0x1400052D8 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x140008368 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpFreeSavedRegistryEntry @ 0x140009354 (SmpFreeSavedRegistryEntry.c)
 *     SmpEnableSwapOnPagingFiles @ 0x1400094E4 (SmpEnableSwapOnPagingFiles.c)
 *     SmpProcessPagefileDescriptor @ 0x140009970 (SmpProcessPagefileDescriptor.c)
 *     SmpRecordCreatedPageFiles @ 0x140009B78 (SmpRecordCreatedPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140009C8C (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFileDescriptor @ 0x140009D00 (SmpCreatePagingFileDescriptor.c)
 *     SmpCheckForCrashDump @ 0x140009F70 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x14000A108 (SmpSaveOldPageFiles.c)
 *     SmpBuildFilesStringFromList @ 0x14000A250 (SmpBuildFilesStringFromList.c)
 *     SmpCreateEmergencyPagingFile @ 0x14000FF08 (SmpCreateEmergencyPagingFile.c)
 */

char SmpCreatePagingFiles()
{
  int v0; // eax
  __int64 v1; // rcx
  __int64 *i; // rbx
  __int64 *v3; // rdi
  int VolumeDescriptors; // eax
  PVOID *v5; // rdi
  char v6; // bl
  int v7; // eax
  int v8; // eax
  __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rbx
  PVOID v14[2]; // [rsp+20h] [rbp-10h] BYREF
  int SystemInformation; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  SystemInformation = 0;
  memset(v14, 0, sizeof(v14));
  v0 = SmpBuildFilesStringFromList(&SmpExistingPageFilesList, v14);
  LODWORD(v1) = v0;
  if ( v0 < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 2600;
    goto LABEL_25;
  }
  SmpSaveOldPageFiles((unsigned int)v0);
  for ( i = (__int64 *)SmpExistingPageFilesList; i != &SmpExistingPageFilesList; i = (__int64 *)*i )
    SmpCheckForCrashDump(i + 2);
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v3 = (__int64 *)SmpPagingFileList;
  while ( v3 != &SmpPagingFileList )
  {
    v12 = v3;
    SmpCreatePagingFileDescriptor(v3 + 2);
    v3 = (__int64 *)*v3;
    SmpFreeSavedRegistryEntry(v12);
  }
  if ( SmpNumberOfPagefileDescriptors || SmpRegistrySpecifierPresent )
  {
    VolumeDescriptors = SmpCreateVolumeDescriptors();
    v1 = (unsigned int)VolumeDescriptors;
    if ( VolumeDescriptors >= 0 )
    {
      v5 = (PVOID *)SmpPagingFileDescriptorList;
      v6 = 0;
      if ( SmpPagingFileDescriptorList == &SmpPagingFileDescriptorList )
        goto LABEL_28;
      do
      {
        v7 = SmpProcessPagefileDescriptor((__int64)v5);
        v5 = (PVOID *)*v5;
        if ( v7 >= 0 )
          v6 = 1;
      }
      while ( v5 != &SmpPagingFileDescriptorList );
      if ( !v6 )
      {
LABEL_28:
        if ( (int)SmpCreateEmergencyPagingFile(v1) < 0 )
          goto LABEL_17;
      }
      v8 = SmpCreateWorkingSetSwapPagingFile(&v16);
      if ( v8 < 0 )
      {
        if ( v8 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
          goto LABEL_17;
        v9 = 63;
      }
      else
      {
        if ( (*(_BYTE *)(v16 + 16) & 0x10) == 0 )
        {
LABEL_17:
          SmpCleanupStalePageFiles();
          LOBYTE(v10) = v6 == 0;
          LOBYTE(v11) = SmpRecordCreatedPageFiles(v10, v14);
          goto LABEL_18;
        }
        v9 = *(_WORD *)(v16 + 24);
      }
      SmpEnableSwapOnPagingFiles((__int64 **)&SmpPagingFileDescriptorList, v9);
      goto LABEL_17;
    }
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 2682;
LABEL_25:
    *((_DWORD *)&SmpPagefileLog + 2 * v11 + 1) = v1;
    *((_QWORD *)&SmpPagefileLog + v11 + 1) = 0LL;
    goto LABEL_18;
  }
  LOBYTE(v11) = SmpCleanupStalePageFiles();
LABEL_18:
  if ( v14[1] )
    LOBYTE(v11) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v14[1]);
  return v11;
}
