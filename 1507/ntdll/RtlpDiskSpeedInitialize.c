/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180081220
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x180081290 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x180081340 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall RtlpDiskSpeedInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int VolumeHandle; // edi
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  Handle[0] = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(2147352624LL, Handle, a3);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v7);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v7;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  LOBYTE(v3) = VolumeHandle >= 0;
  return v3;
}
