/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x14000B440
 * Callers:
 *     <none>
 * Callees:
 *     SmpPagefileInitialize @ 0x140008580 (SmpPagefileInitialize.c)
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x14000B4D0 (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpIsRamdiskBoot @ 0x14000FE5C (SmpIsRamdiskBoot.c)
 */

char SmpAsyncMemoryConfiguration()
{
  char v0; // bl
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  v1 = SmpPagefileInitialize();
  if ( v1 >= 0 )
  {
    LOBYTE(v1) = NtSerializeBoot(v2);
    if ( !SmpUseDedicatedDumpFile )
    {
      SystemInformation[0] = 0;
      LOBYTE(v1) = NtSetSystemInformation(SystemCrashDumpStateInformation, SystemInformation, 4u);
    }
    if ( !SmpHostSmss )
    {
      v0 = 0;
      SmpPagefileOnOsVolume = 0;
    }
    if ( SmpMiniNTBoot == 1 )
    {
      v5 = 0;
      LOBYTE(v1) = SmpIsRamdiskBoot(&v5);
      if ( v5 == 1 )
        v0 = 0;
      else
        SmpPagefileOnOsVolume = 1;
    }
    if ( !SmpMiniNTBoot )
      LOBYTE(v1) = SmpCheckMemoryCoolingCompatibility();
    if ( v0 == 1 )
      LOBYTE(v1) = SmpCreatePagingFiles();
    if ( SmpCrashDumpKey )
      LOBYTE(v1) = NtClose(SmpCrashDumpKey);
  }
  return v1;
}
