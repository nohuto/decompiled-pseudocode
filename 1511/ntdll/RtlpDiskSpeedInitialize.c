/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180089230
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1800892A0 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x180089364 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 RtlpDiskSpeedInitialize()
{
  unsigned int v0; // ebx
  int VolumeHandle; // edi
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v0 = 0;
  Handle[0] = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(2147352624LL, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  LOBYTE(v0) = VolumeHandle >= 0;
  return v0;
}
