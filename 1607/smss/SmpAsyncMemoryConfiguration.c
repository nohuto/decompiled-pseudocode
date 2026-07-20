/*
 * XREFs of SmpAsyncMemoryConfiguration @ 0x14000A320
 * Callers:
 *     <none>
 * Callees:
 *     SmpPagefileInitialize @ 0x1400067B0 (SmpPagefileInitialize.c)
 *     SmpNtSerializeBoot @ 0x140006964 (SmpNtSerializeBoot.c)
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 *     SmpCheckMemoryCoolingCompatibility @ 0x14000A3B0 (SmpCheckMemoryCoolingCompatibility.c)
 *     SmpIsRamdiskBoot @ 0x140010270 (SmpIsRamdiskBoot.c)
 */

char SmpAsyncMemoryConfiguration()
{
  char v0; // bl
  NTSTATUS v1; // eax
  _DWORD SystemInformation[6]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+58h] [rbp+20h] BYREF

  SystemInformation[0] = 0;
  v0 = 1;
  v1 = SmpPagefileInitialize();
  if ( v1 >= 0 )
  {
    LOBYTE(v1) = SmpNtSerializeBoot();
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
      v4 = 0;
      LOBYTE(v1) = SmpIsRamdiskBoot(&v4);
      if ( v4 == 1 )
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
